{-# LANGUAGE NoMonomorphismRestriction #-}
import Text.Show.Functions
import Data.List

type Nombre = String
type Vida = Int
type Amigos = [Protagonista]
type Tipo = String
type Zombie = Protagonista -> Protagonista
type Reaccion =  Zombie -> Protagonista -> Protagonista
type Hambre = Int

data Protagonista = Protagonista {
   nombre :: Nombre,
   vida :: Vida,
   reaccion :: Reaccion,
   amigos :: Amigos
 } deriving Show

nuevoNombre unNOmbre unProtagonista = unProtagonista {nombre = unNOmbre}
nuevaVida unaVida unProtagonista = unProtagonista {vida = unaVida}
nuevaReaccion unaReaccion unProtagonista = unProtagonista {reaccion = unaReaccion}
nuevosAmigos unosAmigos unProtagonista = unProtagonista {amigos = unosAmigos}

instance Eq Protagonista where
  protagonista1 == protagonista2 =
    nombre protagonista1 == nombre protagonista2 &&
    vida protagonista1 == vida protagonista2

daryl = Protagonista {nombre = "daryl", vida = 55, reaccion = comerSemillasDeErmitanio 30, amigos = [carol] }
maggie = Protagonista {nombre = "maggie", vida = 100, reaccion = caer, amigos = [carol,daryl,krilin]}
carol = Protagonista {nombre = "carol", vida = 200, reaccion = matar , amigos = [victorSueiro]}
krilin = Protagonista {nombre = "krilin", vida = 1, reaccion = sacrificarse, amigos = []}
victorSueiro = Protagonista {nombre = "victorSueiro", vida = 1, reaccion = sacrificarse, amigos = []}

zombieTranqui :: Zombie
zombieTranqui unProtagonista = nuevaVida (vida unProtagonista - 10) unProtagonista

zombieConCasco :: Zombie
zombieConCasco unProtagonista = nuevaVida (div (vida unProtagonista) 2) unProtagonista

zombieSinDientes :: Zombie
zombieSinDientes = id

zombieBuenazoAstuto :: Hambre -> Zombie
zombieBuenazoAstuto unHambre unProtagonista | unHambre <  (length.amigos) unProtagonista = zombieSinDientes unProtagonista
                                            | otherwise = zombieConCasco unProtagonista
zombieReSacado :: Zombie
zombieReSacado unProtagonista  = nuevosAmigos (alterarAmigos (zombieTranqui . zombieConCasco) unProtagonista) (zombieTranqui unProtagonista)

alterarAmigos :: Zombie -> Protagonista -> [Protagonista]
alterarAmigos criterio unProtagonista = map (criterio) (amigos unProtagonista)

pelearAmigos :: [Protagonista] -> Protagonista -> Protagonista
pelearAmigos unosProtagonistas unProtagonista = nuevosAmigos (diferenciaDeConjuntos (amigos unProtagonista) unosProtagonistas) unProtagonista

diferenciaDeConjuntos :: [Protagonista] -> [Protagonista] -> [Protagonista]
diferenciaDeConjuntos xs ys = filter (\x -> not (x `elem` ys)) (xs)

comerSemillasDeErmitanio :: Int -> Reaccion
comerSemillasDeErmitanio semillas unZombie unProtagonista  | estaMuerto unProtagonista = unProtagonista
                                                           | semillas <= 10 = alterarVidadebidoEfectoSemilla unProtagonista
                                                           | otherwise = muerte unProtagonista
estaMuerto :: Protagonista -> Bool
estaMuerto unProtagonista = (vida unProtagonista) <= 0 && noEsAmigoDeKrilinOVictor unProtagonista

noEsAmigoDeKrilinOVictor :: Protagonista -> Bool
noEsAmigoDeKrilinOVictor unProtagonista =  not (any (\x -> x==krilin || x==victorSueiro) (amigos unProtagonista))

alterarVidadebidoEfectoSemilla :: Protagonista -> Protagonista
alterarVidadebidoEfectoSemilla unProtagonista = nuevaVida (100) unProtagonista

horda :: Protagonista -> [Zombie] -> Protagonista
horda unProtagonista unosZombies = foldl (flip (reaccion unProtagonista)) unProtagonista unosZombies

matar :: Reaccion
matar _ = id
caer :: Reaccion
caer unZombie = (unZombie . unZombie)
sacrificarse :: Reaccion
sacrificarse _ = muerte
muerte :: Protagonista -> Protagonista
muerte = nuevaVida (0) . pelearAmigos [krilin,victorSueiro]

{- Consultas:
1) pelearAmigos [daryl,carol,victorSueiro] maggie
Protagonista {nombre = "maggie", vida = 100, reaccion = <function>, amigos =
[Protagonista {nombre = "krilin", vida = 1, reaccion = <function>, amigos = []}]}

2) zombieBuenazoAstuto 5 maggie
Protagonista {nombre = "maggie", vida = 50, reaccion = <function>, amigos =
[Protagonista {nombre = "carol", vida = 200, reaccion = <function>, amigos =
[Protagonista {nombre = "victorSueiro", vida = 1, reaccion = <function>, amigos =
[]}]},Protagonista {nombre = "daryl", vida = 55, reaccion = <function>, amigos =
[Protagonista {nombre = "carol", vida = 200, reaccion = <function>, amigos =
[Protagonista {nombre = "victorSueiro", vida = 1, reaccion = <function>, amigos =
[]}]}]},Protagonista {nombre = "krilin", vida = 1, reaccion = <function>, amigos = []}]}

3) zombieBuenazoAstuto 2 maggie
Protagonista {nombre = "maggie", vida = 100, reaccion = <function>, amigos =
[Protagonista {nombre = "carol", vida = 200, reaccion = <function>, amigos =
[Protagonista {nombre = "victorSueiro", vida = 1, reaccion = <function>, amigos =
[]}]},Protagonista {nombre = "daryl", vida = 55, reaccion = <function>, amigos =
[Protagonista {nombre = "carol", vida = 200, reaccion = <function>, amigos =
[Protagonista {nombre = "victorSueiro", vida = 1, reaccion = <function>, amigos =
[]}]}]},Protagonista {nombre = "krilin", vida = 1, reaccion = <function>, amigos = []}]}

4) horda maggie [zombieTranqui,zombieBuenazoAstuto 20,zombieReSacado,zombieBuenazoAstuto 1, zombieTranqui]
Protagonista {nombre = "maggie", vida = -20, reaccion = <function>, amigos =
[Protagonista {nombre = "carol", vida = 35, reaccion = <function>, amigos =
[Protagonista {nombre = "victorSueiro", vida = 1, reaccion = <function>, amigos =
[]}]},Protagonista {nombre = "daryl", vida = -2, reaccion = <function>, amigos =
[Protagonista {nombre = "carol", vida = 200, reaccion = <function>, amigos =
[Protagonista {nombre = "victorSueiro", vida = 1, reaccion = <function>, amigos =
[]}]}]},Protagonista {nombre = "krilin", vida = -15, reaccion = <function>, amigos = []}]}

5) map (nombre) (filter ((<=0). vida) (amigos (horda maggie [zombieTranqui,zombieBuenazoAstuto 20,zombieReSacado,zombieBuenazoAstuto 1, zombieTranqui])))
["daryl","krilin"]
-}

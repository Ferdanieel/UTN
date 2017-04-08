import Text.Show.Functions
data Personaje = Personaje Nombre PuntosVida deriving (Show)

type Nombre = String
type PuntosVida = Int

daryl = Personaje "daryl" 55
maggie = Personaje "maggie" 100
carol = Personaje "carol" 200

zombieTranqui protagonista = dañoZombieTranqui protagonista
zombieConCasco protagonista = dañoZombieConCasco protagonista
zombieSinDientes = id

matar _ = id
caer unZombie = (unZombie . unZombie)
sacrificarse _ = matarProtagonista

dañoZombieTranqui (Personaje unNombre unosPuntosVida) = Personaje unNombre (unosPuntosVida - 10)
dañoZombieConCasco (Personaje unNombre unosPuntosVida) = Personaje unNombre (div unosPuntosVida 2)
matarProtagonista (Personaje unNombre unosPuntosVida) =  Personaje unNombre 0
-- Mostrar en consola --

-- 3) (zombieTranqui . zombieConCasco) carol
-- 5) sacrificarse zombieTranqui carol
-- 6) caer zombieConCasco (matar zombieSinDientes maggie)

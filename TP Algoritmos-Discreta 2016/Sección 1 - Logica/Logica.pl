%Sección 1: Logica

es_padre(fernando,luciano).
es_padre(lihue,daniel).
es_padre(fernando,gaston).
es_padre(gaston,maria).
es_padre(martin,lucrecia).
es_padre(daniel, luz).
es_padre(luciano,jack).
es_madre(solana,jack).
es_madre(liz,luz).
es_madre(betiana,jack).

es_persona(solana).
es_persona(daniel).
es_persona(liz).
es_persona(luciano).
es_persona(betiana).
es_persona(jack).
es_persona(martin).
es_persona(lucrecia).
es_persona(gaston).
es_persona(maria).
es_persona(lihue).

son_hermanos_as(solana,daniel).
son_hermanos_as(daniel,solana).
son_hermanos_as(liz,luciano).
son_hermanos_as(luciano,liz).

es_desconocido(solana).
es_desconocido(liz).

%Modus Ponens y Modus Tollens
es_hijo_a(X,Y):- es_padre(Y,X); es_madre(Y,X).

posible_pareja(X,Y):-    es_persona(X),
	                 es_persona(Y),
	                 not(son_hermanos_as(X,Y)).

%Silogismo Hipotetico
es_nieto(X,Z):- es_padre(Y,X), es_padre(Z,Y).


















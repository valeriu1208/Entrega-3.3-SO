DROP DATABASE IF EXISTS jugadoresCartas;
CREATE DATABASE jugadoresCartas;
USE jugadoresCartas;
CREATE TABLE Jugadores(nombre TEXT,edad INTEGER, ID INTEGER, Victorias INTEGER);
INSERT INTO Jugadores (nombre,edad,ID,Victorias) VALUES ('Valeriu Marian',19,1,12);
INSERT INTO Jugadores (nombre,edad,ID,Victorias) VALUES ('Dennis Ruiz',19,2,10);
INSERT INTO Jugadores (nombre,edad,ID,Victorias) VALUES ('Raul Aragones',19,3,11);

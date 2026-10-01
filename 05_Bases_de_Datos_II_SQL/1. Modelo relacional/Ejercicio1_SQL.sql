CREATE DATABASE Ejercicio1;
GO
USE Ejercicio1;
GO

CREATE TABLE Alumnos(
	Legajo SMALLINT PRIMARY KEY NOT NULL IDENTITY(1000, 1),
	IDCarrera VARCHAR (4) NOT NULL,
	Apellidos VARCHAR (50) NOT NULL,
	Nombres VARCHAR (50) NOT NULL,
	Fecha_de_nacimiento DATETIME NOT NULL CHECK (Fecha_de_nacimiento <= GETDATE()),
	Mail VARCHAR (100) NOT NULL UNIQUE,
	Telefono VARCHAR (100)
	)

CREATE TABLE Carreras(
	ID VARCHAR (4) PRIMARY KEY,
	Nombre VARCHAR (50) NOT NULL,
	Fecha_creación DATETIME NOT NULL CHECK (Fecha_creación < GETDATE()),
	Mail VARCHAR (50) NOT NULL,
	Nivel VARCHAR (50) CHECK (Nivel IN ('Diplomatura', 'Pregrado', 'Grado', 'Posgrado'))
	)

CREATE TABLE Materias(
	ID INT PRIMARY KEY IDENTITY (1,1),
	IDCarrera VARCHAR (4) NOT NULL FOREIGN KEY REFERENCES Carreras (ID),
	Nombre VARCHAR (50) NOT NULL,
	Carga_horaria INT NOT NULL CHECK (Carga_horaria > 0)
	)

	ALTER TABLE Alumnos
	ADD CONSTRAINT FK_Alumnos_Carreras FOREIGN KEY (IDCarrera) REFERENCES Carreras (ID)
	GO
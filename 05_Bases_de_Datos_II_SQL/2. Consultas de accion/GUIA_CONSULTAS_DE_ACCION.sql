/* ============================================================
   Técnico Universitario en Programación - Base de Datos II
   ============================================================ */

USE master;
GO

CREATE DATABASE Universidad;
GO

USE Universidad;
GO

CREATE TABLE Carreras
(
    ID             CHAR(4)         NOT NULL,
    Nombre         VARCHAR(100)    NOT NULL,
    FechaCreacion  DATE            NOT NULL,
    Mail           VARCHAR(100)    NOT NULL,
    Nivel          VARCHAR(20)     NOT NULL,

    CONSTRAINT PK_Carreras PRIMARY KEY (ID),
    CONSTRAINT CK_Carreras_FechaCreacion CHECK (FechaCreacion <= GETDATE()),
    CONSTRAINT CK_Carreras_Nivel CHECK (Nivel IN ('Diplomatura', 'Pregrado', 'Grado', 'Posgrado'))
);
GO

CREATE TABLE Alumnos
(
    Legajo           INT             IDENTITY(1000,1) NOT NULL,
    IDCarrera        CHAR(4)         NOT NULL,
    Apellidos        VARCHAR(50)     NOT NULL,
    Nombres          VARCHAR(50)     NOT NULL,
    FechaNacimiento  DATE            NOT NULL,
    Mail             VARCHAR(100)    NOT NULL,
    Telefono         VARCHAR(20)     NULL,

    CONSTRAINT PK_Alumnos PRIMARY KEY (Legajo),
    CONSTRAINT FK_Alumnos_Carreras FOREIGN KEY (IDCarrera) REFERENCES Carreras (ID),
    CONSTRAINT UQ_Alumnos_Mail UNIQUE (Mail),
    CONSTRAINT CK_Alumnos_FechaNacimiento CHECK (FechaNacimiento <= GETDATE())
);
GO

CREATE TABLE Materias
(
    ID             INT             IDENTITY(1,1) NOT NULL,
    IDCarrera      CHAR(4)         NOT NULL,
    Nombre         VARCHAR(100)    NOT NULL,
    CargaHoraria   INT             NOT NULL,

    CONSTRAINT PK_Materias PRIMARY KEY (ID),
    CONSTRAINT FK_Materias_Carreras FOREIGN KEY (IDCarrera) REFERENCES Carreras (ID),
    CONSTRAINT CK_Materias_CargaHoraria CHECK (CargaHoraria > 0)
);
GO

--1)
INSERT INTO Carreras (ID, Nombre, FechaCreacion, Mail, Nivel)

VALUES ('PROG', 'Programación', '2001/01/29', 'asd@asd.com', 'Grado');

INSERT INTO Carreras (ID, Nombre, FechaCreacion, Mail, Nivel)
VALUES ('DISE', 'Diseño en Madera', '2001/01/29', 'asd@asd.com', 'Pregrado');

INSERT INTO Carreras (ID, Nombre, FechaCreacion, Mail, Nivel)

VALUES ('GEST', 'Gestión de Empresas', '2001/01/29', 'asd@asd.com', 'Diplomatura');

INSERT INTO Carreras (ID, Nombre, FechaCreacion, Mail, Nivel)

VALUES ('ARTE', 'Artes Visuales', '2001/01/29', 'asd@asd.com', 'Posgrado');

--2)
INSERT INTO Materias (CargaHoraria, IDCarrera, Nombre)

VALUES (300, 'PROG', 'Bases de Datos')

INSERT INTO Materias (CargaHoraria, IDCarrera, Nombre)
VALUES (200, 'PROG', 'Programacion I');

INSERT INTO Materias (CargaHoraria, IDCarrera, Nombre)
VALUES (150, 'PROG', 'Algoritmos y Estructuras de Datos');

INSERT INTO Materias (CargaHoraria, IDCarrera, Nombre)
VALUES (100, 'PROG', 'Ingles Tecnico');

INSERT INTO Materias (CargaHoraria, IDCarrera, Nombre)
VALUES (250, 'DISE', 'Dibujo Tecnico');

INSERT INTO Materias (CargaHoraria, IDCarrera, Nombre)
VALUES (180, 'DISE', 'Materiales y Procesos');

INSERT INTO Materias (CargaHoraria, IDCarrera, Nombre)
VALUES (120, 'DISE', 'Historia del Diseno');

INSERT INTO Materias (CargaHoraria, IDCarrera, Nombre)
VALUES (220, 'GEST', 'Contabilidad Basica');

INSERT INTO Materias (CargaHoraria, IDCarrera, Nombre)
VALUES (160, 'GEST', 'Recursos Humanos');

INSERT INTO Materias (CargaHoraria, IDCarrera, Nombre)
VALUES (140, 'GEST', 'Marketing');

INSERT INTO Materias (CargaHoraria, IDCarrera, Nombre)
VALUES (200, 'ARTE', 'Pintura Avanzada');

INSERT INTO Materias (CargaHoraria, IDCarrera, Nombre)
VALUES (170, 'ARTE', 'Escultura');

INSERT INTO Materias (CargaHoraria, IDCarrera, Nombre)
VALUES (190, 'ARTE', 'Historia del Arte');

--3)
INSERT INTO Alumnos (Apellidos, FechaNacimiento, IDCarrera, Mail, Nombres, Telefono)
VALUES ('ASd', '2006/09/11', 'PROG', 'asd@asd.com', 'Manolo', '1233445')

INSERT INTO Alumnos (Apellidos, FechaNacimiento, IDCarrera, Mail, Nombres, Telefono)
VALUES ('Gomez', '2005-03-15', 'DISE', 'gomez@mail.com', 'Lucia', '1145678901');

INSERT INTO Alumnos (Apellidos, FechaNacimiento, IDCarrera, Mail, Nombres, Telefono)
VALUES ('Perez', '2004-11-02', 'GEST', 'perez@mail.com', 'Martin', '1156789012');

INSERT INTO Alumnos (Apellidos, FechaNacimiento, IDCarrera, Mail, Nombres, Telefono)
VALUES ('Fernandez', '2003-07-20', 'ARTE', 'fernandez@mail.com', 'Sofia', '1167890123');

INSERT INTO Alumnos (Apellidos, FechaNacimiento, IDCarrera, Mail, Nombres, Telefono)
VALUES ('Diaz', '2005-01-10', 'PROG', 'diaz@mail.com', 'Juan', '1178901234');

INSERT INTO Alumnos (Apellidos, FechaNacimiento, IDCarrera, Mail, Nombres, Telefono)
VALUES ('Lopez', '2004-06-25', 'DISE', 'lopez@mail.com', 'Ana', '1189012345');

INSERT INTO Alumnos (Apellidos, FechaNacimiento, IDCarrera, Mail, Nombres, Telefono)
VALUES ('Torres', '2006-02-14', 'GEST', 'torres@mail.com', 'Pedro', '1190123456');

INSERT INTO Alumnos (Apellidos, FechaNacimiento, IDCarrera, Mail, Nombres, Telefono)
VALUES ('Ramirez', '2005-09-30', 'ARTE', 'ramirez@mail.com', 'Camila', '1101234567');

--4)
INSERT INTO Alumnos (Apellidos, FechaNacimiento, IDCarrera, Mail, Nombres)
VALUES ('Ramirez', '2005-09-30', 'ARTE', 'pedroramirez@mail.com', 'Pedro');

--5)
INSERT INTO Alumnos (Apellidos, FechaNacimiento, IDCarrera, Mail, Nombres, Telefono)
VALUES 
    ('Sosa', '2004-04-12', 'PROG', 'sosa@mail.com', 'Valentina', '1112223334'),
    ('Herrera', '2005-08-22', 'DISE', 'herrera@mail.com', 'Nicolas', '1123334445'),
    ('Molina', '2003-12-05', 'GEST', 'molina@mail.com', 'Julieta', '1134445556');
--6)
INSERT INTO Alumnos (Apellidos, FechaNacimiento, IDCarrera, Mail, Nombres, Telefono)    
VALUES ('Sosa', '2004-04-12', 'ZZZZ', 'sosa2@mail.com', 'Valentina', '1112223334');

--7)
INSERT INTO Alumnos (Apellidos, FechaNacimiento, IDCarrera, Mail, Nombres, Telefono)
VALUES ('Sevilla', '2001-05-12','PROG', 'herrera@mail.com', 'Sergio', '1233155555');

--8)
INSERT INTO Alumnos (FechaNacimiento, IDCarrera, Mail, Nombres, Telefono)
VALUES ('2001-05-12','PROG', 'Gimenez@mail.com', 'Susana', '12334445555');

--9)
INSERT INTO Alumnos (Apellidos, FechaNacimiento, IDCarrera, Mail, Nombres, Telefono)
VALUES ('Pereira', '2026-10-12','PROG', 'pereira@mail.com', 'Laura', '12533155555');

--10)
INSERT INTO Carreras (FechaCreacion, ID , Mail, Nivel, Nombre)
VALUES ('1996-01-31', 'TERC', 'terciario@asd.com', 'Terciario', 'Ingenieria en ASD');

--11)
INSERT INTO Carreras (FechaCreacion, ID , Mail, Nivel, Nombre)
VALUES ('2026-10-12', 'TERC', 'terciario@asd.com', 'Pregrado', 'Ingenieria en ASD');

--12)
INSERT INTO Materias (CargaHoraria, IDCarrera, Nombre)
VALUES (0, 'GEST', 'Recursos Humanos');

--13)
INSERT INTO Materias (CargaHoraria, IDCarrera, Nombre)
VALUES (100, 'XXXX', 'Recursos Humanos');

--14)
UPDATE Alumnos
SET Mail = 'aaaaaaa@asd.com', Telefono = '1111111'
WHERE Legajo = 1000;

--15)
UPDATE Materias
SET CargaHoraria = CargaHoraria * 1.10
WHERE IDCarrera = 'PROG';

--16)
UPDATE Alumnos
SET IDCarrera = 'DISE'
WHERE Legajo = 1000;

--17)
UPDATE Alumnos
SET IDCarrera = 'XXXX'
WHERE Legajo = 1000;

--18)
UPDATE Alumnos
SET Mail = 'gomez@mail.com'
WHERE Legajo = 1000;

--19)
UPDATE Carreras
SET Nivel = 'XXXXXX'
WHERE ID ='PROG';

--20)
DELETE FROM Alumnos
WHERE Legajo = 1000;

--21)
DELETE FROM Alumnos
WHERE IDCarrera = 'PROG';

--22)
DELETE FROM Materias
WHERE IDCarrera = 'PROG' AND CargaHoraria < 100;

--23)
DELETE FROM Carreras
WHERE ID = 'DISE';

--24)
DELETE FROM Carreras
WHERE ID = 'PROG';

--25)
DELETE FROM Alumnos
WHERE IDCarrera = 'GEST';

DELETE FROM Materias
WHERE IDCarrera = 'GEST';

DELETE FROM Carreras
WHERE ID = 'GEST';
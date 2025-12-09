#!/bin/bash
#Optimización introducir en arrays los nombres para generar las carpetas e irlos recorriendo para generarlos
echo "Bienvenido al generado de carpeta de esta actividad"

echo " Generando..."
# Genera la capeta principal
mkdir CINE
# Se introduce en la carpeta principal
cd CINE
# Genera las supcarpetas pincipales de CARICATURAS HALLOWEEN Mis_Favoritas SUPERHEROES TERROR
mkdir CARICATURAS HALLOWEEN Mis_Favoritas SUPERHEROES TERROR
cd CARICATURAS
mkdir DreamWorks Pixar
cd DreamWorks
touch Magadascar.ex Mi_villano_favorito.jpg .Sherk
cd ..
cd Pixar
touch Monster_inc Nemo.c Valiente.f
cd ..
cd ..
cd Mis_Favoritas
touch Correspondecia.fav El_rey_leon.fav Lolita.fav .Mi_villano_favorito Perdona_si_te_llamo_amor.fav Volver_al_futuro.fav
cd ..
cd SUPERHEROES
mkdir DC Marvel
cd DC
mkdir Batman
cd Batman
touch Begins.doc Dark_night_rises.exe Dark_Knight.txt .Guason
cd ..
touch Superman.do
cd ..
cd Marvel
touch Avengers.mp4 .Hulk Iron_Man.php .Thor
cd ..
cd ..
cd TERROR
touch Exorcista.txt Halloween La_Maldición.php
cd ..

tree -a

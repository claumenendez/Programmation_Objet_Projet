# Programmation Objet Projet
#### Travail réalisé par Antonin Relandeau, Remi Goalard et Claudia Menéndez

Réalisation d'un char à partir de pièces du ELEGOO Smart Robot Car et codé en C++.

Le char est composé de:
-	4 moteurs DC
-	2 servomoteurs
-	Pile de 9 V
-	Batterie externe
-	Rouleau de papier toilette pour simuler la tourelle
-	1 buzzer
-	1 écran LCD
-	4 roues 
-	Base de la tourelle en plastique
-	Base roulante en plastique
-	MEGA 2560
-	Arduino Uno
-	Potentiomètre
-1 télécommande

  
Vous pourrez trouver les fichiers hpp et cpp respectifs dans le fichier. 

Le projet est divisé en deux fichiers, un par microcontrolleur utilisé. Vous trouverez dans chaque fichier, les fichiers .hpp et .cpp correspondant afin d'un bon fonctionnement du char.

### Arduino UNO
Le fichier Arduino UNO s'en charge de la base roulante du char et du mouvement des servomoteurs de la tourelle.

### Arduino MEGA 2560
Le fichier Arduino MEGA 2560 s'en charge de l'activation du mode "danger". Le mode danger consiste à l'affichage sur l'écran lcd du mode danger et  l'activation de la chanson de Game of Thrones.



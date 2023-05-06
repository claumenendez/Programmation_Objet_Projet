# Programmation Objet Projet
#### Travail réalisé par Antonin Relandeau, Remi Goalard et Claudia Menéndez

Réalisation d'un char à partir de pièces du ELEGOO Smart Robot Car et codé en C++.

Le char est composé de:
  - 2 servomoteurs
  - 4 moteurs DC
  - 4 roues
  - 1 buzzer
  - 4 leds
  - 1 ou 2 télécommandes IR
  - 1 écran lcd
  - fils
  - base tourelle en plastique
  
Vous pourrez trouver les fichiers hpp et cpp respectifs dans le fichier. 

Le projet est divisé en trois fichiers, un par microcontrolleur utilisé. Vous trouverez dans chaque fichier, les fichiers .hpp et .cpp correspondant afin d'un bon fonctionnement du char.

### Arduino UNO
Le fichier Arduino UNO s'en charge de la base roulante du char et du mouvement des servomoteurs de la tourelle.

### Arduino MEGA 2560
Le fichier Arduino MEGA 2560 s'en charge de l'activation du mode "danger". Le mode danger consiste à l'affichage sur l'écran lcd du mode danger, l'activation de la chanson de Game of Thrones et de l'allumage de leds rouges.

### ESP8266

# Câblages:
## Câblage LCD:

![cablage LCD](https://user-images.githubusercontent.com/98877212/236453315-6d3aff3d-5372-46ff-b9d0-8fc7f4e60fad.jpg)

## Câblage Buzzer:

![image](https://user-images.githubusercontent.com/98877212/236638533-2f8c56a5-d9fa-4b0e-8102-ec1c95901d67.png)

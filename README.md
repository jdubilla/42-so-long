# So_Long

So_Long est un projet de l'école 42 qui consiste à créer un jeu simple en utilisant la bibliothèque graphique MLX de l'ecole 42 (MinilibX). L'objectif est de concevoir un jeu 2D où le joueur doit collecter des objets tout en évitant les obstacles pour pouvoir acceder a la fin du niveau.

## Table des matières

- [Présentation du projet](#présentation-du-projet)
- [Fonctionnalités](#fonctionnalités)
- [Capture d'écran](#capture-décran)
- [Installation](#installation)
- [Utilisation](#utilisation)
- [Contribuer](#contribuer)
- [Licence](#licence)

## Présentation du projet

L'objectif principal du projet So_Long est de créer un jeu vidéo en utilisant la bibliothèque MLX, en respectant les règles de base d'un jeu vidéo 2D. Les éléments clés du projet incluent la gestion de la carte du jeu, du personnage joueur, des objets à collecter et des interactions.

## Fonctionnalités

- **Affichage graphique :** Le jeu utilise la bibliothèque MLX pour afficher une fenêtre graphique.
- **Carte du jeu :** Une carte est chargée à partir d'un fichier spécifié et affichée à l'écran.
- **Personnage joueur :** Le joueur peut contrôler un personnage qui se déplace sur la carte.
- **Obstacles :** La carte peut contenir des obstacles qui bloquent le mouvement du joueur.
- **Objets à collecter :** Le joueur doit collecter tous les objets présents sur la carte pour gagner.
- **Gestion des mouvements :** Le joueur peut se déplacer vers le haut, le bas, la gauche et la droite pour naviguer dans la carte.
- **Compteur de mouvements :** Le nombre de mouvements effectués par le joueur est affiché à l'écran.

## Capture d'écran

![Capture d'écran du jeu So_Long](screenshot.png)

## Installation

1. Clonez ce dépôt : `git clone https://github.com/Bubonn/42-so_long.git`
2. Accédez au répertoire du projet : `cd so_long`
3. Compilez le projet en utilisant le Makefile fourni : `make`

## Utilisation

1. Lancez le jeu en exécutant la commande suivante : `./so_long maps/map.ber`
2. Utilisez les touches fléchées pour déplacer le personnage joueur.
3. Collectez tous les objets pour gagner le jeu.
4. Appuyez sur la touche ESC ou fermez la fenêtre pour quitter le jeu.

# Guillaume Houriez 3si2

# 🌳 Projet de Base de Données en C avec Arbre Binaire

## 📝 Description

Ce projet implémente une base de données simple en C en utilisant un arbre binaire pour stocker et manipuler des enregistrements. Les principales fonctionnalités incluent l'insertion, la suppression, la recherche et la persistance des données sur disque. Les commandes SQL de base `INSERT`, `SELECT` et `DELETE` sont supportées à travers une interface simplifiée.

## 📂 Structure du projet

Le projet est structuré en plusieurs fichiers pour une organisation claire du code :

- **src/** : Contient le code source en C.
  - `main.c` : Le point d'entrée du programme.
  - `tableline.c` : Gère les structures des tables et les lignes.
  - `binarytree.c` : Implémente l'arbre binaire pour la gestion des enregistrements.
  - `sqlhandler.c` : Contient l'implémentation des commandes SQL.
  - `pers_data.c` : Gère la sauvegarde et le chargement des données depuis un fichier binaire.

- **includes/** : Contient les fichiers d'en-tête (.h) pour déclarer les fonctions et les structures utilisées.
  - `tableline.h`
  - `binarytree.h`
  - `sqlhandler.h`
  - `pers_data.h`

- **database.bin** : Fichier binaire généré à l'exécution pour stocker les données de manière persistante.

## ⚙️ Fonctionnalités

- **Insertion** : Ajoute un nouvel enregistrement avec un ID et un nom dans la base de données.
- **Recherche** : Recherche un enregistrement par son ID dans l'arbre binaire.
- **Suppression** : Supprime un enregistrement de l'arbre binaire.
- **Persistance** : Les données sont sauvegardées et chargées depuis le fichier `database.bin`.

## Bonus

- Ajout de tests unitaires
- un Makefile qui contient make, make re, make clean, make fclean et ajout de couleur lors des compilations.

## 🛠️ Prérequis

- Un compilateur C (comme `gcc`) doit être installé sur votre machine.

## 🧩 Compilation

Pour compiler le projet, utilisez la commande suivante dans votre terminal :

```bash
make
make clean
make fclean
make re

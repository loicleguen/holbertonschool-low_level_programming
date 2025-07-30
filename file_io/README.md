# C - File I/O

![Project Status](https://img.shields.io/badge/status-97.5%25-green)

---

## Auteur

**Loïc Le Guen**

---

## Description

Ce projet en C permet de manipuler les fichiers en utilisant les appels système POSIX `open`, `close`, `read` et `write`. Il inclut des fonctions pour lire un fichier, créer un fichier, ajouter du texte à un fichier existant, et un programme complet pour copier le contenu d’un fichier vers un autre.

---

## Ressources

- File descriptors  
- How to Use the I/O System Calls Open, Close, Read and Write  
- C Programming in Linux Tutorial - open() read() write() Functions  
- Man pages : `open`, `close`, `read`, `write`, `dprintf`

---

## Objectifs d’apprentissage

- Comprendre et utiliser les descripteurs de fichiers  
- Utiliser les appels système POSIX pour gérer les fichiers  
- Gérer les permissions et les erreurs liées aux fichiers  
- Différencier fonction et appel système  
- Manipuler correctement les fichiers en C avec une gestion fine des erreurs

---

## Pré-requis

- Ubuntu 20.04 LTS  
- GCC avec options : `-Wall -Werror -Wextra -pedantic -std=gnu89`  
- Respect du style Betty (vérification par `betty-style.pl` et `betty-doc.pl`)  
- Pas de variables globales  
- Pas plus de 5 fonctions par fichier source  
- Utilisation limitée des fonctions standard (`malloc`, `free`, `exit` seulement)  
- Autorisation des appels système `read`, `write`, `open`, `close` et de la fonction `dprintf`

---

## Fonctionnalités

### 0. `read_textfile`

```c
ssize_t read_textfile(const char *filename, size_t letters);
Lit un fichier texte et affiche son contenu sur la sortie standard

Lit au maximum letters caractères

Retourne le nombre réel de caractères lus et affichés

Retourne 0 en cas d’erreur

---

1. create_file
c
Copier
Modifier
int create_file(const char *filename, char *text_content);
Crée un fichier ou tronque un fichier existant

Écrit text_content dans le fichier

Permissions du fichier créés : rw------- (0600)

Retourne 1 en succès, -1 en échec

2. append_text_to_file
c
Copier
Modifier
int append_text_to_file(const char *filename, char *text_content);
Ajoute du texte à la fin d’un fichier existant

Ne crée pas le fichier s’il n’existe pas

Retourne 1 en succès, -1 en échec

3. Programme cp
Copie le contenu d’un fichier source vers un fichier de destination

Lecture par blocs de 1024 octets pour réduire les appels système

Permissions de file_to : rw-rw-r-- (0664)

Gestion complète des erreurs avec codes de sortie spécifiques (97 à 100)

Codes d’erreur du programme cp
Code	Situation
97	Mauvais nombre d’arguments
98	Impossible de lire depuis file_from
99	Impossible d’écrire dans file_to
100	Impossible de fermer un descripteur de fichier

Exemple d’utilisation
bash
Copier
Modifier
$ ./cp source.txt dest.txt
Si le nombre d’arguments est incorrect :

bash
Copier
Modifier
Usage: cp file_from file_to
Structure des fichiers
css
Copier
Modifier
file_io/
├── 0-read_textfile.c
├── 1-create_file.c
├── 2-append_text_to_file.c
├── 3-cp.c
├── main.h
├── README.md
Style et normes
Respect strict de la norme Betty

Pas d’utilisation de fonctions non autorisées (pas de printf, puts, etc.)

Gestion rigoureuse des erreurs

Pas de variables globales

Limitation à 5 fonctions par fichier source


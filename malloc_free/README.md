<div align="center"><img src="https://github.com/ksyv/holbertonschool-web_front_end/blob/main/baniere_holberton.png"></div>

# 0x0B. C - malloc, free

## Généralités :open_book::open_book::open_book:

Ce projet porte sur l'allocation dynamique de mémoire en C, en utilisant `malloc` et `free`.

<ol>
   <li>Quelle est la différence entre l'allocation automatique et l'allocation dynamique ?</li>
   <li>Qu'est-ce que <code>malloc</code> et <code>free</code> et comment les utiliser ?</li>
   <li>Pourquoi et quand utiliser <code>malloc</code> ?</li>
   <li>Comment utiliser <code>valgrind</code> pour vérifier les fuites de mémoire ?</li>
</ol>

## Ressources :

<ol>
   <li><a href="/rltoken/aRWpmTTHkSS2nTGh0Q5xyA" title="0x0a - malloc &amp; free - quick overview.pdf" target="_blank">0x0a - malloc &amp; free - quick overview.pdf</a></li>
   <li><a href="/rltoken/yD3tk5u--ws7QNFwTOfaDQ" title="Dynamic memory allocation in C - malloc calloc realloc free" target="_blank">Dynamic memory allocation in C - malloc calloc realloc free</a> (<em>stop at 6:50</em>)</li>
</ol>

## Introduction aux fichiers :closed_book::closed_book::closed_book:

0.  [**0-create_array.c**:](#0-create_arrayc) Fonction qui crée un tableau de caractères et l'initialise avec un caractère spécifique.
1.  [**1-strdup.c**:](#1-strdupc) Fonction qui renvoie un pointeur vers un espace mémoire nouvellement alloué, contenant une copie de la chaîne de caractères donnée en paramètre. FYI La bibliothèque standard fournit une fonction similaire <code>strdup</code>. Exécutez <code>man strdup</code> pour en savoir plus.
2.  [**2-str_concat.c**:](#2-str_concatc) Fonction qui concatène deux chaînes de caractères.
3.  [**3-alloc_grid.c**:](#3-alloc_gridc) Fonction qui renvoie un pointeur vers un tableau 2D d'entiers.
4.  [**4-free_grid.c**:](#4-free_gridc) Fonction qui libère une grille 2D précédemment créée par votre fonction <code>alloc_grid</code>.
5.  [**5-argstostr.c**:](#5-argstostrc) Fonction qui concatène tous les arguments de votre programme.

## Fichiers :bookmark_tabs::bookmark_tabs::bookmark_tabs:

### 0-create_array.c

**Fonction qui crée un tableau de caractères et l'initialise avec un caractère spécifique.**


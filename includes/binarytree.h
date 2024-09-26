/*
** ESGI, 2024
** File description:
** binarytree.h
*/

#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    Row row;
    struct Node* gauche;
    struct Node* droite;
} Node;

Node* binary_inser(Node* root, Row row);

#endif

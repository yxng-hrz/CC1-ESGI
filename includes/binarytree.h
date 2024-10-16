/*
** ESGI, 2024
** File description:
** binarytree.h
*/

#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <stdio.h>
#include <stdlib.h>
#include "tableline.h"

typedef struct Node
{
    Row row;
    struct Node* gauche;
    struct Node* droite;
} Node;

void binary_search(Node* root, int id);
void free_binarytree(Node* root);
Node* binary_inser(Node* root, Row row);
Node* binary_del(Node* root, int id);

#endif

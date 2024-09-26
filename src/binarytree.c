/*
** ESGI, 2024
** File description:
** binarytree.c
*/

#include "binarytree.h"

Node* binary_inser(Node* root, Row row)
{
    if (root == 0) {
        Node* nv_noeuds = (Node*)malloc(sizeof(Node));
        nv_noeuds->row = row;
        nv_noeuds->gauche = 0;
        nv_noeuds->droite = 0;
        return (nv_noeuds);
    }
    if (row.id < root->row.id) {
        root->gauche = insert(root->gauche, row);
    } else if (row.id > root->row.id) {
        root->droite = insert(root->droite, row);
    }
    return (root);
}

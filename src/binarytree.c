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
    switch (row.id - root->row.id) {
        case -1:
            root->gauche = binary_inser(root->gauche, row);
            break;
        case 1:
            root->droite = binary_inser(root->droite, row);
            break;
        default:
            break;
    }
    return (root);
}

void free_binarytree(Node* root)
{
    if (root != 0) {
        free_binarytree(root->gauche);
        free_binarytree(root->droite);
        free(root);
    }
}

Node* find_min(Node* root)
{
    for (; root->gauche != 0; root = root->gauche);
    return (root);
}

Node* binary_del(Node* root, int id)
{
    if (root == 0) {
        return 0;
    }
    switch (id - root->row.id) {
        case -1:
            root->gauche = binary_del(root->gauche, id);
            break;
        case 1:
            root->droite = binary_del(root->droite, id);
            break;
        case 0:
            if (root->gauche == NULL && root->droite == NULL) {
                free(root);
                return NULL;
            }
            else if (root->gauche == NULL) {
                Node* temp = root->droite;
                free(root);
                return temp;
            } else if (root->droite == NULL) {
                Node* temp = root->gauche;
                free(root);
                return temp;
            }
            else {
                Node* successor = find_min(root->droite);
                root->row = successor->row;
                root->droite = binary_del(root->droite, successor->row.id);
            }
            break;
    }
    return (root);
}

void binary_search(Node* root, int id)
{
    if (root == 0) {
        printf("ID %d not found.\n", id);
        return;
    }
    switch (id - root->row.id) {
        case 0:
            printf("Found: ID = %d, Name = %s\n", root->row.id, root->row.name);
            break;
        case -1:
            binary_search(root->gauche, id);
            break;
        case 1:
            binary_search(root->droite, id);
            break;
    }
}

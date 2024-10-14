/*
** ESGI, 2024
** File description:
** sqlhandler.c
*/

#include "sqlhandler.h"
#include "tableline.h"
#include "binarytree.h"

void cmd_insert(Node** root, Table* table, int id, const char* name)
{
    Row new_row = { id, "" };
    strcpy(new_row.name, name);
    use_row(table, new_row);
    *root = binary_inser(*root, new_row);
    printf("Inserted: ID = %d, Name = %s\n", id, name);
}

void cmd_select(Node* root, int id)
{
    for (Node* current = root; current != NULL; ) {
        if (id == current->row.id) {
            printf("Found: ID = %d, Name = %s\n", current->row.id, current->row.name);
            return;
        } else if (id < current->row.id) {
            current = current->gauche;
        } else {
            current = current->droite;
        }
    }
    printf("ID %d not found.\n", id);
}

void cmd_delete(Node** root, int id)
{
    if (*root == 0) {
        printf("ID %d not found for deletion.\n", id);
        return;
    }
    // Ici on stocke la racine retournée par delete
    *root = binary_del(*root, id);
    printf("Deleted ID = %d from the tree.\n", id);
}

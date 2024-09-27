/*
** ESGI, 2024
** File description:
** main.c
*/

#include "tableline.h"
#include "binarytree.h"
#include "sqlhandler.h"

int main()
{
    Table* table = create_table();
    Row row1 = {1, "AZERT"};
    Row row2 = {2, "YUIOP"};
    insert_row(table, row1);
    insert_row(table, row2);
    Node* root = 0;
    root = insert(root, row1);
    root = insert(root, row2);
    free_table(table);
    free_btree(root);
    return NULL;
}

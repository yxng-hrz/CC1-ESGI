/*
** ESGI, 2024
** File description:
** main.c
*/

#include <stdio.h>
#include "tableline.h"
#include "binarytree.h"
#include "sqlhandler.h"
#include "pers_data.h"

int main()
{
    // Création de la table et chargement si elle existe déjà
    Table* table = persistence_load("database.bin");
    if (table == 0) {
        table = table_crea();
    }
    // Racine de l'arbre binaire
    Node* root = 0;
    // Insertion d'exemples de données
    cmd_insert(&root, table, 1, "Alice");
    cmd_insert(&root, table, 2, "Bob");
    cmd_insert(&root, table, 3, "Charlie");
    // Test de la commande SELECT
    cmd_select(root, 2);  // Devrait trouver "Bob"
    cmd_select(root, 4);  // Ne devrait pas trouver d'ID
    // Test de la suppression
    cmd_delete(&root, 2);  // Supprime "Bob"
    cmd_select(root, 2);   // Ne devrait plus trouver "Bob"
    // Test de la persistance des données
    persistence_save(table, "database.bin");
    // Libération de la mémoire
    free_table(table);
    free_binarytree(root);
    return 0;
}

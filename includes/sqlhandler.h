/*
** ESGI, 2024
** File description:
** sqlhandler.h
*/

#ifndef SQLHANDLER_H
#define SQLHANDLER_H

#include "tableline.h"
#include "binarytree.h"

void cmd_insert(Node** root, Table* table, int id, const char* name);
void cmd_select(Node* root, int id);
void cmd_delete(Node** root, int id);

#endif

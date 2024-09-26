/*
** ESGI, 2024
** File description:
** tableline.h
*/

#ifndef TABLE_H
#define TABLE_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    char name[50];
} Row;

typedef struct
{
    Row* rows;
    int num_rows;
} Table;

Table* table_crea();
void use_row(Table* table, Row row);
void free_table(Table* table);

#endif

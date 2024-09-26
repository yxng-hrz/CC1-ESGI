/*
** ESGI, 2024
** File description:
** table.h
*/

#ifndef TABLE_H
#define TABLE_H

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

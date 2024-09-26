/*
** ESGI, 2024
** File description:
** tableline.c
*/

#include "tableline.h"

Table* table_crea()
{
    Table* table = (Table*)malloc(sizeof(Table));
    table->rows = 0;
    table->row_increment = 0;
    return (table);
}

void use_row(Table* table, Row row)
{
    table->rows = (Row*)realloc(table->rows, sizeof(Row) * (table->row_increment + 1));
    table->rows[table->row_increment] = row;
    table->row_increment++;
}

void free_table(Table* table)
{
    free(table->rows);
    free(table);
}

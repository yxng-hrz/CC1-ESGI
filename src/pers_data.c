/*
** ESGI, 2024
** File description:
** pers_data.c
*/

#include "pers_data.h"

void persistence_save(Table* table, const char* filename)
{
    FILE* file = fopen(filename, "wb");
    if (!file) {
        perror("NOt the good file");
        return;
    }
    fwrite(&table->row_increment, sizeof(int), 1, file);
    fwrite(table->rows, sizeof(Row), table->row_increment, file);
    fclose(file);
    printf("Saved %s\n", filename);
}

Table* persistence_load(const char* filename)
{
    FILE* file = fopen(filename, "rb");
    if (!file) {
        perror("NOt the good file");
        return 0;
    }
    Table* table = table_crea();
    fread(&table->row_increment, sizeof(int), 1, file);
    table->rows = (Row*)malloc(sizeof(Row) * table->row_increment);
    fread(table->rows, sizeof(Row), table->row_increment, file);
    fclose(file);
    printf("Load %s\n", filename);
    return (table);
}

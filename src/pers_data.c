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


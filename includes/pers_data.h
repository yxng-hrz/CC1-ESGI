/*
** ESGI, 2024
** File description:
** pers_data.h
*/

#ifndef PERS_DATA_H
#define PERS_DATA_H

#include <stdio.h>
#include <stdlib.h>
#include "tableline.h"

void persistence_save(Table* table, const char* filename);
Table* persistence_load(const char* filename);

#endif

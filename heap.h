#ifndef HEAP_H
#define HEAP_H

#include "data_structures.h"

HEAP* Init(int capacity);
void Print(HEAP* heap);
void Write(HEAP* heap, const char* outputFile);
void Read(HEAP* heap, const char* inputFile);
void Insert(HEAP* heap, double key);
void ExtractMin(HEAP* heap);
void DecreaseKey(HEAP* heap, int position, double newKey);

#endif

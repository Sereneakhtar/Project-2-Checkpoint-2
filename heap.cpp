#include <iostream>
#include <fstream>
#include "heap.h"

HEAP* Init(int capacity) {
    HEAP* heap = new HEAP;
    heap->capacity = capacity;
    heap->size = 0;
    heap->H = new ELEMENT*[capacity];
    return heap;
}

void Print(HEAP* heap) {
    if (!heap) {
        std::cerr << "Error: heap is NULL\n";
        return;
    }
    std::cout << "Instruction: Print\n";
    std::cout << heap->size << "\n";
    for (int i = 0; i < heap->size; ++i) {
        std::cout << heap->H[i]->key << "\n";
    }
}

void Write(HEAP* heap, const char* outputFile) {
    if (!heap) {
        std::cerr << "Error: heap is NULL\n";
        return;
    }
    std::ofstream ofs(outputFile);
    if (!ofs) {
        std::cerr << "Error: unable to open file " << outputFile << "\n";
        return;
    }
    ofs << heap->size << "\n";
    for (int i = 0; i < heap->size; ++i) {
        ofs << heap->H[i]->key << "\n";
    }
    ofs.close();
}

void Read(HEAP* heap, const char* inputFile) {
    // Implement the Read function based on project description
}

void Insert(HEAP* heap, double key) {
    // Implement the Insert function based on project description
}

void ExtractMin(HEAP* heap) {
    // Implement the ExtractMin function based on project description
}

void DecreaseKey(HEAP* heap, int position, double newKey) {
    // Implement the DecreaseKey function based on project description
}

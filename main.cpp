#include <iostream>
#include <fstream>
#include <cstring>
#include "data_structures.h"
#include "util.h"
#include "heap.h"

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: ./PJ2 flag <FileI> <FileO>\n";
        std::cerr << "flag is in {0, 1, 2, 3}\n";
        std::cerr << "<FileI> is the input file\n";
        std::cerr << "<FileO> is the output file\n";
        return 1;
    }

    int flag = std::stoi(argv[1]);
    const char* inputFile = argv[2];
    const char* outputFile = argv[3];

    HEAP* heap = nullptr;

    handleInstructions(heap, flag, inputFile, outputFile);

    return 0;
}

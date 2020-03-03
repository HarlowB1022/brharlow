#include <iostream>
#include <string>
#include "src/Sudoku.cpp"
#include <fstream>
using namespace std;
int main(int argc, char* argv[2]) {
    string f = argv[1];
    auto *s = new Sudoku(f);
    s->printSudoku();
    return 0;
}

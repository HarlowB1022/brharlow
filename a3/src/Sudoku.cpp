#include <iostream>
#include <fstream>
#include <string>

using namespace std;
class Sudoku {
    int sudo[9][9]{};
public:
   // string sudokuFile;
    Sudoku(string sudokuFile) {
        this->readFromFile(sudokuFile);
    }

    Sudoku() {
        for (int i = 0; i < 9; i++)
            for (int a = 0; a < 9; a++)
                sudo[i][a] = 0;
    }

    void readFromFile(string sudokuFile) {
        fstream puzzle;
        puzzle.open(sudokuFile, ios::in);
        if (puzzle.is_open()) {
            string line;
            int row = 0;
            int col = 0;
            while (getline(puzzle, line)) {
                for (char x: line) {
                    if(x != ' ' and x != '\\')
                    sudo[row][col] = line[col];
                    col++;
                }
                row++;
            }
            puzzle.close();
        }
    }

    void printSudoku() {
        for (int i = 0; i < 9; i++) {
            string final;
            for (int a = 0; a < 9; a++) {
                if (a % 3 == 0)
                    final += "| ";
                if (sudo[i][a] == 0)
                    final +=  ". ";
                else
                    final += to_string(sudo[i][a]) + " ";
            }
            if (i % 3 == 0)
                cout << "+-------+-------+-------+" << "\n";
            cout << final + "|" << "\n";
        }
        cout << "+-------+-------+-------+" << "\n";
    }
};
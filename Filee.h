#ifndef FILE_H
#define FILE_H
#include <fstream>
#include<iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>

#include "Gamee.h"
using namespace std;
//--------------------  CREATE CLASS FILE    -----------------------//
class File {
private:
    string FileName;

public:
    File() {}

    void writeFile(int v) {
        ofstream outputFile("Load.txt");
        outputFile << v;
        outputFile.close();
    }

    int readFile() {
        ifstream inputFile("Load.txt");
        int v = 0;
        inputFile >> v;
        inputFile.close();
        return v;
    }
};
#endif

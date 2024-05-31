#include "Funkcijos.h"
#include <iostream>
#include <set>
#include <Windows.h>

using namespace std;

int main() {

    SetConsoleOutputCP(CP_UTF8);
    
    string inputFilename = "input.txt";

    map<wstring, int> wordCountMap;

    wordCountMap = countWords(readFile(inputFilename));

    string outputFilename = "WordCount.txt";

    GenerateWordCountFile(outputFilename, wordCountMap);
   
    cout << "Programa suveike" << endl;
  
    return 0;
}


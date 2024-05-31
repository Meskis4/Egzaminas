#include "Funkcijos.h"
#include <iostream>
#include <set>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    string inputFilename = "input.txt";

    map<wstring, int> wordCountMap;
    map<wstring, set<int>> wordLines;

    wordCountMap = countWords(readFile(inputFilename), wordLines);

    string outputFilename = "WordCount.txt";
    string crossRefFilename = "CrossReference.txt";

    GenerateWordCountFile(outputFilename, wordCountMap);
    GenerateCrossReferenceFile(crossRefFilename, wordLines, wordCountMap);

    cout << "Programa suveike" << endl;

    return 0;
}

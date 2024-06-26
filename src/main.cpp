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

    wstring text = readFile(inputFilename);
    wordCountMap = countWords(text, wordLines);

    string outputFilename = "WordCount.txt";
    string crossRefFilename = "CrossReference.txt";
    string urlFilename = "URLs.txt";

    GenerateWordCountFile(outputFilename, wordCountMap);
    GenerateCrossReferenceFile(crossRefFilename, wordLines, wordCountMap);

    set<wstring> urls = ExtractURLs(text);
    GenerateUrlFile(urlFilename, urls);

    cout << "Programa suveike" << endl;

    return 0;
}

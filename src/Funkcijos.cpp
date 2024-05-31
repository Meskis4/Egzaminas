#include "Funkcijos.h"
#include <fstream>
#include <sstream>
#include <cctype>
#include <algorithm>
#include <iostream>
#include <locale>
#include <codecvt>

using namespace std;

// Nuskaito failą
std::wstring readFile(const std::string& filename) {
    wifstream file(filename);
    file.imbue(locale(locale(), new codecvt_utf8<wchar_t>));
    wstringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}

// Patvarko žodį, kad nebūtų skyrybos ženklų bei pirmą raidę padaro mažąja
std::wstring cleanWord(const std::wstring& word) {
    wstring cleaned;
    for (wchar_t ch : word) {
        if (iswalnum(ch)) {
            cleaned += towlower(ch);
        }
    }
    return cleaned;
}

//Patikrina ar tai skaičius
bool isNumber(const std::wstring& word) { 
    return all_of(word.begin(), word.end(), iswdigit);
}

// Suskaičiuoja žodžius
std::map<std::wstring, int> countWords(const std::wstring& text) {
    std::map<std::wstring, int> wordCountMap;
    std::wistringstream stream(text);
    std::wstring line;

    while (std::getline(stream, line)) {
        std::wistringstream lineStream(line);
        std::wstring word;
        while (lineStream >> word) {
            std::wstring cleanedWord = cleanWord(word);
            if (!cleanedWord.empty() && !isNumber(cleanedWord)) {
                wordCountMap[cleanedWord]++;
            }
        }
    }
    return wordCountMap;
}

// Atspausdina failą su žodžių kiekiu
void GenerateWordCountFile(const std::string& filename, const std::map<std::wstring, int>& wordCountMap) {
    wofstream outFile(filename);
    outFile.imbue(locale(outFile.getloc(), new codecvt_utf8<wchar_t>));
    for (const auto& pair : wordCountMap) {
        if (pair.second > 1) {
            outFile << pair.first << L": " << pair.second << endl;
        }
    }
}


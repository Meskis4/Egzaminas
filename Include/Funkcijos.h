#pragma once

#include <string>
#include <map>
#include <set>

std::wstring readFile(const std::string& filename);

std::map<std::wstring, int> countWords(const std::wstring& text);

void GenerateWordCountFile(const std::string& filename, const std::map<std::wstring, int>& wordCountMap);

bool isNumber(const std::wstring& word);

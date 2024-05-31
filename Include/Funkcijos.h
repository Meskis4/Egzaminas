#pragma once

#include <string>
#include <map>
#include <set>

std::wstring readFile(const std::string& filename);

std::map<std::wstring, int> countWords(const std::wstring& text, std::map<std::wstring, std::set<int>>& wordLines);

bool isNumber(const std::wstring& word);

void GenerateWordCountFile(const std::string& filename, const std::map<std::wstring, int>& wordCountMap);

void GenerateCrossReferenceFile(const std::string& filename, const std::map<std::wstring, std::set<int>>& wordLines, const std::map<std::wstring, int>& wordCountMap);

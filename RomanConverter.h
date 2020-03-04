#pragma once
#include <string>
#include <map>
#include <vector>

using namespace std;

class RomanConverter {
  public:
    string intToRomanNumeral(int number);
    string romanNumeralToInt(string numeral);
  private:
    static map<char, int> basicNumerals;
    static vector<pair<char, int>> basicNumeralsList;
};

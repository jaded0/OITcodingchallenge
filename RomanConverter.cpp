#include "RomanConverter.h"
#include <iostream>
using namespace std;
map<char, int> RomanConverter::basicNumerals = {
  {'M', 1000},
  {'D', 500},
  {'C', 100},
  {'L', 50},
  {'X', 10},
  {'V', 5},
  {'I', 1}
};

vector<pair<char, int>> RomanConverter::basicNumeralsList = {
  {'M', 1000},
  {'D', 500},
  {'C', 100},
  {'L', 50},
  {'X', 10},
  {'V', 5},
  {'I', 1}
};

string RomanConverter::intToRomanNumeral(int number){
  string answer = "";
  //go through the list of roman numeral characters
  for(size_t j = 0; j < basicNumeralsList.size(); j++){
    //count how many times it contains the value of that character
    int count = 0;
    for (size_t i = 0; i < (number/basicNumeralsList[j].second); i++) {
      count++;
    }
    //take into account the 9s (is it just 1/10 away?)
    if (count == 1 && number + basicNumeralsList[j+1].second == basicNumeralsList[j-1].second) {
      answer += basicNumeralsList[j+1].first;
      answer += basicNumeralsList[j-1].first;
      number += basicNumeralsList[j+1].second;//just so that it clears this value on line 50
    }
    //add that roman numeral character to the final answer
    else if (count<4) {
      for (size_t i = 0; i < count; i++) {
        answer += basicNumeralsList[j].first;
      }
    } else if (count == 4) {
      //cout << basicNumeralsList[j].first << " " << basicNumeralsList[j-1].first << endl;
      answer += basicNumeralsList[j].first;
      answer += basicNumeralsList[j-1].first;
    } else answer = "error";
    //remove the value already counted
    number = number % basicNumeralsList[j].second;
  }
 return answer;
}


string RomanConverter::romanNumeralToInt(string numeral){
  return "oh";
}

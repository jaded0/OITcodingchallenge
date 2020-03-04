#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <fstream>
#include "RomanConverter.h"

using namespace std;

int main() {

  //set up a map to test the converter against
  ifstream ifs;
  ifs.open("romannumerals.txt");//number/numeral pairs I copied off the internet to test me
  string in;
  map<string,string> answers;//put all of the number/numeral pairs here to test against
  string arrayOfAnswers[5001]; int i = 1;
  //put all the number/numeral pairs in the map
  if(ifs.is_open()){
    while(ifs >> in){
      //cin.ignore();
      string number = in.substr(0, in.length()-1);
      string numeral;
      ifs >> numeral;
      answers[number] = numeral;

      arrayOfAnswers[i] = numeral; i++;
      //cout << number << ", " << numeral << endl;
      //cout << converter.romanNumeralToInt("no")<< endl;
    }
  } else cout << "file couln't be opened" << endl;


  // get ready to test the converter
  RomanConverter converter;
  cout << answers["4"] << " " << arrayOfAnswers[4] << endl;
}

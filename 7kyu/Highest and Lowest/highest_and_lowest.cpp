#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;


vector<string> split(string str, char delimetr){
  stringstream ss(str);
  string item;
  vector<string> splittedStr;
  while (getline(ss, item, delimetr)) {
    splittedStr.push_back(item);
  }
  return splittedStr;
}

vector<int> to_int(vector<string> strings) {
  vector<int> numbers;
  for(string c: strings){
    numbers.push_back(stoi(c));
  }
  return numbers;
}

string highAndLow(const string& numbers){
  vector<string> splittedStr = split(numbers, ' ');
  vector<int> integers = to_int(splittedStr);
  sort(integers.begin(), integers.end());
  return to_string(integers[integers.size() - 1]) + " " + to_string(integers[0]);
}

#include <iostream>
#include <fstream>

using namespace std;

int main() {
  int floor = 0;
  int countCharacters = 0;
  char next;
  ifstream file;
  file.open("example.txt", ifstream::in);
  next = file.get();
  while(file.good()) {
    countCharacters = countCharacters + 1;
    if (next == '(') {
      floor = floor + 1;
    }// End if loop - up a floor 
    else {
      floor = floor - 1;
    }// End else loop - down a floor
    if (floor < 0) {
      cout << "Character at which first enters basement: " << countCharacters << endl;
      break;
    }// End if loop - first time being in basement 
    next = file.get();
  }// End while loop


  file.close();

  cout << "Floor: " << floor << endl;


} 

// This is a comment I have placed in the development branch to test to see if things work 
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  char filename[];

  cout << "Enter filename: ";
  cin >> filename;

  // remove the file 
  int result = remove(filename);

  cout << result;

  return 0;
}


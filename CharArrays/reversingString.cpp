#include <iostream>
using namespace std;

int main() {

  char text[] = "hello";

  int nChars = sizeof(text)-1;

  char* pStart = text;
  char* pEnd = text + nChars - 1;
  cout << pStart + 2 << endl;
  cout << sizeof(char) << endl;

  cout << endl;

  while(pStart < pEnd) {
    cout << pStart << endl;
    cout << pEnd << endl;
    char save = *pStart;
    *pStart = *pEnd;
    *pEnd = save;

    pStart++;
    pEnd--;
  }

  cout << text << endl;

  return 0;
}

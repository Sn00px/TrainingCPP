#include <iostream>
using namespace std;

int main() {
  int color = 0x123456;

  unsigned char red = color & 0xFF0000 >> 16;
  unsigned char green = color & 0x00FF00 >> 8;
  unsigned char blue = color & 0x0000FF;

  cout << hex << (int)red << endl;
  cout << hex << (int)green << endl;
  cout << hex << (int)blue << endl;

  // or do the following (works for me at also!)

  unsigned char blueAgain = color;
  cout << hex << (int)blueAgain << endl;

  return 0;
}

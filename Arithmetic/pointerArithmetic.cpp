#include <iostream>
using namespace std;

int main() {

        const int NSTRINGS = 5;

        string texts[NSTRINGS] = {"one", "two", "three", "four", "five"};

        string* pTexts = texts;

        cout << *pTexts << endl;

        pTexts += 3;

        cout << *pTexts << '\n';

        pTexts -= 2;

        cout << *pTexts << '\n';

        string* pEnd = &texts[NSTRINGS-1];
        pTexts = &texts[0];

        while(pText != pEnd) {
          cout << *pTexts << '\n';
          pTexts++
        }

        
        return 0;
}

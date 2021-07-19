#include <iostream>
using namespace std;

int main() {
        string text[] = {"two", "three", "four"};

        string* pText = text;
        string* pText2 = text;

        cout << pText2++ << endl;
        cout << pText2++ << endl;
        cout << pText2++ << endl;

        for(int i=0; i<sizeof(text)/sizeof(string); i++) {
                cout << pText[i] << " " << flush;
        }

        cout << endl;

        for(int i=0; i<sizeof(text)/sizeof(string); i++, pText++) {
                cout << *pText << " " << flush;
        }

        string* pElement = &text[0];
        string* pEnd = &text[2];

        cout << endl;

        while(true) {
                cout << *pElement << " " << flush;

                if(pElement==pEnd) {
                        break;
                }

                pElement++;
        }

        return 0;
}

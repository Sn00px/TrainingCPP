#include <iostream>
using namespace std;

int main() {
        string text[] = { "one", "two", "three" };

        string* pText = text;

        for(int i=0; i<sizeof(text)/sizeof(string); i++) {
                cout << text[i] << " " << flush;
        }

        cout << endl;

        for(int i=0; i<sizeof(text)/sizeof(string); i++, pText++) {
                cout << *pText << " " << flush;
        }
        return 0;
}

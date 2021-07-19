#include <iostream>
using namespace std;


// Create char sting and output it.
// Output all the chars with a for loop
// Output all the chars with a while(true) loop
int main() {

        string texts = "hello";

        cout << texts << endl;


        char text[] = {'h', 'e', 'l', 'l', 'o'};
        char text2[] = "hello";

        for(int i=0; i<sizeof(text2); i++) {
                cout << ": " << (int)text2[i] << endl;
        }

        int k=0;

        while(true) {
                if(text2[k]==0) {
                        break;
                }

                cout << text2[k] << flush;

                k++;


        }

        return 0;
}

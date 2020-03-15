#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    int counter = 1;
    string s;
    getline(cin, s);
    for (int i=1; i<s.length(); i++) {
        if (s[i] == s[i-1]){
            counter++;
            if (counter == 7) {
                cout << "YES" << endl;
                return 0;
            }
        } else {
            counter = 1;
        }
    }
    cout << "NO" << endl;
    return 0;
}

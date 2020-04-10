#include<iostream>
using namespace std;

int main() {
   string s,t;
   cin >> s;
   cin >> t;
   int index = 0;
   for (int i=0; i<t.size(); i++) {
    if (t[i] == s[index])
        index++;
   }
   cout << index + 1 << endl;
   return 0;
}

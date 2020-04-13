#include <iostream>

using namespace std;

int main() {
   string t;
   cin >> t;
   long numA = 0;
   for (long i=0; i<t.size(); i++)
    numA += t[i] == 'a';

   long left = (t.size() - numA) / 2;
   string s="", sD="";
   for (long i=0; i<t.size() && (numA || left); i++) {
    s += t[i];
    if (t[i] == 'a')
        numA--;
    else {
        left--;
        sD += t[i];
    }
   }
   if (s + sD == t) cout << s << endl;
   else cout << ":(" << endl;
   return 0;
}

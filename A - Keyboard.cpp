#include <iostream>
#include <string>

using namespace std;

int main() {
   string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
   char c;
   string a;
   cin >> c >> a;
   int d;
   if (c=='R')
    d = -1;
   else
    d = 1;

   for (int i=0; i<a.size(); i++) {
    int found = s.find(a[i]);
    found += d;
    cout << s[found];
   }
   return 0;
}

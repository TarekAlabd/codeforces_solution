#include <iostream>
#include <vector>

using namespace std;

int main() {
   int n;
   cin >> n;
   vector<string> c(n);
   for (int i=0; i<n; i++)
    cin >> c[i];

   string t1 = c[0], t2;
   int n1=0, n2=0;
   for (int i=0; i<n; i++) {
    if (c[i] == t1)
        n1++;
    else {
        t2 = c[i];
        n2++;
    }
   }
   if (n1 > n2)
    cout << t1 << endl;
   else
    cout << t2 << endl;
   return 0;
}

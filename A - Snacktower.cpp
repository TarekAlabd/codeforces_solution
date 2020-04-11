#include <iostream>
 
using namespace std;
 
int main() {
   int n, m;
   cin >> n;
   int a[n] = {0};
   m = n;
   for (int i=0; i<n; i++) {
    int x;
    cin >> x;
    a[x] = 1;
    while(a[m] == 1) {
        cout << m << " ";
        m--;
    }
    cout << "" << endl;
   }
   return 0;
}

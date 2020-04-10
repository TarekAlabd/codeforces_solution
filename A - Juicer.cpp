#include<iostream>
using namespace std;

int main() {
   int n, b, d, w=0, sum=0;
   cin >> n >> b >> d;
   int a[n];
   for (int i=0; i<n; i++)
    cin >> a[i];

   for (int i=0; i<n; i++) {
    if (a[i] > b)
        continue;
    sum += a[i];
    if (sum > d) {
        w++;
        sum = 0;
    }
   }
   cout << w << endl;
   return 0;
}

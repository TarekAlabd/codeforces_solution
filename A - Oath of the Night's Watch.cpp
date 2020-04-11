#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
   int n, sum = 0;
   cin >> n;

   vector<int> a(n);
   for (int i=0; i<n; i++)
    cin >> a[i];

   if (n > 2) {
    sort(a.begin(), a.end());
    for (int i=0; i<n; i++)
        if (a[i] > a[0] && a[i] < a[n-1])
            sum++;
   }
   cout << sum << endl;
   return 0;
}

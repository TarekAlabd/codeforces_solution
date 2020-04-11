#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
   int n;
   cin >> n;
   vector<int> x(n);
   for (int i=0; i<n; i++)
    cin >> x[i];
   cout << abs(x[1] - x[0]) << " " << abs(x[n-1] - x[0]) << endl;
 
   for (int i=1; i<n-1; i++) {
    cout << min(abs(x[i-1] - x[i]), abs(x[i+1] - x[i])) << " ";
    cout << max(abs(x[n-1] - x[i]), abs(x[0] - x[i])) << endl;
   }
   cout << abs(x[n-2] - x[n-1]) << " " << abs(x[0] - x[n-1]);
   return 0;
}

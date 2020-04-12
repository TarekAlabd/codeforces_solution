#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
   int n;
   cin >> n;
   string s;
   vector<int> a(n), b(n), c(n);
   for (int i=0; i<n; i++)
    cin >> a[i] >> b[i];

   c = a;
   sort(c.begin(), c.end(), greater<int>());
   for (int i=0; i<n; i++) {
    if (a[i] != b[i]){
        s = "rated";
        break;
    }
    if (a[i] == b[i] && a != c)
        s = "unrated";
    else
        s = "maybe";
   }
   cout << s << endl;
   return 0;
}

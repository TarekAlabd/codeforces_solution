#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
   int n, mini=0, maxi=0;
   cin >> n;
   vector<int> x(n);
   for (int i=0; i<n; i++)
    cin >> x[i];
   for (int i=0; i<n; i++) {
    if (i == 0){
        mini = abs(x[i] - x[i+1]);
        maxi = abs(x[i] - x[n-1]);
    } else if (i == n-1) {
        mini = abs(x[i] - x[i-1]);
        maxi = abs(x[i] - x[0]);
    } else {
        if (abs(x[i] - x[i+1]) > abs(x[i] - x[i-1]))
            mini = abs(x[i] - x[i-1]);
        else
            mini = abs(x[i] - x[i+1]);
        if (abs(x[i] - x[n-1]) > abs(x[i] - x[0]))
            maxi = abs(x[i] - x[n-1]);
        else
            maxi = abs(x[i] - x[0]);
    }
    cout << mini << " " << maxi << endl;
   }
   return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main() {
   int n;
   cin >> n;
   char a[n][n];
   for (int i=0; i<n; i++)
    for (int j=0; j<n; j++)
        cin >> a[i][j];
   char t1 = a[0][0], t2 = a[0][1];
   bool f = t1 != t2;
   for (int i=0; i<n && f; i++)
    for (int j=0; j<n && f; j++)
        if (i == j || (i+j) == (n-1)){
            if (a[i][j] != t1)
                f = false;
        }
        else{
            if (a[i][j] != t2)
                f = false;
        }
    if (f)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
   return 0;
}

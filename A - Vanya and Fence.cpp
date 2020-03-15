#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    int n, h, m = 0;
    cin >> n >> h;
 
    vector<int> a(n);
    for (int i=0; i<n; i++){
        cin >> a[i];
        if (a[i] <= h)
            m++;
        else
            m+=2;
    }
    cout << m << endl;
    return 0;
}

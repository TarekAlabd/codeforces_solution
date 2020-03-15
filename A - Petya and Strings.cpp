#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    string x,y;
 
    cin >> x;
    cin >> y;
    transform(x.begin(), x.end(), x.begin(), ::tolower);
    transform(y.begin(), y.end(), y.begin(), ::tolower);
 
    int a = x.compare(y);
 
    if (a < 0)
        cout << -1 << endl;
    if (a == 0)
        cout << 0 << endl;
    else if (a > 0)
        cout << 1 << endl;
    return 0;
}

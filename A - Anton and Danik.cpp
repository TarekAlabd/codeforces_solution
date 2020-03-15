#include <iostream>
 
using namespace std;
 
int main()
{
    int n, a = 0, d = 0;
    cin >> n;
 
    char m[n];
    for (int i=0; i<n; i++){
        cin >> m[i];
        if (m[i] == 'A')
            a++;
        else
            d++;
    }
    if (a > d)
        cout << "Anton" << endl;
    else if (a < d)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
    return 0;
}

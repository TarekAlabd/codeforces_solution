#include <iostream>

using namespace std;

int main()
{
    int a[4], num=0, n;
    string s;
    for (int i=0; i<4; i++)
        cin >> a[i];
    cin >> s;

    for (int i=0; i<s.size(); i++) {
        n = s[i] - '0';
        num += a[n-1];
    }

    cout << num << endl;
    return 0;
}

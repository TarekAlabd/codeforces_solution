#include <iostream>

using namespace std;

int main()
{
    int n, num=0;
    string s;
    cin >> n;
    cin >> s;

    for (int i=0; i<s.size(); i++) {
        if (s[i] == s[i+1])
            num++;
        else
            continue;
    }

    cout << num << endl;

    return 0;
}

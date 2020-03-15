#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{
    int u=0,l=0;
    string x;
    cin >> x;


    for (int i=0; i<x.size(); i++) {
        if (isupper(x[i]))
            u++;
        else
            l++;
    }

    if (u>l)
        transform(x.begin(), x.end(), x.begin(), ::toupper);
    else
        transform(x.begin(), x.end(), x.begin(), ::tolower);

    cout << x << endl;
    return 0;
}

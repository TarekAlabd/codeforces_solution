#include <iostream>
#include <algorithm>
#include <string.h>
 
using namespace std;
 
int f(string a) {
    int n, x=0;
    for (int i=0; i<a.length(); i++) {
        n = 0;
        for (int j=i+1; j<a.length(); j++) {
            if (a[i] == a[j])
                n++;
            else
                continue;
        }
        if (n > 0)
            x++;
    }
    return x;
}
 
int main()
{
    string x;
    cin >> x;
    transform(x.begin(), x.end(), x.begin(), ::tolower);
 
    if ((x.length() - f(x)) % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
 
    return 0;
}

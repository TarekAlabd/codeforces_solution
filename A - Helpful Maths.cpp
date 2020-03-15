#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    char s[101];
    cin>>s;
    char p[102];
    int n;
 
    for(int i=0, j=0; i<strlen(s); i+=2,j++) {
        p[j] = s[i];
        n=j;
    }
    n++;
    sort(p,p+n);
    for (int i = 0; i<n; i++) {
        cout<<p[i];
        if (i<n-1)
            cout<<"+";
    }
    return 0;
}

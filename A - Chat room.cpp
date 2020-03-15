#include <iostream>
 
using namespace std;
 
int main()
{
    string g = "hello";
    int a=0; int b=0;
    string s, output = "NO";
    getline(cin, s);
    while(a<s.size()) {
        if (s[a++] == g[b])
            b++;
        if (b>=g.size()){
            output = "YES";
            break;
        }
    }
    cout<<output;
    return 0;
}

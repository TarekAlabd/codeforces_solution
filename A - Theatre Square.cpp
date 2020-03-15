#include <iostream>
using namespace std;
 
int main()
{
    long long n,m,a,l,w;
    cin>>n>>m>>a;
    l = n/a;
    w = m/a;
    if (n % a != 0) l++;
    if (m % a != 0) w++;
    cout<<l*w<<endl;
    return 0;
}

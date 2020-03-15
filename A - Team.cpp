#include <iostream>
using namespace std;
 
int main()
{
    int p,v,t,n,x=0;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>p>>v>>t;
        if (p+v+t >=2)
            x++;
    }
    cout<<x<<endl;
    return 0;
}

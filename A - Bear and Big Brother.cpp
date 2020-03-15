#include <iostream>
 
using namespace std;
 
int main()
{
    int a, b, num = 0;
    cin >> a >> b;
 
    while (a <= b) {
        num++;
        a *= 3;
        b *= 2;
    }
    cout << num;
    return 0;
}

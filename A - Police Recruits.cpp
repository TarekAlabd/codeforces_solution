#include <iostream>

using namespace std;

int main()
{
    int n, num=0, v=0;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++)
        cin >> a[i];

    for (int i=0; i<n; i++) {
        if (a[i] != -1) {
            v += a[i];
        } else {
            if (v == 0){
                num++;
                continue;
            }
            v--;
        }
    }

    cout << num << endl;
    return 0;
}

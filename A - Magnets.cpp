#include <iostream>

using namespace std;

int main()
{
    int n, num=0;
    cin >> n;
    int a[n];

    for (int i=0; i<n; i++)
        cin >> a[i];

    for (int i=0; i<n; i++) {
        if (a[i] == a[i+1])
            continue;
        else
            num++;
    }

    cout << num << endl;

    return 0;
}

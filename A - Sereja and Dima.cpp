#include <iostream>

using namespace std;

int main()
{
    int n, s=0, d=0;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++)
        cin >> a[i];

    int l,r;
    l = 0, r = n - 1;
    bool p = true;
    while (l <= r) {
        if (a[l] >= a[r]) {
            if (p)
                s += a[l];
            else
                d += a[l];

            l++;
        } else {
            if (p)
                s += a[r];
            else
                d += a[r];

            r--;
        }
        p = !p;
    }

    cout << s << " " << d << endl;

    return 0;
}

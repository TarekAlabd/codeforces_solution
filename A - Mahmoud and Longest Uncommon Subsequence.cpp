#include <iostream>

using namespace std;

int main() {
   string a, b;
   cin >> a >> b;
   if (a.size() != b.size())
    cout << max(a.size(), b.size()) << endl;
   else if (a == b)
    cout << -1 << endl;
   else
    cout << a.size() << endl;
   return 0;
}

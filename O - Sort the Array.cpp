#include <iostream>
#include <vector>

using namespace std;

int main() {
   string s;
   int startI = 1, endI = 1;
   bool started=0, ended=0, possible=1;
   int n;
   cin >> n;
   vector<int> a(n);
   for (int i=0; i<n; i++)
    cin >> a[i];
   for (int i=1; i<n; i++) {
    if (a[i-1] > a[i] && !started) {
        started = 1;
        startI = i;
    }
    if (a[i-1] < a[i] && started && !ended) {
        ended = 1;
        endI = i;
    }
    if (a[i-1] > a[i] && ended) {
        possible = 0;
        break;
    }
   }
   if (possible && started && !ended)   endI = n;
   if ((startI > 1 && a[startI-2] > a[endI-1]) || (endI < n && a[startI-1] > a[endI]))
    possible = 0;
   if (!possible)
    cout << "no" << endl;
   else
    cout << "yes\n" << startI << " " << endI << endl;
   return 0;
}

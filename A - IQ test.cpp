#include <iostream>
 
using namespace std;
 
int main()
{
    int n, nums[102], e=0, o=0, indexE, indexO;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> nums[i];
        if (nums[i] %2 == 0) {
              e++;
              indexE = i+1;
        } else {
            o++;
            indexO = i+1;
        }
    }
    if (e == 1) cout << indexE << endl;
    else if (o == 1) cout << indexO << endl;
    return 0;
}

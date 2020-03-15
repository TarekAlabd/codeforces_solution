#include <iostream>
 
using namespace std;
 
int main()
{
    int n, scores;
    cin>>n>>scores;
    int min(scores), max(scores), counter(0);
    while (--n) {
        cin>>scores;
        if(scores < min) {
            min = scores;
            counter++;
        }
        if (scores > max) {
            max = scores;
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}

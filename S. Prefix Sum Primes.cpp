#include <cstdio>

using namespace std;

int main() {
   int n;
   scanf("%ld", &n);
   int one=0, two=0;
   for (int i=0; i<n; i++) {
    int a;
    scanf("%ld", &a);
    one += (a==1);
    two += (a==2);
   }
   if (two--)
    printf("2 ");
   if (one--)
    printf("1 ");
   while (two-- > 0)
    printf("2 ");
   while (one-- > 0)
    printf("1 ");
   return 0;
}

#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    int z;
    z = max(a,b) > max(c,d) ? max(a,b) :max(c,d) ;
    return z;

}
int max (int a, int b)
{
    int z;
    z = a > b ? a :b ;
    return z; 
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}


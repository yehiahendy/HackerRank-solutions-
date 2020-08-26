#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int x=0,y=0,z=0,tempx=0,tempy=0,tempz=0;
      for ( int i = 1; i <= n; i++)
    {
        for (int j = i+1 ; j <=n;j++)
        {
            x = i & j;
            y = i| j;
            z= i^j;
            if ((x>tempx)&& (x<k))
            {
                tempx=x;
            }
            if ((y>tempy)&& (y<k))
            {
                tempy=y;
            }
            if ((z>tempz)&& (z<k))
            {
                tempz=z;
            }

        }
    }
    printf("%d\n",tempx);
    printf("%d\n",tempy);
    printf("%d\n",tempz);

}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

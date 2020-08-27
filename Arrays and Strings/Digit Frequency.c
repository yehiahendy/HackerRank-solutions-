#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char *num;
    num = malloc(1024 * sizeof(char));
    scanf("%[^\n]", num);
    num = realloc(num, strlen(num) + 1);
    char  count[10]={0,0,0,0,0,0,0,0,0,0};

    for (int i = 0; i < strlen(num); i++ )
    {
        if (num[i] == 48)
        {
            count[0]+=1;
        }
        else if (num[i] == 49)
        {
            count[1]++;
        }
        else if (num[i] == 50)
        {
            count[2]++;
        }
        else if (num[i] == 51)
        {
            count[3]++;
        }
        else if (num[i] == 52)
        {
            count[4]++;
        }
        else if (num[i] == 53)
        {
            count[5]++;
        }
        else if (num[i] == 54)
        {
            count[6]++;
        }
        else if (num[i] == 55)
        {
            count[7]++;
        }
        else if (num[i] == 56)
        {
            count[8]++;
        }
        else if (num[i] == 57)
        {
            count[9]++;
        }

    }
    for (int j = 0; j<10;j++)
    {
        printf("%d ",count[j]);
    }
}


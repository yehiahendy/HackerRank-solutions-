#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    int temp;
    i = 0;
    int j = num-1;
    while (i != num/2 )
    {
        temp = arr[j];
        arr[j] =  arr[i];
        arr[i]= temp;
        i++;
        j--;
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}

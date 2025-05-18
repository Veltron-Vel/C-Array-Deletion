#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int length = 10;
    int i,index;

    printf("Array currently is:\n");
    for(i=0;i<10;i++){
        printf("%d\n",arr[i]);
    }
    printf("Which position do you want to delete:\n");
    scanf("%d",&index);
    for(i=index;i<length-1;i++){
        arr[i] = arr[i+1];
    }
    length--;
    printf("The array after deletion is:\n");
    for(i=0;i<length;i++){
        printf("%d\n",arr[i]);
    }

    return 0;
}

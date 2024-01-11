#include <stdio.h>
#include <stdlib.h>

int main()
{
    char num[5] = {1,56,31,70,16},i=0,x,j;
    for(i=0;i < 5;i++){
        for(j=i+1;j < 5;j++){
            if(num[i] < num[j]){
                x = num[i];
                num[i] = num[j];
                num[j] = num[i];
                num[j] = x;
                }
            }
        }

    for(i=0;i<5;i++){
        printf("%d \n",num[i]);
    }
    return 0;
}

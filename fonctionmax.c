#include<stdio.h>

int fonctionmax(int a,int b){
    int maximum;
    if (a<b)
    {
        maximum=b;
    }else
    {
        maximum=a;
    }
    printf("le maxi est : %d\n",maximum);
    return 0;
    
}
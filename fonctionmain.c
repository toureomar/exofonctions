#include<stdio.h>
#include<ctype.h>
#include"fonctionmax.h"

int main(){
    int n1,n2;

    printf("saisir la valeur de a \n");
    scanf("%d",&n1);
    printf("saisir la valeur de b \n");
    scanf("%d",&n2);

    if (isalpha(n1)==1 && isalpha(n2)==1 && n1!=n2)
    {
        fonctionmax(n1,n2);
    }else
    {
        printf("veuillez saisir un bon chiffre\t");

    }
    
    return 0;

}
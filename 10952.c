#include <stdio.h>

int main(void){
    int A,B;
    scanf("%d %d",&A,&B);
    if(A==0 && B==0)
        return 0;
    else
        printf("%d",A+B);
        printf("\n");
        return main();

}
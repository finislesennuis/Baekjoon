#include <stdio.h>

int main(void)
{
    long long Bill;
    int num,a,b;
    scanf("%lld\n",&Bill);
    scanf("%d",&num);
    int total=0;
    for(int i=0;i<num;i++){
        scanf("%d %d",&a,&b);
        total+= a*b;
    }
    if (total == Bill) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
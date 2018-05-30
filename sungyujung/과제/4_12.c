#include <stdio.h>

int main()
{
    int n[10];
    int i;
    printf("정수 10개 입력 : ");
    for(i=0;i<10;i++)
        scanf("%d",&n[i]);

    int max=0,min=100;
    for(i=0;i<10;i++)
    {
        if(max<n[i])
            max=n[i];
        if(n[i]<min)
            min=n[i];
    }
    printf("최댓값 : %d\n최솟값 : %d\n",max,min);
}

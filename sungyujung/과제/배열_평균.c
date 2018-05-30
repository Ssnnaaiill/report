#include <stdio.h>

int main()
{
    int score[5];
    double h=0;
    for(int i=0;i<5;i++)
    {
        printf("%d번 학생 수행평가 성적 입력: ",i+1);
        scanf("%d",&score[i]);
        if(score[i]>100)
            {
            printf("*- 점수가 100보다 크면 100으로 조정됩니다 -*\n");
            score[i]=100;
            }
        else if(score[i]<0)
            {
            printf("*- 점수가 0보다 작으면 0으로 조정됩니다 -*\n");
            score[i]=0;
            }
            h+=score[i];
    }
    printf("\n\n");
    for(int i=0;i<5;i++){
    printf("%d번 학생 성적: %d\n",i+1,score[i]);
    }
    printf("평균: %.2lf",h/5);
}

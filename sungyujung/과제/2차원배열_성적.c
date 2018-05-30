#include <stdio.h>

int main()
{
    int score[5][2]={0};
    int i;
    double h=0;
    for(i=0;i<5;i++)
    {
        printf("%d번 학생 수행평가 성적 입력: ",i+1);
        scanf("%d",&score[i][0]);
        if(score[i][0]>100)
            {
            printf("*- 점수가 100보다 크면 100으로 조정됩니다 -*\n");
            score[i][0]=100;
            }
        else if(score[i][0]<0)
            {
            printf("*- 점수가 0보다 작으면 0으로 조정됩니다 -*\n");
            score[i][0]=0;
            }
        h+=score[i][0];
    }
    for(i=0;i<5;i++)
    {
         if(score[i][0]>=90)
         {
            score[i][1]=65;
         }
         else if(score[i][0]>=80)
         {
            score[i][1]=66;
         }
         else if(score[i][0]>=70)
         {
            score[i][1]=67;

         }
         else if(score[i][0]>=60)
         {
            score[i][1]=68;
         }
         else
           score[i][1]=70;

    }
    printf("\n\n");
    for(i=0;i<5;i++)
    {
            printf("%d번 학생 성적 : %d\t",i+1,score[i][0]);
            printf("등급 : %c\n",score[i][1]);
    }
    printf("평균 성적: %.2lf",h/5);
}

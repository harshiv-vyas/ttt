/*#include<stdio.h>

int main()
{
for (int i=0; i<=5;i++)
{
    for (int j=0;j<=13;j++)
    {
        if (i==0||j==0||i==5||j==13)
        {
            printf("*   ");
        }
        else
        {
            printf("    ");
        }
    }
    printf("\n");
}
return 0;

}*/




/*#include<stdio.h>

int main()
{

float arr[3][3] = {{8, 20, 30}, {13,35, 9}, {2, 7, 6}};
    int k, m;
    float sum=0, avg;
    for (k=0; k<3; k++) {
        for (m = 0; m<3; m++) {
            sum +=arr[k][m];
        }
    }
    avg = sum / 9;
    printf(" average  %.2f", avg);








    return 0;
}*/



#include<stdio.h>

int main()
{

int a[3][3] = {{8, 20, 30}, {13,35, 9}, {2, 7, 6}};
int sum=0;
int sum2=0;
for (int i=0; i<=2; i++) {
        for (int j = 0; j<=2; j++) {
  if(i==j){
    sum+=a[i][j];
  }else if(i+j==2){
    sum2+=a[i][j];
  }
        }
}

printf("%d",sum);
printf("%d",sum2);
return 0;
}

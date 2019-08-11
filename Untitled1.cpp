#include <stdio.h>


int main()
{
    int n,num[5];
    float sum,save;
    printf("Enter N:");
    scanf("%d",&n);
    scanf("%d",&num[0]);
    scanf("%d",&num[1]);
    scanf("%d",&num[2]);
    scanf("%d",&num[3]);
    scanf("%d",&num[4]);

    save = (float)num[n-1]/n;
    num[n-1] = 0;
    sum = (float)(num[0]+num[1]+num[2]+num[3]+num[4])+save;
    printf("%.3f",sum);
 
}


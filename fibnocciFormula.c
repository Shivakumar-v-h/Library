#include<stdio.h>
#include<math.h>
int main()
{
    while(1) {
    float P,p=0;
    float a1,a2=0;
    int n,ans=0;
    P=(sqrt(5)+1)/2;
    p=1/P;
    printf("\nEnter n:");
    scanf("%d",&n);
    a1=pow(P,n);
    a2=pow((-p),n);
    ans=(a1-a2)/sqrt(5);
    printf("\n%d",ans);
    }
}

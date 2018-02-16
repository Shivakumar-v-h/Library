#include<stdio.h>
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
int main(){
    int n=5,i;
    int arr[]={200, 250, 660, 800, 1615};
    int result = arr[0];
    for (i=1; i<n; i++)
        result = gcd(arr[i], result);
    printf("%d",result);
}

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int arr[50];
    int x=0;
    while(n!=1)
    {
        arr[x++]=n%2;
        n=n/2;
    }
    arr[x]=1;
    int i=0;
    int max=0;
    int count=0;
    while(i<=x)
    {
        if(arr[i]==1)
        {
            count++;
        }
        else
        {
            if(count>max)
                max=count;
            count=0;
        }
            
        
        i++;
    }
    if(max>count)
    printf("%d",max);
    else
        printf("%d",count);
    return 0;
}

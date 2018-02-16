#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long int st1[100000];
long int st2[100000];
long int top1=-1;
long int top2=-1;
void push(long int data)
{
    long int ele=0;
    if(top2==-1)
    {
        st2[++top2]=data;
        st1[++top1]=data;
    }
    else
    {
        if(data>st2[top1])
        {
            st1[++top1]=data;
            st2[++top2]=data;
        }
        else
        {
            st1[++top1]=data;
            ele=st2[top2];
            st2[++top2]=ele;
        }
    }
}
void pop()
{
    st1[top1--];
    st2[top2--];
}
void display()
{
    printf("%ld\n",st2[top2]);
}
int main() {
    long int q=0;
    scanf("%ld",&q);
    for(long int q_i=0;q_i<q;q_i++)
    {
        long int ch=0;
        long int data=0;
        scanf("%ld",&ch);
        if(ch==1)
        {
            scanf("%ld",&data);
            push(data);
        }
        else if(ch==2)
        {
            pop();
        }
        else if(ch==3)
        {
            display();
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

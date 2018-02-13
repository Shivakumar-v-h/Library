#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long int st1[100000];
long int st2[100000];
int top1=-1;
int top2=-1;
int count=0;
void push1(long int data)
{
    st1[++top1]=data;
}
void push2(long int data)
{
    st2[++top2]=data;
}
long int pop1()
{
    return (st1[top1--]);
}
long int pop2()
{
    return (st2[top2--]);
}
void enqueue(long int data)
{
    push1(data);
    count++;
}
void dequeue()
{
    for(int i=0;i<count;i++)
    {
        push2(pop1());
    }
    pop2();
    count--;
    for(int i=0;i<count;i++)
    {
        push1(pop2());
    }
}
void display()
{
    printf("%ld\n",st1[0]);
}
int main() {
    long int q=0;
    scanf("%ld",&q);
    for(int q_i=0;q_i<q;q_i++)
    {
        long int ch=0;
        long int data=0;
        scanf("%ld",&ch);
        if(ch==1)
        {
            scanf("%ld",&data);
            enqueue(data);
        }
        else if(ch==2)
        {
            dequeue();
        }
        else if(ch==3)
        {
            display();
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

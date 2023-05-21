#include <iostream>
using namespace std;

int euclideanGCD( int, int );

int main()
{
    int input1,input2,a;
    //Taking Input
    cout<<"Enter 1st number:  ";
    cin>>input1;
    cout<<"Enter 2nd number:  ";
    cin>>input2;
    cout<<endl;

    a=euclideanGCD( input1 , input2 );
    cout<<"\nHence "<<a<<" is the gretaest common divisor of "<<input1<<" and "<<input2<<endl;

return 0;}

int euclideanGCD( int n1 , int n2 )
{
    int num1,num2,temp;
    if ( n1>n2 || n1==n2 )
    {
        num1=n1;
        num2=n2;
    }
    else
    {
        num1=n2;
        num2=n1;
    }
    while ( num2!=0 )
    {
        cout<<'('<<num1<<','<<num2<<')'<<endl;
        temp=num2;
        num2=num1%num2;
        num1=temp;
    }
    cout<<'('<<num1<<','<<0<<')'<<endl;
return num1;}    

#include <iostream>
#include <cmath>
using namespace std;

int digit(int n ,int k);
int answer (int, int, int);

int main()
{   
    int n, k, number_of_digits, ans;
    //Taking Input
    cout<<"Enter n:  ";
    cin>>n;
    cout<<"Enter k:  ";
    cin>>k;
    cout<<endl;

    int i, temp=n;
    if ( temp<0 )
        temp*=-1;
    for ( i=0; temp>1; i++)
    {
        temp/=10;
    }    

    
    while ( i<k || k<0)
    {
        cout<<"Invalid Input\n";
        cout<<"Enter n:  ";
        cin>>n;
        cout<<"Enter k:  ";
        cin>>k;
        cout<<endl;

        int i, temp=n;
        if ( temp<0 )
        temp*=-1;
        for ( i=0; temp>1; i++)
        {
            temp/=10;
        }    
    }
    cout<<"The digit is: "<<digit ( n , k )<<endl;
return 0;}

int digit(int n,int k) 
{   
    int i, temp=n;
    if ( temp<0 )
        temp*=-1;
    for ( i=0; temp>1; i++)
    {
        temp/=10;
    }
    int ans= i-k;
    ans= n/(pow(10,ans));
    ans %=10;
    if ( ans<0 )
        ans*=-1;
return ans;}
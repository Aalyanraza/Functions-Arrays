#include <iostream>
using namespace std;

double evaluatePolynomial();

double Power(double down, double up)

{
	double answer; 
	
	for(int i=up; i>0 ; i--)
	{
		answer *= down;
	}
return answer;}

int main()
{
    cout<<"Answer is :"<<evaluatePolynomial()<<endl;
return 0;}

double evaluatePolynomial()
{
    int x,n,coefficient,answer=0;
    //Taking Input
    cout<<"Enter x:  ";
    cin>>x;
    cout<<"Enter Highest power n:  ";
    cin>>n;
    while ( n<0 )
	
	{
		cout<<"\nPower is always positive\nEnter highest power again:\t";
		cin>>n;
	}
    cout<<"Enter "<<n+1<<" coefficients in descending order of power: ";

    for (int i = 0; i <n+1; i++ ) 
	
	{
		cin>>coefficient;
		answer += ( coefficient * ( Power ( x, n ) ));
	}

	return answer;
    }
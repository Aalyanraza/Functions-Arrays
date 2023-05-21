#include <iostream>
using namespace std;

int addition( int n1, int n2)
{

    int add;

	if((n1>=0 && n2>=0) || (n1<0 && n2>=0))
	{
		add=n1;
	
		for(int i=0; i<n2; i++)
		{
			add++;
		}
	}
	else if((n1>=0 && n2<0) || (n1<0 && n2<0))
	{
		add=n1;
        if (n2<0)
            n2*=-1;
		
		for(int j=0; j<n2; j++)
		{
			add--;
		}
	}
return add;}

int subtraction(int n1,int n2)
{
	int sub=n1;
	
	if((n1>=0 && n2>=0) || (n1<0 && n2>=0))
	{
		for(int abr=0; abr<n2; abr++)
		{
			sub--;
		}

	}
	else if((n1>=0 && n2<0) || (n1<0 && n2<0))
	{
		if (n2<0)
            n2*=-1;
		
		for(int abr=0; abr<n2; abr++)
		{
			sub++;
		}
	}
	
return sub;}

int absolute(int n1)
{
	int abs=0;

	if(n1>=0)
	{
		abs=n1;
	}
	else if(n1<0)
	{
		for(int abr=n1; abr<0; abr++)
		{
			abs++;
		}
	}

	return abs;
}

int multiplication(int n1,int n2)
{
	int multiply=n1;
	
	if(n1>=0 && n2>0)
	{
		for(int i=0; i<(n2-1); i++)
		{
			for(int j=0; j<n1; j++)
			{
				multiply++;
			}
		}
	}
	else if(n1>=0 && n2==0)
	{		
		for(int i=0; i<n1; i++)
		{
			multiply--;
		}
	}
	else if(n1<0 && n2<0)
	{	
		if (n2>0)
            n2*=-1;
		
		for(int i=0; i<(n2+1); i++)
		{
			for(int j=0; j<absolute(n1); j++)
			{
				multiply++;
			}
		}
	}
	else if(n1>=0 && n2<0)
	{
		if (n2>0)
            n2*=-1;
		for(int i=0; i<(n2+1); i++)
		{
			for(int j=0; j<n1; j++)
			{
				multiply--;
			}
		}
	}
	else if(n1<0 && n2>=0)
	{
        if (n1>0)
		    multiply = -1*n1;
        else
            multiply = n1;    
		
		for(int i=0; i<(n2+1); i++)
		{
			for(int j=0; j<absolute(n1); j++)
			{
				multiply--;
			}
		}
	}	
return multiply;}

int main()
{   
    int menu, number1, number2;
    cout<<"Calculator...\n\nPress\n1 for Addition \n2 for Subtraction\n3 for Multiplication\n4 for Absolute\nChoice:  ";
    cin>>menu;
    cout<<"\n\n";

    if ( menu==1 )
    {
        cout<<"Enter 1st number: ";
        cin>>number1;
        cout<<"Enter 2nd number: ";
        cin>>number2;
        cout<<"Result: "<<addition ( number1, number2 )<<endl;
    }
    else if ( menu==2 )
    {
        cout<<"Enter 1st number: ";
        cin>>number1;
        cout<<"Enter 2nd number: ";
        cin>>number2;
        cout<<"Result: "<<subtraction ( number1, number2 )<<endl;
    }
    else if ( menu==3 )
    {
        cout<<"Enter 1st number: ";
        cin>>number1;
        cout<<"Enter 2nd number: ";
        cin>>number2;
        cout<<"Result: "<<multiplication ( number1, number2 )<<endl;
    }
    else if ( menu==4 )
    {
        cout<<"Enter 1st number: ";
        cin>>number1;
        cout<<"Result: "<<absolute ( number1 )<<endl;
    }
    else
        cout<<"Invalid responce..\n";
}
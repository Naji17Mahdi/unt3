#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

main()
{
	int n;
	int i;
	cout<<"enter n : "<<endl;
	cin>>n;
	
	for ( i =1 ; i <= n ; i++ )
	{
		if ( i % 2 == 1 )
		{
			cout<<i<<endl;
		}
	}
}

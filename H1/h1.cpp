/*
	Program Name: Character Tree
	Programer Name: Julian Salas
	Course: C++ and Data Strucutres
*/

#include <iostream>
using namespace std;

int main(void)
{
	//Integers to store row number, space chars & alternating chars, respectively
	int i=0, j=0;

	//Starts rows
	for(i=5; i>=0; i--)
	{
		//Creates spaces
		for(j=i+30; j>0; j--)
		{
			cout<<" ";
		}
		//Creates alternating chars
		for(j=2*i;j<11;j+=1)
		{
			if(i%2!=0)
			{
				cout<<"*";
			}
			else
			{
				cout<<"^";
			}
		}
		//New line at end of row
		cout<<"\n";
	}

return(0);
}
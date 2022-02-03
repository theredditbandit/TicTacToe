//Tic Tac Toe
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<io.h>
using namespace std;

/*
This is what the tic-tac-toe board is going to look like 
		*		*
	a1	*	a2	*	a3
		*		*
*************************
		*		*
	b1	*	b2	*	b3
		*		*
*************************
		*		*
	c1	*	c2	*	c3
		*		*

*/

int DrawBoard(char a1,char a2,char a3,char b1,char b2,char b3,char c1,char c2,char c3)
{	
//	char a1,a2,a3,b1,b2,b3,c1,c2,c3;
	char x = 'X', o='O';
	cout<<"\t\t*\t\t*\t\t"<<endl;
	cout<<"\t"<<a1<<"\t*"<<"\t"<<a2<<"\t*"<<"\t"<<a3<<"\t"<<endl;
	cout<<"\t\t*\t\t*\t\t"<<endl;
	cout<<"**************************************************"<<endl;
	cout<<"\t\t*\t\t*\t\t"<<endl;
	cout<<"\t"<<b1<<"\t*"<<"\t"<<b2<<"\t*"<<"\t"<<b3<<"\t"<<endl;
	cout<<"\t\t*\t\t*\t\t"<<endl;
	cout<<"**************************************************"<<endl;
	cout<<"\t\t*\t\t*\t\t"<<endl;
	cout<<"\t"<<c1<<"\t*"<<"\t"<<c2<<"\t*"<<"\t"<<c3<<"\t"<<endl;
	cout<<"\t\t*\t\t*\t\t"<<endl;
	return 0;
	
	
	
	
	
}

int clrscr()
{
	system("cls");
}

int StartGame()
{
	char a1,a2,a3,b1,b2,b3,c1,c2,c3;
	char x = 1, o='O',b = '\0';// char x = 2 or x = 1 will give a smiley unicode character , very cool. If possible replace the winning symbol with the smiley
	DrawBoard(x,b,x,
			  o,x,b,
			  x,b,o);
	
	return 0;
}

int main()
{
	char a1,a2,a3,b1,b2,b3,c1,c2,c3;
	char x = 'X', o='O',b = '\0'; 
	StartGame();
	
	
	
// This is a test to see how code commits using gh desktop
	
	
}

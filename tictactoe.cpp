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

int InitBoard(string a1,string a2,string a3,string b1,string b2,string b3,string c1,string c2,string c3)
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
	string a1="a1",a2="a2",a3="a3",b1="b1",b2="b2",b3="b3",c1="c1",c2="c2",c3="c3";
	char x = 'X', o='O',b = '\0';    // char x = 2 or x = 1 will give a smiley unicode character , very cool. If possible replace the winning symbol with the smiley
	InitBoard(a1,a2,a3,
			  b1,b2,b3,
			  c1,c2,c3);
	
	cout<<"The game will be played using text input only.\nTo play you must enter the coordinate of the box first and then follow it up by an x or an o.\nYou can call up this coordinate board anytime while playing the game.(Game will be reset)\nPress Enter to clear this and start playing.";
	cin.get();
	clrscr();
	return 0;
}


int PlayGame()
{
	string x = "X", o="O",b="\0";
	InitBoard(b,b,b,
			  b,b,b,
			  b,b,b);
	cout<<"Enter the coordinate of a box :";
	
	cin.get();
	return 0;
}

int main()
{
	char a1,a2,a3,b1,b2,b3,c1,c2,c3;
	char x = 'X', o='O',b = '\0'; 
	StartGame();
	PlayGame();
}

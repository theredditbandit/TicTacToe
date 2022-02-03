//Tic Tac Toe
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<io.h>
using namespace std;
string a1="a1",a2="a2",a3="a3",b1="b1",b2="b2",b3="b3",c1="c1",c2="c2",c3="c3";
string ga1="\0",ga2="\0",ga3="\0",gb1="\0",gb2="\0",gb3="\0",gc1="\0",gc2="\0",gc3="\0"; //game board variable values
string b = "\0";
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
//	string a1="a1",a2="a2",a3="a3",b1="b1",b2="b2",b3="b3",c1="c1",c2="c2",c3="c3";
//	 x = 'X', o='O',b = '\0';    // char x = 2 or x = 1 will give a smiley unicode character , very cool. If possible replace the winning symbol with the smiley
	InitBoard(a1,a2,a3,
			  b1,b2,b3,
			  c1,c2,c3);
	
	cout<<"The game will be played using text input only.\nTo play you must enter the coordinate of the box first and then follow it up by an x or an o.\nYou can press capital R to call up this coordinate board anytime while playing the game.(Game will be reset)\nPress Enter to clear this and start playing.";
	cin.get();
	clrscr();
	InitBoard(b,b,b,
			  b,b,b,
			  b,b,b);
	
	return 0;
}

int UpdateBoard(string input , string choice)
{
	string R;
if(input==a1)ga1=choice;
else if(input==a2)ga2=choice;
else if(input==a3)ga3=choice;
else if(input==b1)gb1=choice;
else if(input==b2)gb2=choice;
else if(input==b3)gb3=choice;
else if(input==c1)gc1=choice;
else if(input==c2)gc2=choice;
else if(input==c3)gc3=choice;
else if(input==R){StartGame();}

clrscr();
InitBoard(ga1,ga2,ga3,gb1,gb2,gb3,gc1,gc2,gc3);
	
}

int PlayGame()
{
	string x = "X", o="O",X="X",O="O",b="\0";
	string input ,choice;
	
	cout<<"Enter the coordinate of a box :";cin>>input;cout<<endl;
	cout<<"Enter X or O :";cin>>choice;cout<<endl;
	cout<<"Enter R if you want to see the rules and coordinate board again :";
	UpdateBoard(input,choice);
	cin.get();
	
	PlayGame();
	return 0;
}

int main()
{
	char a1,a2,a3,b1,b2,b3,c1,c2,c3;
	char x = 'X', o='O',b = '\0'; 
	StartGame();
	PlayGame();
}

// Change meant to appear only on the testing branch 


/*
Programme : TicTacToe
Developer : theredditbandit
Date of Creation: 04-02-2022
github: https://github.com/theredditbandit
*/

/*
Programme: TicTacToe-fork
forked by: flightman69
github: https://github.com/flightman69
twitter: flightman69
*/
#include"includes.h"

int ch = 1; //counts the turn
string a1="1",a2="2",a3="3",b1="4",b2="5",b3="6",c1="7",c2="8",c3="9";
string ga1=" ",ga2="\0",ga3="\0",gb1="\0",gb2="  ",gb3="\0",gc1="\0",gc2="\0",gc3=" "; //game board variable values
string b = "\0";
bool SinglePlayerMode = 0;
/*
This is what the tic-tac-toe board is going to look like 
		*		*
	1	*	2	*	3
		*		*
*************************
		*		*
	4	*	5	*	6
		*		*
*************************
		*		*
	7	*	8	*	9
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
int WinBoard(char a1,char a2,char a3,char b1,char b2,char b3,char c1,char c2,char c3)
{	
//	char a1,a2,a3,b1,b2,b3,c1,c2,c3;
	char x = 'X', o = 'O';
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


	

void clrscr()
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
	
	cout<<"The game will be played using text input only.\nTo play enter the coordinate of the box.\nPress Enter to clear this and start playing.";
	cin.get();
	clrscr();
	InitBoard(b,b,b,
			  b,b,b,
			  b,b,b);
	
	return 0;
}

void UpdateBoard(string input , string choice)
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
void CheckWin()
{	
	char a1,a2,a3,b1,b2,b3,c1,c2,c3;
	char b = '\0';
	if(ga1==ga2 && ga2==ga3){
		clrscr();
		WinBoard(a1=2,a2=2,a3=2,b1=b,b2=b,b3=b,c1=b,c2=b,c3=b);
		cout<<"\t"<<ga1<<" Won the game !!\n";
		cin.get();
		exit(0);
		}
	else if(gb1==gb2 && gb2==gb3){
		clrscr();
		WinBoard(a1=b,a2=b,a3=b,b1=2,b2=2,b3=2,c1=b,c2=b,c3=b);
		cout<<gb1<<" Won the game !!\n";
		cin.get();
		exit(0);
		}
	else if(gc1==gc2 && gc2==gc3){
		clrscr();
		WinBoard(a1=b,a2=b,a3=b,b1=b,b2=b,b3=b,c1=2,c2=2,c3=2);
		cout<<gc1<<" Won the game !!\n";
		cin.get();
		exit(0);
		}
	else if(ga1==gb1 && gb1==gc1){
		clrscr();
		WinBoard(a1=2,a2=b,a3=b,b1=2,b2=b,b3=b,c1=2,c2=b,c3=b);
		cout<<ga1<<" Won the game !!\n";
		cin.get();
		exit(0);
		}
	else if(ga2==gb2 && gb2==gc2){
		clrscr();
		WinBoard(a1=b,a2=2,a3=b,b1=b,b2=2,b3=b,c1=b,c2=2,c3=b);
		cout<<ga2<<" Won the game !!\n";
		cin.get();
		exit(0);
		}
	else if(ga3==gb3 && gb3==gc3){
		clrscr();
		WinBoard(a1=b,a2=b,a3=2,b1=b,b2=b,b3=2,c1=b,c2=b,c3=2);
		cout<<ga2<<" Won the game !!\n";
		cin.get();
		exit(0);
		}
	else if(ga1==gb2 && gb2==gc3){
		clrscr();
		WinBoard(a1=2,a2=b,a3=b,b1=b,b2=2,b3=b,c1=b,c2=b,c3=2);
		cout<<ga2<<" Won the game !!\n";
		cin.get();
		exit(0);
		}
	else if(gc1==gb2 && gb2==ga3){
		clrscr();
		WinBoard(a1=b,a2=b,a3=2,b1=b,b2=2,b3=b,c1=2,c2=b,c3=b);
		cout<<ga2<<" Won the game !!\n";
		cin.get();
		exit(0);
		}
}
int PlayGame()
{
	string x = "X", o="O",X="X",O="O",b="\0";
	string input ,choice;
	cout<<"Enter the coordinate of a box :";cin>>input;cout<<endl;
	if (ch%2 != 0){
		choice = "X";
	}else{
		choice = "O";
	}
	ch = ch+1;
	UpdateBoard(input,choice);
	cin.get();
	CheckWin();
	PlayGame();
	return 0;
}

int SinglePlayer()
{
	return 0;
}

int MultiPlayer()
{
	StartGame();
	PlayGame();
	return 0;
}


int main()
{

MultiPlayer();


}


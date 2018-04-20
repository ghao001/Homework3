/*
 * c18.c
 *
 *  Created on: Apr 19, 2018
 *      Author: Howard
 */
#include<stdio.h>
void displayBoard(char [3][3]);
char checkStatus(char [3][3]);
int main()
{
	char board[3][3]={{'*','*','*'},
					  {'*','*','*'},
					  {'*','*','*'}};
	int r,c;
	while(checkStatus(board)=='c')
	{
		scanf("Player1: %d %d",&r,&c);
		board[r][c]='x';
		scanf("player2: %d %d",&r,&c);
		board[r][c]='o';
		checkStatus(board);
		diplayBoard(board);
	}

}
void displayBoard(char board[3][3])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}
char checkStatus(char board[3][3])
{
	int xWin=0;
	int oWin=0;
	int full=1;
	for(int i=0;i<3;i++)
	{
		if(board[i][0]==board[i][1]==board[i][2]=='o')
			oWin=1;
		else if(board[i][0]==board[i][1]==board[i][2]=='x')
			xWin=1;
		if(board[0][i]==board[1][i]==board[2][i]=='o')
			oWin=1;
		else if(board[0][i]==board[1][i]==board[2][i]=='x')
			xWin=1;
	}
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
		{
			if(board[i][j]=='*')
				full=0;
		}
	if(oWin==1)
		return 'o';
	else if(xWin==1)
			return 'x';
	else if(oWin==0 && xWin==0 && full==1)
		return 't';
	else return 'c';

}

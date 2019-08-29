
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<bits/stdc++.h>

using namespace std;

char board[9]={'1','2','3','4','5','6','7','8','9'};
// Board is not taken as 2-D here because there are just 9 variables and I can access any variable with just its index.

int frame();
int draw();
int win();
void display_board();
void one_player_game();
void two_player_game();

int frame()
{
    char check;
    system("cls");
    cout<<endl<<endl<<"\t\t\t\t"<<"Tic-Tac-Toe"<<endl;
    cout<<"\t\t\t\t"<<"-----------"<<endl<<endl;
    cout<<"\tFOR ONE PLAYER GAME PRESS 1"<<endl;
    cout<<"\tFOR TWO PLAYER GAME PRESS 2"<<endl;
    cout<<"\tFOR CLOSING THE PROGRAM PRESS 3"<<endl<<endl;
    cin>>check;
    while (check!='1' && check!='2' && check!='3')
    {
         cout<<"\tYou entered an invalid input."<<endl;
         cout<<"\tFOR ONE PLAYER GAME PRESS 1"<<endl;
         cout<<"\tFOR TWO PLAYER GAME PRESS 2"<<endl;
         cout<<"\tFOR CLOSING THE PROGRAM PRESS 3"<<endl<<endl;
         cin>>check;
    }
    cout<<endl<<endl<<endl;
    if (check=='1')
    {
        one_player_game();
    }
    else if (check=='2')
    {
        two_player_game();
    }
    return 0;
}

int draw()
{
    for(int i=0;i<9;i++)
    {
        if(board[i]!='X' && board[i]!='0')
            return 0;
    }
    system("cls");
    cout<<"\t\tThis is a two player game."<<endl<<endl;
    cout<<"Player1 : X"<<endl;
    cout<<"Player2 : 0"<<endl;
    display_board();
    cout<<endl<<endl<<"\t\tGame is draw."<<endl;
    return 1;
}

int win()
{
    int check;
    if ( ((board[0]==board[1])&&(board[0]==board[2])&&(board[0]=='X')) || ((board[3]==board[4])&&(board[3]==board[5])&&(board[3]=='X')) )
    {
        system("cls");
    cout<<"\t\tThis is a two player game."<<endl<<endl;
    cout<<"Player1 : X"<<endl;
    cout<<"Player2 : 0"<<endl;
    display_board();
        cout<<endl<<endl<<"\t\tPlayer 1 wins."<<endl;
        return 1;
    }
    else if ( ((board[6]==board[7])&&(board[6]==board[8])&&(board[6]=='X')) || ((board[0]==board[3])&&(board[0]==board[6])&&(board[0]=='X')) )
    {
        system("cls");
    cout<<"\t\tThis is a two player game."<<endl<<endl;
    cout<<"Player1 : X"<<endl;
    cout<<"Player2 : 0"<<endl;
    display_board();
        cout<<endl<<endl<<"\t\tPlayer 1 wins."<<endl;
        return 1;
    }
    else if ( ((board[1]==board[4])&&(board[1]==board[7])&&(board[1]=='X')) || ((board[2]==board[5])&&(board[2]==board[8])&&(board[2]=='X')) )
    {
        system("cls");
    cout<<"\t\tThis is a two player game."<<endl<<endl;
    cout<<"Player1 : X"<<endl;
    cout<<"Player2 : 0"<<endl;
    display_board();
        cout<<endl<<endl<<"\t\tPlayer 1 wins."<<endl;
        return 1;
    }
    else if ( ((board[0]==board[4])&&(board[0]==board[8])&&(board[0]=='X')) || ((board[2]==board[4])&&(board[2]==board[6])&&(board[2]=='X')) )
    {
        system("cls");
    cout<<"\t\tThis is a two player game."<<endl<<endl;
    cout<<"Player1 : X"<<endl;
    cout<<"Player2 : 0"<<endl;
    display_board();
        cout<<endl<<endl<<"\t\tPlayer 1 wins."<<endl;
        return 1;
    }
    else if ( ((board[0]==board[1])&&(board[0]==board[2])&&(board[0]=='0')) || ((board[3]==board[4])&&(board[3]==board[5])&&(board[3]=='0')) )
    {
        system("cls");
    cout<<"\t\tThis is a two player game."<<endl<<endl;
    cout<<"Player1 : X"<<endl;
    cout<<"Player2 : 0"<<endl;
    display_board();
        cout<<endl<<endl<<"\t\tPlayer 2 wins."<<endl;
        return 1;
    }
    else if ( ((board[6]==board[7])&&(board[6]==board[8])&&(board[6]=='0')) || ((board[0]==board[3])&&(board[0]==board[6])&&(board[0]=='0')) )
    {
        system("cls");
    cout<<"\t\tThis is a two player game."<<endl<<endl;
    cout<<"Player1 : X"<<endl;
    cout<<"Player2 : 0"<<endl;
    display_board();
        cout<<endl<<endl<<"\t\tPlayer 2 wins."<<endl;
        return 1;
    }
    else if ( ((board[1]==board[4])&&(board[1]==board[7])&&(board[1]=='0')) || ((board[2]==board[5])&&(board[2]==board[8])&&(board[2]=='0')) )
    {
        system("cls");
    cout<<"\t\tThis is a two player game."<<endl<<endl;
    cout<<"Player1 : X"<<endl;
    cout<<"Player2 : 0"<<endl;
    display_board();
        cout<<endl<<endl<<"\t\tPlayer 2 wins."<<endl;
        return 1;
    }
    else if ( ((board[0]==board[4])&&(board[0]==board[8])&&(board[0]=='0')) || ((board[2]==board[4])&&(board[2]==board[6])&&(board[2]=='0')) )
    {
        system("cls");
    cout<<"\t\tThis is a two player game."<<endl<<endl;
    cout<<"Player1 : X"<<endl;
    cout<<"Player2 : 0"<<endl;
    display_board();
        cout<<endl<<endl<<"\t\tPlayer 2 wins."<<endl;
        return 1;
    }
    return 0;
}

void display_board()
{
    cout<<endl<<endl<<endl;
    cout<<"\t"<<"\t"<<"       "<<"|"<<"       "<<"|"<<"       "<<endl;
    cout<<"\t"<<"\t"<<"   "<<board[0]<<"   "<<"|"<<"   "<<board[1]<<"   "<<"|"<<"   "<<board[2]<<"   "<<endl;
    cout<<"\t"<<"\t"<<"       "<<"|"<<"       "<<"|"<<"       "<<endl;
    cout<<"\t"<<"\t"<<"-----------------------"<<endl;
    cout<<"\t"<<"\t"<<"       "<<"|"<<"       "<<"|"<<"       "<<endl;
    cout<<"\t"<<"\t"<<"   "<<board[3]<<"   "<<"|"<<"   "<<board[4]<<"   "<<"|"<<"   "<<board[5]<<"   "<<endl;
    cout<<"\t"<<"\t"<<"       "<<"|"<<"       "<<"|"<<"       "<<endl;
    cout<<"\t"<<"\t"<<"-----------------------"<<endl;
    cout<<"\t"<<"\t"<<"       "<<"|"<<"       "<<"|"<<"       "<<endl;
    cout<<"\t"<<"\t"<<"   "<<board[6]<<"   "<<"|"<<"   "<<board[7]<<"   "<<"|"<<"   "<<board[8]<<"   "<<endl;
    cout<<"\t"<<"\t"<<"       "<<"|"<<"       "<<"|"<<"       "<<endl;
    cout<<endl<<endl<<endl;
}

void turn2(int input)
{
    system("cls");
    cout<<"\t\tThis is a two player game."<<endl<<endl;
    cout<<"Player1 : X"<<endl;
    cout<<"Player2 : 0"<<endl;
    display_board();
    if (input>=1 && input<=9 && board[input-1]!='X'  && board[input-1]!='0')
    {
        board[input-1]='0';
        cout<<endl<<endl<<"\tPlease press enter to continue."<<endl;
    }
    else
    {
        cout<<endl<<endl<<"You entered at invalid location, enter again."<<endl;
        cin>>input;
        turn2(input);
    }
}

void turn2()
{
    int input;
    system("cls");
    cout<<"\t\tThis is a two player game."<<endl<<endl;
    cout<<"Player1 : X"<<endl;
    cout<<"Player2 : 0"<<endl;
    display_board();
    cout<<"\t Player 2 chance(enter an integer from 1 to 9) : ";
    cin>>input;
    if (input>=1 && input<=9 && board[input-1]!='X'  && board[input-1]!='0')
    {
        board[input-1]='0';
        cout<<endl<<endl<<"\tPlease press enter to continue."<<endl;
    }
    else
    {
        cout<<endl<<endl<<"You entered at invalid location, enter again."<<endl;
        cin>>input;
        turn2(input);
    }
}

void turn1(int input)
{
    system("cls");
    cout<<"\t\tThis is a two player game."<<endl<<endl;
    cout<<"Player1 : X"<<endl;
    cout<<"Player2 : 0"<<endl;
    display_board();
    if (input>=1 && input<=9 && board[input-1]!='X'  && board[input-1]!='0')
    {
        board[input-1]='X';
        cout<<endl<<endl<<"\tPlease press enter to continue."<<endl;
    }
    else
    {
        cout<<endl<<endl<<"You entered at invalid location, enter again."<<endl;
        cin>>input;
        turn1(input);
    }
}

void turn1()
{
    int input;
    system("cls");
    cout<<"\t\tThis is a two player game."<<endl<<endl;
    cout<<"Player1 : X"<<endl;
    cout<<"Player2 : 0"<<endl;
    display_board();
    cout<<"\t Player 1 chance(enter an integer from 1 to 9) : ";
    cin>>input;
    if (input>=1 && input<=9 && board[input-1]!='X'  && board[input-1]!='0')
    {
        board[input-1]='X';
        cout<<endl<<endl<<"\tPlease press enter to continue."<<endl;
    }
    else
    {
        cout<<endl<<endl<<"You entered at invalid location, enter again."<<endl;
        cin>>input;
        turn1(input);
    }
}

void turn_human(int input)
{
    system("cls");
    cout<<"\t\tThis is a one player game."<<endl<<endl;
    cout<<"Player1 : X"<<endl;
    cout<<"Computer : 0"<<endl;
    display_board();
    if (input>=1 && input<=9 && board[input-1]!='X'  && board[input-1]!='0')
    {
        board[input-1]='X';
        cout<<endl<<endl<<"\tPlease press enter to continue."<<endl;
    }
    else
    {
        cout<<endl<<endl<<"You entered at invalid location, enter again."<<endl;
        cin>>input;
        turn_human(input);
    }
}

void turn_human()
{
    int input;
    system("cls");
    cout<<"\t\tThis is one player game."<<endl<<endl;
    cout<<"Player1 : X"<<endl;
    cout<<"Computer : 0"<<endl;
    display_board();
    cout<<"\t Player 1 chance(enter an integer from 1 to 9) : ";
    cin>>input;
    if (input>=1 && input<=9 && board[input-1]!='X'  && board[input-1]!='0')
    {
        board[input-1]='X';
        cout<<endl<<endl<<"\tPlease press enter to continue."<<endl;
    }
    else
    {
        cout<<endl<<endl<<"You entered at invalid location, enter again."<<endl;
        cin>>input;
        turn_human(input);
    }
}

void turn_computer()
{
    int number;
    system("cls");
    cout<<"\t\tThis is one player game."<<endl<<endl;
    cout<<"Player1 : X"<<endl;
    cout<<"Computer : 0"<<endl;
    display_board();
    for (int k=0;k<9;k++)
    {
        if (board[k]!='X' && board[k]!='0')
        {
            number=k;
            board[number]='0';
            break;
        }
    }
    cout<<"\t Computer chance : "<<number<<endl;
}


void two_player_game()
{
    char checking;
    system("cls");
    cout<<"\t\tThis is a two player game."<<endl<<endl;
    cout<<"Player1 : X"<<endl;
    cout<<"Player2 : 0"<<endl;
    display_board();
    cout<<endl<<"\tIf you want to go back press 1 else press 2 : ";
    cin>>checking;
    while (checking!='1' && checking!='2')
    {
        cout<<endl<<"You entered invalid value.";
        cout<<endl<<"\tIf you want to go back press 1 else press 2 : ";
        cin>>checking;
    }
    if (checking=='1')
    {
        frame();
    }
    else
    {
    while(1)
    {
        turn1();
        if (win()==1 || draw()==1)
        {
            board[0]='1';
            board[1]='2';
            board[2]='3';
            board[3]='4';
            board[4]='5';
            board[5]='6';
            board[6]='7';
            board[7]='8';
            board[8]='9';
            break;
        }
        turn2();
        if (win()==1)
        {
            board[0]='1';
            board[1]='2';
            board[2]='3';
            board[3]='4';
            board[4]='5';
            board[5]='6';
            board[6]='7';
            board[7]='8';
            board[8]='9';
            break;
        }
    }
    cout<<endl<<"Press enter to continue"<<endl;
            getch();
            frame();
    }
}


void one_player_game()
{
    char checking;
    system("cls");
    cout<<"\t\tYou are playing with a computer."<<endl<<endl;
    cout<<"Player1 : X"<<endl;
    cout<<"Computer : 0"<<endl;
    display_board();
    cout<<endl<<"\tIf you want to go back press 2 else press 1 : ";
    cin>>checking;
    while (checking!='1' && checking!='2')
    {
        cout<<endl<<"You entered invalid value.";
        cout<<endl<<"\tIf you want to go back press 1 else press 2 : ";
        cin>>checking;
    }
    if (checking=='2')
    {
        frame();
    }
    else
    {
        while(1)
    {
        turn_human();
        if (win()==1 || draw()==1)
        {
            board[0]='1';
            board[1]='2';
            board[2]='3';
            board[3]='4';
            board[4]='5';
            board[5]='6';
            board[6]='7';
            board[7]='8';
            board[8]='9';
            break;
        }
        turn_computer();
        if (win()==1)
        {
            board[0]='1';
            board[1]='2';
            board[2]='3';
            board[3]='4';
            board[4]='5';
            board[5]='6';
            board[6]='7';
            board[7]='8';
            board[8]='9';
            break;
        }
    }
    cout<<endl<<"Press enter to continue"<<endl;
            getch();
            frame();
    }
}


int main()
{
    frame();
    return 0;
}

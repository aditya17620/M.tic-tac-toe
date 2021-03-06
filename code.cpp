#include <iostream>
#include <conio.h>

using namespace std;
char t[9] = {'1','2','3','4','5','6','7','8','9'};

//function to print the array
void print()
{
    cout<<"\n\n";
    for(int i=0;i<9; i++)
    {
        cout<<"\t "<<t[i]<<"\t";
        if(i == 2 || i == 5 || i == 8)
            cout<<"\n\n";
    }
}

//function to decide the winner
int winner()
{
    //check first column
    if(t[0] == t[3] && t[3] == t[6])
    {
        if(t[0]=='X')
            return 1;
        else
            return 2;
    }

    //checking second column
    else if(t[1] == t[4] && t[4] == t[7])
    {
        if(t[1]=='X')
            return 1;
        else
            return 2;
    }

    //checking third column
    else if(t[2] == t[5] && t[5] == t[8])
    {
        if(t[2]=='X')
            return 1;
        else
            return 2;
    }

    //checking first row
    else if(t[0] == t[1] && t[1] == t[2])
    {
        if(t[0]=='X')
            return 1;
        else
            return 2;
    }

    //checking second row
    else if(t[3] == t[4] && t[4] == t[5])
    {
        if(t[3]=='X')
            return 1;
        else
            return 2;
    }

    //checking third row
    else if(t[6] == t[7] && t[7] == t[8])
    {
        if(t[6]=='X')
            return 1;
        else
            return 2;
    }

    //checking for first diagonal
    else if(t[0] == t[4] && t[4] == t[8])
    {
        if(t[0]=='X')
            return 1;
        else
            return 2;
    }

    //checking for second diagonal
    else if(t[2] == t[4] && t[4] == t[6])
    {
        if(t[2]=='X')
            return 1;
        else
            return 2;
    }
}


//function to plot the input on the grid
void plot(int player, int tile)
{
    if(player == 1 && t[tile - 1] != 'O')
        t[tile - 1] = 'X';
    else if(player == 2 && t[tile - 1] != 'X')
        t[tile - 1] = 'O';
}

int main()
{
    int tile, result, no_draw;

    cout<<"\t\t\t\tTIC TAC TOE\n";
    cout<<"\n\n\tInstructions: \n\t->Select the tile you want to choose by entering the number.\n\t->Do not select a tile already denoted by an 'X' or 'O'.\n\t  This will not take any input but will be counted as a step ";
    cout<<"\n\t->First to 3 X or O in a row, column or a diagonal wins.\n\n\t Have fun.\n\n\tEnter ANY key to continue.";
    getch();
    system("cls");

    //since there are only 9 tiles,
    //each player can play only 4.5 times.
    //so the loop iterates for 5 times
    for(int i =0; i<5; i++)
    {
        print();
        cout<<"\n\tPlayer 1,\n\tEnter the tile number corresponding to the position you want to select,\n\t1 to 9 ONLY\n\n";
        cin>>tile;
        cout<<"\n\n";
        plot(1, tile);
        print();
        result = winner();
        //checkwinner(result);
        if(result == 1)
        {
            cout<<"\n\tPlayer 1 is the WINNER!!! \n";
            no_draw = 1;
            break;
        }


        else if(i == 4 && no_draw != 1)
        {
            cout<<"\n\tIt is a DRAW! Well played \n";
            break;
        }


        cout<<"\n\tPlayer 2,\n\tEnter the tile number corresponding to the position you want to select,\n\t1 to 9 ONLY\n\n";
        cin>>tile;
        cout<<"\n\n";
        plot(2, tile);
        print();
        result = winner();
        //checkwinner();
        if(result == 2)
        {
            cout<<"\n\tPlayer 2 is the WINNER!!! \n";
            no_draw = 1;
            break;
        }


        system("cls");
    }
    return 0;
}

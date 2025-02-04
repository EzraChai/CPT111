#include <iostream>
using namespace std;

const int column = 3;
const int row = 3;

int gameBoard[row][column] = {};

void printGameBoard();
int checkWinner();
void getUserInput();

int main()
{
    int win = 0;
    while (!win)
    {
        printGameBoard();
        getUserInput();
        win = checkWinner();
    }
    printGameBoard();
    return 0;
}
void printGameBoard()
{
    // Complete this function
    for (int i = 0; i < row; i++)
    {
        cout << gameBoard[i][0] << " " << gameBoard[i][1] << " " << gameBoard[i][2] << endl;
    }
    cout << endl;
}
int checkWinner()
{
    // Complete this function
    if (gameBoard[0][0] == 1 && gameBoard[0][1] == 1 && gameBoard[0][2] == 1)
    {
        return 1;
    }
    else if (gameBoard[0][0] == 2 && gameBoard[0][1] == 2 && gameBoard[0][2] == 2)
    {
        return 2;
    }
    else if (gameBoard[1][0] == 1 && gameBoard[1][1] == 1 && gameBoard[1][2] == 1)
    {
        return 1;
    }
    else if (gameBoard[1][0] == 2 && gameBoard[1][1] == 2 && gameBoard[1][2] == 2)
    {
        return 2;
    }
    else if (gameBoard[2][0] == 1 && gameBoard[2][1] == 1 && gameBoard[2][2] == 1)
    {
        return 1;
    }
    else if (gameBoard[2][0] == 2 && gameBoard[2][1] == 2 && gameBoard[2][2] == 2)
    {
        return 2;
    }
    else if (gameBoard[0][0] == 1 && gameBoard[1][0] == 1 && gameBoard[2][0] == 1)
    {
        return 1;
    }
    else if (gameBoard[0][0] == 2 && gameBoard[1][0] == 2 && gameBoard[2][0] == 2)
    {
        return 2;
    }
    else if (gameBoard[0][1] == 1 && gameBoard[1][1] == 1 && gameBoard[2][1] == 1)
    {
        return 1;
    }
    else if (gameBoard[0][1] == 2 && gameBoard[1][1] == 2 && gameBoard[2][1] == 2)
    {
        return 2;
    }
    else if (gameBoard[0][2] == 1 && gameBoard[1][2] == 1 && gameBoard[2][2] == 1)
    {
        return 1;
    }
    else if (gameBoard[0][2] == 2 && gameBoard[1][2] == 2 && gameBoard[2][2] == 2)
    {
        return 2;
    }
    else if (gameBoard[0][0] == 1 && gameBoard[1][1] == 1 && gameBoard[2][2] == 1)
    {
        return 1;
    }
    else if (gameBoard[0][0] == 2 && gameBoard[1][1] == 2 && gameBoard[2][2] == 2)
    {
        return 2;
    }
    else if (gameBoard[0][2] == 1 && gameBoard[1][1] == 1 && gameBoard[0][2] == 1)
    {
        return 1;
    }
    else if (gameBoard[0][2] == 2 && gameBoard[1][1] == 2 && gameBoard[0][2] == 2)
    {
        return 2;
    }
    return 0;
}

void getUserInput()
{
    int flag = 0;
    while (!flag)
    {
        int row, column, input;
        cin >> row;
        cin >> column;
        cin >> input;
        if (gameBoard[row][column] == 0)
        {
            gameBoard[row][column] = input;
            flag = 1;
        }
    }
}
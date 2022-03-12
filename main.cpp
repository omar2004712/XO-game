#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct position
{
    int x, y;
    bool operator<(int num)
    {
        if ((*this).x < num || (*this).y < num)
            return true;
        else
            return false;
    }

    bool operator>(int num)
    {
        if ((*this).x > num || (*this).y > num)
            return true;
        else
            return false;
    }
};

void print_board(char arr[3][3]);
position input(int player);

int main()
{
    char board[3][3] = {};
    print_board(board);
    position move = input(1);

    return 0;
}

/*
    1     2     3
1      |     |
  -----|-----|-----
2      |     |
  -----|-----|-----
3      |     |

*/

void print_board(char arr[3][3])
{
    cout << "    1     2     3" << endl;

    for (int row = 1; row <= 3; row++)
    {
        cout << row << "   " << arr[row - 1][0] << "   |  " << arr[row - 1][1] << "   |  " << arr[row - 1][2] << endl;

        if (row != 3)
        {
            cout << "  -----|-----|-----" << endl;
        }
    }
}

position input(int player)
{
    position move;
    char pos_x, pos_y;
    do
    {
        cout << "Player " << player << "(x then y): ";
        cin >> pos_x >> pos_y;

        move.x = pos_x - 48;
        move.y = pos_y - 48;

    } while (move > 4 || move < 0);

    return move;
}

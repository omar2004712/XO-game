#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct position
{
    int x, y;
};

void print_board(char arr[3][3]);

int main()
{
    char board[3][3] = {};
    print_board(board);
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
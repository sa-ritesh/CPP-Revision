#include <iostream>
using namespace std;

bool ratInMaze(char maze[10][10], char soln[][10], int i, int j, int m, int n)
{
    //i are thee number of rows and j are the number of columns ;
    //base case
    if (i == m && j == n)
    {
        soln[i][j] = 1;
    }
    //rat should be in the maze
    if (i > m || j > n)
    {
        return false;
    }

    if (maze[i][j] = 'X')
    {
        return false;
    }

    //Assume soln exist through current cell
    soln[i][j] = 1;
    bool rightSuccess = ratInMaze(maze, soln, i, j + 1, m, n);
    bool downSuccess = ratInMaze(maze, soln, i + 1, j, m, n);

    //backtracking
    soln[i][j] = 0;
    if (rightSuccess || downSuccess)
    {
        return true;
    }

    return false;
}
int main()
{
    char maze[10][10] = {
        "0000",
        "00X0",
        "000X",
        "0X00",

    };

    char soln[10][10] = {0};
    int m;
    int n;

    bool ans = ratInMaze(maze, soln, 0, 0, m - 1, n - 1);
    //print the soln
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << soln[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return true;

    if (ans == false)
    {
        cout << " Path Doesnt Exist!" << endl;
    }
    return 0;
}
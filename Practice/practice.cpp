#include <iostream>
#include <fstream>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <vector>
#include <cstring>
#include <set>
#include <cmath>
#include <climits>
#include <queue>
#include <stack>
#include <deque>
#include <list>
#define ll long long
using namespace std;
class Solution
{
    void dfs_helper(int src, vector<bool> &visited, map<int, list<int>> l)
    {
        visited[src] = true;
        for (int nbr : l[src])
        {
            if (!visited[nbr])
            {
                dfs_helper(nbr, visited, l);
            }
        }
    }
    bool dfs(int src, map<int, list<int>> l, int s)
    {
        //vector<pair<int,bool>> visited;
        vector<bool> visited;
        for (auto p : l)
        {
            visited.push_back(false);
        }
        visited[0] = true;
        dfs_helper(0, visited, l);
        for (int i = 0; i < s; i++)
        {
            if (!visited[i])
            {
                return false;
            }
        }
        return true;
    }

public:
    bool canVisitAllRooms(vector<vector<int>> &rooms)
    {
        int size = rooms.size();
        map<int, list<int>> l;
        for (int i = 0; i < size; i++)
        {
            for (auto i1 : rooms[i])
            {
                l[i].push_back(i1);
            }
        }
        return dfs(0, l, size);
    }
};
int main()
{
    vector<vector<int>> v = {{1}, {2}, {}, {3}};
    Solution s;
    cout << s.canVisitAllRooms(v);
}
#include <iostream>
#include <map>
#include <list>
#include <queue>
using namespace std;
map<int, bool> visited;

class Graph
{
public:
    map<int, list<int>> l;
    void addEdge(int x, int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void dfs_helper(int node)
    {
        cout << node << " ";
        visited[node] = true;
        for (auto i : l[node])
        {
            if (!visited[i])
            {
                dfs_helper(i);
            }
        }
        return;
    }
    void dfs()
    {
        for (auto i : l)
        {
            int node = i.first;
            visited[node] = false;
        }
        for (auto i : l)
        {
            int node = i.first;
            if (!visited[node])
            {
                dfs_helper(node);
            }
        }

        return;
    }
};

int main()
{
    Graph g;
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(1, 0);
    g.addEdge(0, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 5);
    g.dfs();
}
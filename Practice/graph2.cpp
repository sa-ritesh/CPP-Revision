#include <iostream>
#include <map>
#include <list>
#include <queue>
using namespace std;
class Graph
{
public:
    map<int, list<int>> l;
    void addEdge(int x, int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void bfs(int src)
    {
        map<int, bool> visited;
        queue<int> q;
        visited[src] = true;
        q.push(src);
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            cout << node << " ";
            for (auto nbr : l[node])
            {
                if (visited[nbr] != true)
                {
                    q.push(nbr);
                    visited[nbr] = true;
                }
            }
        }
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
    g.bfs(0);
}
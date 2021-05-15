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
        map<int, int> dist;
        queue<int> q;
        for (auto i : l)
        {
            int node = i.first;
            dist[node] = INT_MAX;
        }
        dist[src] = 0;
        q.push(src);
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            cout << node << " ";
            for (auto nbr : l[node])
            {
                if (dist[nbr] == INT_MAX)
                {
                    q.push(nbr);
                    dist[nbr] = dist[node] + 1;
                }
            }
        }
        for (auto i : l)
        {
            int node = i.first;
            int d = dist[node];
            cout << node << " " << d << endl;
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
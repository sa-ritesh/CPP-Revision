#include <iostream>
using namespace std;
int *parent = new int[100];
class dsu
{
public:
    int findSet(int i)
    {
        if (parent[i] == -1)
        {
            return i;
        }

        return parent[i] = findSet(parent[i]);
    }
    int unionSet(int x, int y)
    {
        int s1 = findSet(x);
        int s2 = findSet(y);
        if (s1 != s2)
        {
            parent[s2] = s1;
        }
    }
};

int main()
{
}
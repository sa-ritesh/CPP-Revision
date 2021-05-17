/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution
{
public:
    Node *cloneGraph(Node *node)
    {
        Node *ans = node;
        map<int, Node *> arr;
        map<Node *, bool> visited;
        queue<Node *> q;
        q.push(node);
        while (!q.empty())
        {
            Node *n = q.top();
            q.pop();
            int v = n.top()->val;
            arr[v] = n.top();
            for (auto i : n->neighbors)
            {
                v = i->val;
                if (!m[v])
                {
                    m[v] = i;
                    q.push(i);
                }
            }
        }
        return ans;
    }
};
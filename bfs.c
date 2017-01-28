//Breadth First Search- Graph
#include<iostream>
#include<list>
#include<queue>
using namespace std;


class Graph
{
    int v;
    list<int> *adj;
    public:
        Graph(int v);
        void edge(int from, int to);
        void bfs(int s);
};

Graph::Graph(int v)
{
    this->v = v;
    adj = new list<int>[v];
}

void Graph::edge(int from, int to)
{
    adj[from].push_back(to);
}

void Graph::bfs(int s)
{
    bool *visited = new bool[v];
    for(int i=0 ; i<v ; i++)
        visited[i] = false;

    list<int> queue;

    visited[s] = true;
    queue.push_back(s);

    list<int>::iterator i;
    while(!queue.empty())
    {
        s = queue.front();
        cout<<s<<" ";
        queue.pop_front();

        for(i = adj[s].begin() ; i != adj[s].end() ; ++i)
        {
            if(!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
}

int main()
{
    Graph g(4);
    g.edge(0,1);
    g.edge(0,2);
    g.edge(1,2);
    g.edge(2,0);
    g.edge(2,3);
    g.edge(3,3);

    cout<<"Starting from vertex 2 : ";
    g.bfs(2);
    return 0;
}


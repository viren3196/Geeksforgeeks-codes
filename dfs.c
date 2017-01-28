#include<iostream>
#include<list>

using namespace std;

class graph
{
    int vert;
    list<int> *adj;
    void dfs(int v, bool visited[]);
    public:
        graph(int vert);
        void edge(int from, int to);
        void init(int v);
};

graph::graph(int vert)
{
    this->vert = vert;
    adj = new list<int>[vert];
}

void graph::edge(int from, int to)
{
    adj[from].push_back(to);
}

void graph::dfs(int v, bool visited[])
{
    visited[v] = true;
    cout<<v<<" ";
    list<int>::iterator i;
    for(i = adj[v].begin() ; i!=adj[v].end() ; i++)
        if(!visited[*i])
            dfs(*i, visited);
}

void graph::init(int v)
{
    bool *visited = new bool[v];
    for(int i=0 ; i<v ; i++)
        visited[i] = false;
    dfs(v,visited);
}

int main()
{
    graph g(4);
    g.edge(0,1);
    g.edge(0,2);
    g.edge(1,2);
    g.edge(2,0);
    g.edge(2,3);
    g.edge(3,3);

    cout<<"Starting from vertex 0 : "    ;
    g.init(0);
    return 0;
}


#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n;
vector<vector<int> > sused(n);
vector<bool> cerveny(n);

void bfs(int Z){
    queue<int> q;
    q.push(Z);
    cerveny[Z] = true;
    while(!q.empty())
    {
        int vrchol = q.front();
        q.pop();
        for(int i=0; i<sused[vrchol].size(); i++)
        {
            if(!cerveny[sused[vrchol][i]])
            {
                q.push(sused[vrchol][i]);
                cerveny[sused[vrchol][i]] = true;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        if(!cerveny[i])
        {
            cout<<i+1<<endl;
        }
    }


}


int main(){
    cin>>n;
    // n is the number of vertices
    sused.resize(n);
    cerveny.resize(n);
    int m;
    cin>>m;
    // m is the number of edges
    for(int i=0; i<m; i++)
    {
        int a,b;
        cin>>a>>b;
        sused[a-1].push_back(b-1);
        sused[b-1].push_back(a-1);

    }
    bfs(0);

}
#include <bits/stdc++.h>

using namespace std;

int n;                         
vector<vector<int> > sused(n); 
vector<bool> cerveny(n);      

void dfs(int Z)
{
    cerveny[Z] = true;
    for(int i=0; i<sused[Z].size(); i++)
    {
        if(!cerveny[sused[Z][i]])
        {
            dfs(sused[Z][i]);
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
    dfs(0);
    for(int i=0; i<n; i++)
    {
        if(!cerveny[i])
        {
            cout<<i+1<<endl;
        }
    }
    return 0;
}
// Print the numbers of the vertices that are not reachable from the first vertex.
// Time complexity: O(n+m)
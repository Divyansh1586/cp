#include <iostream>
#include <vector>

using namespace std;

void dfs(int node, stack <int> &st, vector<vector<vector<int>>> &adj, vector<bool> &vis){
    vis[node] = true;
    for(auto u: adj[node]){
        if(!vis[u[0]]) dfs(u[0], st, adj, vis);
    }
    st.push(node);
}

vector<vector<vector<int>>> convert(int V, vector<vector<int>> edges)
{
    vector<vector<vector<int>>> adj(V);
    for(const auto &edge: edges){
        int u = edge[0], v = edge[1], wt = edge[2];
        adj[u].push_back({v, wt});
    }
    return adj;
}

vector <int> topo(int V, vector<vector<vector<int>>> adj){
    vector <bool> vis(V, false);
    stack <int> st;
    for(int i = 0; i < V; i++){
        if(!vis[i]) dfs(i, st, adj, vis);
    }
    vector <int> ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    return ans;

}
int main()
{
    int V = 4;
    int E = 3;
    vector<vector<int>> edges = {{0, 1}, {1, 2}, {2, 3}};
    vector<vector<vector<int>>> adj = convert(V, edges);
    vector <int> ans = topo(V, adj);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << ' ';
    }
}
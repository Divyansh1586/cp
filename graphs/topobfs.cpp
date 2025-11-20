#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector <int> topoSort(int V, vector <vector<int>> & adj){
    vector <int> indegree(V, 0);
    for(int i = 0; i < V; i++){
        for(auto u: adj[i]){
            indegree[u]++;
        }
    }
    queue <int> q;
    for(int i = 0; i < V; i++){
        if(indegree[i] == 0) q.push(i);
    }
    vector <int> topo;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        topo.push_back(node);
        
        for(auto u: adj[node]){
            indegree[u]--;
            if(indegree[u] == 0) q.push(u);
        }
    }
    return topo;
}

int main(){
    vector<vector<int>> adj= {{}, {}, {3}, {1}, {0, 1}, {0, 2}};
	int V = 6;
	
	vector<int> ans =topoSort(V, adj);

	for (auto node : ans) {
		cout << node << " ";
	}
}
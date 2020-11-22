/*Kosaraju's Alogo for strongly connected components
--------------------------------------------------
SCC --> If In a graph we can reach every node in a 
graph from a src node then that graph is called as a scc.

steps ---
1. DFS , get an ordering based upon finishing .
   * Here we are using vector as a stack .
   * T He node that is finished at the last is at top of the stack or at the end of the vector .
2. Reverse the graph .(we have to reverse the edges)
3. Do DFS from right to left as given in ordering list

*/

#include <iostream>
#include<vector>
using namespace std;

void dfs(vector<int> graph[], int i, bool * visited, vector<int> &stack) {
	visited[i] = true;

	for(auto nbr: graph[i]) {
		if(!visited[nbr]) {
			dfs(graph,  nbr, visited, stack);
		}
	}
	// function call is complete
	stack.push_back(i);
}

void dfs2(vector<int> graph[], int i, bool * visited) {
	visited[i] = true;
    cout<<i<< " ";
	for(auto nbr: graph[i]) {
		if(!visited[nbr]) {
			dfs(graph, nbr, visited);
		}
	}
	
}

void solve(vector<int> graph[], vector<int> rev_graph[], int N) {
	bool visited[N];
	memset(visited, 0, N);

	vector<int> stack;

	//step - 1 need store the vertices acc to dfs finish time
    for(int i = 0; i< N;i++) {
    	if(!visited[i]) {
    		dfs(graph, i, visited, stack);
    	}
    }

    //ordering = stack

    //step -2 reverse

    // step -3 do dfs acc to ordering given in the stack
    //reset every vertice with 0
    memset(visited, 0, N);
    char component_name = 'A';
    for(int x = stack.size()-1; x>=0;x--) {
        int node = stack[x];
        if(!visited[node]) {
        	cout<<"component "<<component_name<<"--> ";
        	//there is component starting from this node
        	dfs2(rev_graph, node, visited);
            cout<<endl;
            component_name++;
        }
    }
}

int main() {
	int N;
	cin>>N;

	vector<int> graph[N];
	vector<int> rev_graph[N];

	int m;
	cin>>m;

    // Assuming N verices and m edges
	while(m--) {
		int x, y;
        cin>>x>>y;

        graph[x].push_back(y);
        rev_graph[y].push_back(x);
	}

	solve(graph, rev_graph, N);
    
	return 0;

	//7 8
	//2 1
	// 1 0
	// 0 2
	// 0 3
	// 3 5
	// 5 6
	// 6 3
	// 3 4


}
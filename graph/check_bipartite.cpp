#include<iostream>
#include<vector>
using namespace std;


bool dfs_helper(vector<int> graph[], int node, int parent, int * visited, int color) {
   //come to node
	visited[node] = color // 1 or 2 both means visited

	for(auto nbr : graph[node]) {

        if(visited[nbr] == 0) {
        	int subprob = dfs_helper(graph, nbr,node, visited, 3-color);
           
            if(subprob == false) {
        	   return false;
            }
	    }else if(nbr != parent and color == visited[nbr]) {
	    	return false;
	    }
    }

    return true;
}

bool dfs(vector<int> graph[], int N) {
	//0 - NOt visited , 1- visited color is 1 and 2 - visited and the color is 2
	//use 1 array which serve the purpose of 2
	int visited[N] = {0} 

    int color = {0};
    int ans = dfs_helper(graph, 0, -1,visited, color);
    
    //color
    for(int i =0;i<N;i++) {
    	cout<<i<<" - Color"<<visited[i]<<endl;
    }

    return ans;
}


int main() {

  int N, M;
  cin>>N>>M;

  vector<int> graph[N];
  while(M--) {
  	int x, y;
  	cin>>x>>y;

  	graph[x].push_back(y);
  	graph[y].push_back(x);
  }

  //BFS or DFS by coloring the node at each step if current node have the col - 1 then the neighbour = 2
  if(dfs(graph, N)) {
  	cout<<"yes";
  }else {
  	cout<<"not"; 
  }

  return 0;
}
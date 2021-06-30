

// Using DFS and flag pointer

class Solution
{
    public:
	
	void dfs(vector<int> adj[],vector<int> &visited,int s,int *flag)
	{
	    visited[s]=1;
	    
	    for(auto ele:adj[s])
	    {
	        if(visited[ele]==0)
	        {
	            dfs(adj,visited,ele,flag);
	        }
	        else if(visited[ele]==1)
	        {
	            *flag=1;
	            return ;
	        }
	    }
	    visited[s]=2;

	}
	bool isCyclic(int V, vector<int> adj[]) 
	{
	   	// code here
	   	vector<int> visited(V,0);
	   	
	   	int flag=0;
	   	
	   	for(int i=0;i<V;i++)
	   	{
	   	    if(visited[i]==0)
	   	    dfs(adj,visited,i,&flag);
	   	    
	   	}
	   
	   return flag;
	}
};


// Using DFS and without flag pointer
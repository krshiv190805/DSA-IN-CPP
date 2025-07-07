/* now we will discuss about breadth first search technique(BFS)
we take it level by level
first it starts from 0th level and so on
now if we have a graph like this
   1
 /   \
 2   6
 /\  /\
 3 4 7 8
   \/
   5
   and now we take level 0 as 6 , then you cannot write 2 as level 0 
   and further while we are writing , it goes like
  6(L-0) 1(L-1) 7(L-1) 8(L-1) as 1 , 7,8 are at equal distance from 6(let suppose a unit distance away)
  2(L-2) 5(L-2) 3(L-3) 4(L-3) as 2,5 are at equal distance from 6(2 units or edges) and 3,4 are at equal distance from 6(3 units or edges)
   we take the array of size 10(if there are 9 nodes)
   now every node is marked as 0 initially
    and then we mark the node as 1 when we visit it
    now the code goes like
    class solution{
    public:
    vector<int> bfsOfGraph(int V,vector<int>adj[]){
    int vis[n]=0;
    vis[0]=1;
    queue<int>q;
    q.push(0);
    vector<int>bfs;
    while(!q.empty()){
    int node=q.front();
    q.pop();
    bfs.push(node);
    for(auto it:adj[node]){
    (if !vis[it]){
    vis[it]=1;
    q.push(it);
    }
    }
    }
    return bfs;
    }
    };
    a queue , a visited node and a BFS all combine to have a space complexity of O(3N), where n is number of nodes;
    talking about the TC , it will be O(N)+O(2*E) where E is the number of edges , since while loop is running for N times and the for loop is running for 2*E times(as discussed earlier)
    
*/
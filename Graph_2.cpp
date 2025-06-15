/*in graph in C++ first input is no. of nodes(n) then no. of edges(m)
and then they will be giving you order how the nodes are connected to each other, it can be given 1->2 or 2->1
to store there are two ways for it (matrix and list methods)
first is adjacency matrix , create a matrix of size[n+1][m+1] where n is 
number of nodes, and m is no of edges, space complexity is O(n^2)
better is adjacency list, create a list of size n, and each element of list is a list of size m
space complexity for this is O(2*Edges)
now we are doing in weighted matrix
so now suppose we took a 4*4 matrix, 
whatever the weight is written between the nodes or on the edge , we will write that
like suppose 2 is written on 1->2 then we will write 2 on both (1,2) and (2,1) in the matrix
and when we want to store as a list , then we will store as neighbours of a particular node
like 4 has three neighbour 3(4),2(1),5(3) bracket ones are their respective weight of their edges 
so now we will write in 4 as -> (3,4) (2,1) (5,3) , first is node second is their weight of edges
while defining a list you have to write pair<int,int> as a data type of list
to store graph in c++ we will use 1) adjacency matrix 2) adjacency list
one based index - nodes are numbered from 1 to n
now we will take a matrix of size[n+1][n+1] and initialize it with 0, why we are taking
such that we can get n as an index, why we don't use 1) method becuase
it requires O(n^2) space, and we are using 2) method because it requires O(2*Edges) space
now we will use 2) method,like {arraylist<arraylist<>>adj} in java  and we will run a loop till n+1 and add n+1
array list in the above adjaceny list(Ln 21);
like it is written adj.get(1).add(2) in java, in c++ it will be adj[1].push_back(2)
means at array list of index 1 add 2 in it;
likewise adj.get(u).add(v) and adj.get(v).add(u) , if it is not directed but if it is directed
write only first one , no need for second;
if you want that you should visit every node so u can traverse by each and every edges 
and by code here it goes
for(i=1->10)
if(!vis[i]) traversal(i);
*/
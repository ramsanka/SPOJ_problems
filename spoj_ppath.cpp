using namespace std;

class graph {
  int V;
  list <int> *l;
public:
  graph(int V)
  {
    this->V = V;
    l = new list<int>[V];
  }
  
  void addEdge(int V1, int V2)
  {
     l[V1].push_back(V2);
     l[V2].push_back(V1);
  }
  
  int bfs (int in1, int in2);
};


void sieve(vector <int>&v)
{

    int n = 9999;
    bool prime[10000];
    
    memset(prime, true, sizeof(prime));
    
    for (int p = 2; p*p <= n; p++) {
       if (prime[p] == true) {
            for (int j = p*p; j<=n; j += p) {
              prime[j] = false;
            }  
       }
    }
    
    for (int p= 1000; p<= n; p++) {
          if(prime[p] == true) {
              v.push_back(p);
    }
 }
 
int graph::bfs(int in1, int in2)
{
    int visited[V];
    memset(visited, 0, sizeof(visited));
    
    queue<int> q;
    
    q.push(in1);
    visited[in1] = 1;
    list<int>::iterator i; // run through the adjaceny list of the node. Adjaceny list implementation.
    
    while (!q.empty())
    {
        int s = q.front();
        q.pop();
        
        for (i = l[s].begin(); i != l[s].end(); ++i) 
        {
            if (!visited[*i])
            {
                visited[*i] = 1;
                q.push(*i);
            }
        
            if (*i == in2) {
               return (visited[*i] -1;
            }
         }
     
     }
     
     
        
   
    
 
      
    

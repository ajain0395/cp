#include<bits/stdc++.h>
using namespace std;

int minDistance(int dist[], bool sptSet[],int V) 
{ 
   // Initialize min value 
   int min = INT_MAX, min_index; 
   
   for (int v = 0; v < V; v++) 
     if (sptSet[v] == false && dist[v] <= min) 
         min = dist[v], min_index = v; 
   
   return min_index; 
} 
int dijkstra(vector<vector<int>> &graph, int src,int ei)
{ 
	int V = graph.size();
     int dist[V];     
                      
   
     bool sptSet[V]; 
                     
   
     for (int i = 0; i < V; i++) {
        dist[i] = INT_MAX;
        sptSet[i] = false; 
     }
     dist[src] = 0; 
   
     for (int count = 0; count < V-1; count++) 
     { 
       int u = minDistance(dist, sptSet, V); 
   
       sptSet[u] = true; 
   
       for (int v = 0; v < V; v++) 
   
         if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX  
                                       && dist[u]+graph[u][v] < dist[v]) 
            dist[v] = dist[u] + graph[u][v]; 
     }
     return dist[ei];
   
} 
bool diff(string one,string two)
{
    int count = 0;
    int x =  one.length() -two.length();
    if(x > 1)
    {
        return false;
    }
    for(int i = 0 ; i < one.length();i++)
    {
        if(one[i] != two[i])
        {
            count++;
            if(count > 1)
            {
                return false;
            }
        }
    }
    if(count == 1 || (count == 0 && x == 1) )
    {
        return true;
    }
    return false;
}
int lad(string start,string end,vector<string> &dictV) {
 //   dictV.insert(dictV.begin(),start);
 //   dictV.push_back(end);
    int si=0;
    int ei = 0;
    int V = dictV.size();
    for(int i = 0 ; i < V;i++)
    {
        if(dictV[i] == start)
        {
            si = i;
        }
        if(dictV[i] == end)
        {
            ei = i;
        }
    }
    vector<vector<int>> adlist(V,vector<int>(V,0));
    //int init = 0;
   //z int endd = dictV.size() -1;
    if(V >0 && dictV[0] == dictV[V-1])
    {
        return 1;
    }
    for(int i = 0 ; i < V - 1;i++)
    {
        for(int j = i+1 ; j < V;j++)
            {
                if(diff(dictV[i],dictV[j]))
                {
                    adlist[i][j] = 1;
                    adlist[j][i] = 1;
                }
            }
    }
    int sol = dijkstra(adlist,si,ei);
    if(sol == INT_MAX)
    {
        return -1;
    }
    return sol+1;
}
int main()
{
    string s;
    vector<string> vec;
    while(1)
    {
        cin>>s;
        if(s == "END")
        {
            break;
        }
        vec.push_back(s);
    }
    string start,end;
    cin>>start>>end;
    int res = lad(start,end,vec);
    cout<<res;
}

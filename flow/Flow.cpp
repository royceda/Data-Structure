/*
 * File:   flow.cpp
 * Author: rboudjeltia
 *
 * Created on 20 novembre 2016, 14:25
 */

#include "Flow.h"



Flow::Flow(vector<vector<int> > graph, vector<vector<int> > cap){
  _graph = graph;
  _capacity = cap;
}

Flow::Flow() {
}

Flow::Flow(const Flow& orig) {
}

Flow::~Flow() {
}

//Augmented path
int Flow::augmentFF(vector<vector<int> > flow, int val, int u, int t, vector<bool> visit){
  visit[u] = true;

  //if the target is reached
  if(u == t){
    return val;
  }

  //through the graph
  for(unsigned int j = 0; j<_graph[u].size(); j++){
    //for(vector<int>::iterator v = _graph[u].begin(); v != _graph[u].end(); ++v) {
    /* std::cout << *it; ... */
    int v = _graph[u][j];
    int cuv = _capacity[u][v];

    //if v isnt visited and we can set some flow on th edge (u,v)
    if(!(visit[v]) && cuv > flow[u][v]  ){
      int res = min(val, cuv-flow[u][v]);
      //we go untill to reach the target or a final vetex
      int delta = augmentFF(_capacity, res, v, t, visit);
      // if we reach the target
      if(delta > 0){
	flow[u][v] += delta;
	flow[v][u] -= delta;
	return delta;
      }
    }
  }
  return 0;
}


//create reverse edge
void Flow::addReverseEdge(){
  for(unsigned int i=0; i<_graph.size(); i++){
    for(unsigned int j=0; j<_graph[i].size(); j++){
      if(find (_graph[i].begin(), _graph[i].end(), _graph[i][j]) != _graph[i].end()){
	_graph[i].push_back(j);
	_capacity[j][i] = 0;
      }
    }
  }
}


//seek max flow
int Flow::fordFulkerson(int s, int t){

  int    n      = _graph.size();
  double inf    = numeric_limits<double>::infinity();
  vector<vector<int> > flow;
  vector<bool> visit;

  //init
  for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
      flow[i][j] = 0;
    }
  }

  for(int i = 0; i<n; i++){
    visit[i] = false;
  }



  addReverseEdge();
  //while there is a path from s to t
  while(augmentFF(flow, inf, s, t, visit) > 0){
    //we pass
  }

  //SUM
  int sum = 0;
  for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
      sum += flow[i][j];
    }
  }
  return sum;
}

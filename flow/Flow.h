
#ifndef Flow_H
#define	Flow_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <cstdlib>

#define SIZE 255

using namespace std;

class Flow {
public:
    Flow();
    Flow(vector<vector<int> >, vector<vector<int> >);
    Flow(const Flow& orig);
    virtual ~Flow();

    int fordFulkerson(int, int);
    int edmondKarp();
    int dinic();
    int flowMax();
    int dijkstra();
    int minCut();


    void addReverseEdge();

    //usefull in fordFulkerson
    /* Given an array of Flows, the value of current Flow, the initial vertex, the target vertex v, and the state array
    * we create a network Flow
    */
    int augmentFF( vector<vector<int> > flow, int val, int u, int v, vector<bool> visit);

private:
    vector<vector<int> >  _graph; //adjacence
    vector<vector <int> > _capacity; //capacity of every edges
};





#endif	/* Flow_H */

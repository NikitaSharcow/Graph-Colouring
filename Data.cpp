#include "Data.h"

Data:: Data(ifstream &f_in): Parcer(f_in){
    int i,v,u;
    for (i=0; i<V; i++){
        adj_list.push_back({});
        col_res.push_back(0); //0 - not coloured vertex
    }
    for (i=0;i<E;i++){
        v = edges[i].first;
        u = edges[i].second;
        adj_list[v].push_back(u);
        adj_list[u].push_back(v);
    }
    /*
    for (i=0;i<V;i++){
        cout << i << " ";
        for (auto it=adj_list[i].begin(); it!=adj_list[i].end(); it++) cout << *it << " ";
        cout << endl;
    }
    */
    //cout << endl;
    for (i=0; i<V; i++) degree.push_back({adj_list[i].size(),i});
    sort(degree.begin(),degree.end(),greater<vertex_degree>());
    /*
    for (i=0; i<V; i++) cout << degree[i].second << " ";
    cout << endl;
    for (i=0; i<V; i++) cout << degree[i].first << " ";
    cout << endl << endl;
     */
    //cout << degree[V-1].first << endl;
};


#include "Parcer.h"

Parcer::Parcer (ifstream &f_in){
    setlocale(LC_ALL, "eng");
    string s;
    f_in>>s;;
    V = stoi(s);
    f_in>>s;
    E = stoi(s);
    for (int i=0;i<E;i++){
        edge e;
        f_in>>s;
        e.first = stoi(s);
        f_in>>s;
        e.second = stoi(s);
        edges.push_back(e);
    }
    /*
    cout << V << " " << E << endl;
    for (int i=0; i<E; i++){
        cout << edges[i].first << " " << edges[i].second << endl;
    }
    cout << endl;
     */
}

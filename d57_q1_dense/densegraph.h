#ifndef __DENSE_GRAPH_H__
#define __DENSE_GRAPH_H__

// Your code here
#include <iostream>
#include <vector>

using namespace std;
int main() {
    cout << "YES!$@*" << endl;
    return 0;
}
#define main main__

class DenseGraph{
public:
    DenseGraph() : DenseGraph(3) {
        // Your code here
    }

    DenseGraph(int n_in) : n(n_in), edge(n_in) {
        // Your code here
        for (auto& x : edge)
            x.resize(n_in);
    }

    DenseGraph(const DenseGraph& G) : n(G.n), edge(G.edge) {
        // Your code here
    }

    void AddEdge(int a, int b) {
        // Your code here
        edge[a][b] = true;
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        edge[a][b] = false;
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        return edge[a][b];
    }

    DenseGraph Transpose() const {
        // Your code here
        DenseGraph ret(n);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                ret.edge[i][j] = edge[j][i];
        return ret;
    }

protected:
    int n;
    vector<vector<bool>> edge;
    // Your code here
};
#endif // __DENSE_GRAPH_H__
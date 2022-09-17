#include <vector>
#include <map>
using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    map<int,int> check;
    for (int i = 0; i < A.size(); i++) {
        v.push_back(A[i]);
        check[A[i]] = 0;
    }
    for (int i = 0; i < B.size(); i++) {
        if (check.find(B[i]) == check.end()) v.push_back(B[i]);
    }
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    map<int,int> check;
    for (int i = 0; i < B.size(); i++) {
        check[B[i]] = 0;
    }
    for (int i = 0; i < A.size(); i++) {
        if (check.find(A[i]) != check.end()) v.push_back(A[i]);
    }
    return v;
}

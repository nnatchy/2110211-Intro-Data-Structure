#include <iostream>
#include <vector>
using namespace std;
void remove_even(vector<int> &v,int a,int b) {
    //write your code only in this function

    // TODO First solution
    // for (int i = b; i >= a; i--) {
    //     if (i % 2 == 0) {
    //         auto it = v.begin() + i;
    //         v.erase(it);
    //     }  
    // }

    // TODO Second solution
    for (auto it = v.begin() + b - (b % 2); it >= v.begin() + a + (a % 2); it -= 2) {
        v.erase(it);
    }
    

}
int main() {
    //read input
    int n,a,b;
    cin >> n;
    vector<int> v;
    for (int i = 0;i < n;i++) {
    int c;
    cin >> c;
    v.push_back(c);
    }
    cin >> a >> b;
    //call function
    remove_even(v,a,b);
    //display content of the vector
    for (auto &x : v) {
        cout << x << " ";
    }
    cout << endl;
}
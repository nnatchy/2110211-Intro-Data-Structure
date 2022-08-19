#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    long long father, son, son2;
    map<long long, long long> fam;
    cin >> n >> m;
    while (n--)
    {
        cin >> father >> son;
        fam[son] = father;
    }

    while (m--)
    {
        cin >> son >> son2;
        auto e = fam.end();
        auto fa1 = fam.find(son);
        auto fa2 = fam.find(son2);
        // check if son and son2 is the same or not and check whether son1 and son2 as "key" exist in map or not
        if (son == son2 || fa1 == e || fa2 == e)
        {
            cout << "NO" << endl;
            continue;
        }
        // check whether father as "key" exist in map or not
        auto gp1 = fam.find(fa1->second);
        auto gp2 = fam.find(fa2->second);
        if (gp1 == e || gp2 == e)
        {
            cout << "NO" << endl;
            continue;
        }
        // if the son1 and son2 grandfather is the same person, print "YES"
        if (gp1->second == gp2->second)
        {
            cout << "YES" << endl;
            continue;
        }
        // Other cases
        cout << "NO" << endl;
    }
}
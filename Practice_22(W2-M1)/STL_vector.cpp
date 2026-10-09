#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    // cout << v.size() << endl;
    // v.pop_back();

    // for(int i = 0; i < v.size(); i++)
    //     cout << v[i] << " ";
    // cout << endl;

    // cout <<v.front() << endl;
    // cout << v.back() << endl;
    // // v.clear(); //all element delete kore
    // cout << v.empty() << endl; //empty hole 1 return krbe, na hole 0


    //using assign()
    // vector<int> v(n, 5);
    // for(int i = 0; i < v.size(); i++)
    //     cout << v[i] << " ";
    // cout << endl;

    // vector<int> v;
    // v.assign(10, 2); //vector initalization er por solving wer majhe size/value change korte help kore
    // for(int i = 0; i < v.size(); i++)
    //     cout << v[i] << " ";
    // cout << endl;

    // vector<int> v;
    // v.resize(4);
    // cout << v.size() << endl;
    // for(int i = 0; i < v.size(); i++)
    //     cin >> v[i];
    // for(int i = 0; i < v.size(); i++)
    //     cout << v[i] << " ";
    // cout << endl;


    // for(auto it = v.begin(); it != v.end(); it++)
    //     cout << *it << " ";
    // cout << endl;

    // auto last = --v.end();
    // cout << *last << endl;

    // reverse(v.begin(), v.end()); //n
    // sort(v.rbegin(), v.rend()); //nlogN
    // sort(v.begin(), v.end(), greater<int>()); //nlogN
    sort(v.begin(), v.end());
    for(auto value: v)
        cout << value << " ";
    cout << endl;

    auto min = min_element(v.begin(), v.end()); //multiple element thakle 1st element return kore
    auto max = max_element(v.begin(), v.end());
    cout << "Minimum element: " << *min << endl;
    cout << "Maximum element: " << *max << endl;

    int max_element_pos = max - v.begin();
    cout << "Maximum element position: " << max_element_pos << endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // // pair<string, int> student = make_pair("Rahim", 10);
    // pair<string, int> student = {"Rahim", 10};
    // // cout << "Name: " << student.first << ", Age: " << student.second << endl;
    // student.first = "Karim";
    // auto [name, roll] = student;
    // cout << name << " " << roll << endl;

    // int n;
    // cin >> n;
    // pair<string, int> students[n]; //using like array
    // for(int i = 0; i < n; i++)
    //     cin >> students[i].first >> students[i].second;
    
    // // range based for loop - iterate kore
    // // for(auto [name, roll]: students)
    // for(auto [x, y]: students)
    //     cout << x << " " << y << endl;


    // tuple<string, int, string> t = {"Rahim", 10, "01292323"};
    // // cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;
    // auto [name, roll, phone] = t;
    // cout << name << " " << roll << " " << phone << endl;

    pair<string, pair<int, string>> p = {"Rahim", {10, "01292323"}};
    string name = p.first;
    int roll = p.second.first;
    string phone = p.second.second;
    cout << name << " " << roll << " " << phone << endl;

    return 0;
}
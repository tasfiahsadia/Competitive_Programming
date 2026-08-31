#include<bits/stdc++.h>
using namespace std;

int main(){
    double p;
    int r, c;
    cin >> p >> r >> c;
    vector<vector<double>> a(101, vector<double>(101, 0));
    a[0][0] = p;

    for(int i = 0; i < 100; i++){
        for(int j = 0; j <= i; j++){
            if(a[i][j] > 1){
                double overflow = a[i][j] - 1;
                a[i+1][j] += overflow / 2;
                a[i+1][j+1] += overflow / 2;
            }
        }
    }
    cout << fixed << setprecision(5) << min(1.0, a[r][c])<< endl;
}
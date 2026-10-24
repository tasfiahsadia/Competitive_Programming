#include<bits/stdc++.h>
using namespace std;

int main(){
    //O(n)
    // int n;
    // cin >> n;
    // for(int i = 1; i <= n; i++){
    //     if(n % i == 0)
    //         cout << i << " ";
    // }


    //O(sqrt(n))
    int n;
    cin >> n;
    // for(int i = 1; i * i <= n; i++){  //i <= sqrt(n)
    //     if(n%i == 0){
    //         cout << i << " ";
    //         if(n/i != i)  // double divosor thakle handle kore
    //             cout << n/i << " ";
    //     }
    // }

    vector<int> divisors;
    for(int i = 1; i * i <= n; i++){       
        if(n%i == 0){
            divisors.push_back(i);
            if(n/i != i)
                divisors.push_back(n / i);
        }
    }

    sort(divisors.begin(), divisors.end());
    for(auto value : divisors)
        cout << value << " ";

    return 0;
}
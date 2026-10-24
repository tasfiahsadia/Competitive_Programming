#include<bits/stdc++.h>
using namespace std;

// GCD = Greatest Common Divisor
int GCD(int a, int b){
    return __gcd(a, b); //O(log(min(a,b)))
}

//LCM = Least Common Multiple
int LCM(int a, int b){
    // as we know, gcd(a,b) * lcm(a,b) = a*b
    // return (a*b)/__gcd(a,b); //O(log(min(a,b)))
    return (a/__gcd(a,b)) * b;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    cout << "GCD = " << GCD(a,b) << '\n';
    cout << "LCM = " << LCM(a,b) << '\n';
    return 0;
}
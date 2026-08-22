#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    
    int big = max(a, b);
    int temp = big;

    int first_press = big-1;
    int second_press = max(first_press, min(a, b));
    
    cout << temp + second_press;

    // if(a >= b){
    //     temp = a;
    //     a -= 1;
    //     if(a > b || a == b)
    //         result1 = temp+a;
    //     else
    //         result2 = temp+b;
    // }
    // else{
    //     temp = b;
    //     b -= 1;
    //     if(a < b || a == b)
    //         result1 = temp+b;
    //     else
    //         result2 = temp+a;
    // }
    // cout << max(result1, result2);
}
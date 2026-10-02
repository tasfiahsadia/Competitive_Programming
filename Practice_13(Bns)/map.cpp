#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> m; // <key, value> 'key' 'value' er moto jekono data type er hote pare
    m["Alice"] = 85; //logn
    m["Bob"] = 90;
    m["Charlie"] = 78;
    //map e index nai tai iteration diye loop calate hoy
    for(auto it = m.begin(); it != m.end(); it++) //O(nlogn) //auto = map<string, int>::iterator
        cout << it->first << " " << it->second << endl; //first = key, second = value , logn

    // cout << m["hamim"] << endl;
    // if(m.count("hamim")) 
    //     cout << "Found" << endl;
    // else
    //     cout << "Not Found" << endl;

    return 0;
}

// map er key gula sorted order e thake, jodi amra unordered_map use kori tahole key gula random order e thakbe.
// map er index jekono data type er hote pare, but unordered_map er index must be hashable data type.
// map er key gula unique hote hobe, jodi duplicate key thake tahole last value ta save hobe.
// map e e18 obdi limit, jekhane array er index int e e6 chilo
// map e negative value count kora jay
// map memory waste kore na (je value count korbe sudhu oi jayga tai ney, freq array er moto full range ney na)
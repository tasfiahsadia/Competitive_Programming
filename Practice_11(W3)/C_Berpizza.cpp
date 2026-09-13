#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    set<int> order;                    
    set<pair<long long,int>> Money;      

    int money[500002];                  
    int customer_count = 0;

    string result;
    result.reserve(q * 7);

    for (int i = 0; i < q; i++) {
        int type;
        cin >> type;

        if (type == 1) {
            long long m;
            cin >> m;
            customer_count++;
            money[customer_count] = m;

            order.insert(customer_count);
            Money.insert({-m, customer_count});
        }
        else if (type == 2) {
            int idx = *order.begin();

            result += to_string(idx);
            result += ' ';

            order.erase(idx);
            Money.erase({-money[idx], idx});
        }
        else {
            int idx = Money.begin()->second;

            result += to_string(idx);
            result += ' ';

            order.erase(idx);
            Money.erase({-money[idx], idx});
        }
    }

    cout << result;
}
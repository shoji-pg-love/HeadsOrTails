#include <bits/stdc++.h>
using namespace std;

string coin_toss() {
    return rand() % 2 == 0 ? "Heads" : "Tails";
}

int main() {
    srand(time(0));

    string name;
    cout << "Who are you?" << endl;
    cout << "> ";
    getline(cin, name);
    cout << "Hello, " << name << "!" << endl;

    cout << "Tossing a coin..." << endl;
    vector<string> results;
    for (int i = 1; i <= 3; ++i) {
        string result = coin_toss();
        results.push_back(result);
        cout << "Round " << i << ": " << result << endl;
    }

    int h_cnt = count(results.begin(), results.end(), "Heads");
    int t_cnt = count(results.begin(), results.end(), "Tails");
    cout << "Heads: " << h_cnt << ", Tails: " << t_cnt << endl;

    return 0;
}

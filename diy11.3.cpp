#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> m;
    string word, maxWord;
    int max = 0;

    cout << "Enter words (end with #): ";

    while(cin >> word && word != "#")
        m[word]++;

    for(auto x : m) {
        cout << x.first << " : " << x.second << endl;

        if(x.second > max) {
            max = x.second;
            maxWord = x.first;
        }
    }

    cout << "Most Frequent: " << maxWord;

    return 0;
}
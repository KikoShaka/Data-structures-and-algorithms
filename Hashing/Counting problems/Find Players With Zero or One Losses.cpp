//You are given an integer array matches 
//where matches[i] = [winneri, loseri] indicates 
//that the player winneri defeated player loseri 
//in a match.
//
//Return a list answer of size 2 where:
//
//answer[0] is a list of all players that have not lost any matches.
//answer[1] is a list of all players that have lost exactly one match.
//The values in the two lists should be returned in increasing order.


//Example test case:
//size of arr= 10
//arr pair elements : 1 3 2 3 3 6 5 6 5 7 4 5 4 8 4 9 10 4 10 9
//output:
//playersWithZeroLosses: 1 2 10
//playersWithOneLoss: 4 5 7 8

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    
    int n, winner, loser;
    cout << "size of arr= ";
    cin >> n;
    vector<pair<int, int>> matches;
    cout << "arr pair elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> winner >> loser;
        matches.push_back({ winner, loser });
    }
    unordered_map<int, int> losers;

    for (const auto& match : matches) {
        int winner = match.first;
        int loser = match.second;

        if (losers.find(winner) == losers.end()) {
            losers[winner] = 0;
        }

        if (losers.find(loser) == losers.end()) {
            losers[loser] = 0;
        }

        
        losers[loser]++;
    }

    vector<int> playersWithOneLoss;
    vector<int> playersWithZeroLosses;

    for (const auto& entry : losers) {
        if (entry.second == 1) {
            playersWithOneLoss.push_back(entry.first);
        }
        else if (entry.second == 0) {
            playersWithZeroLosses.push_back(entry.first);
        }
    }
    sort(playersWithOneLoss.begin(), playersWithOneLoss.end());
    sort(playersWithZeroLosses.begin(), playersWithZeroLosses.end());
    cout << "playersWithZeroLosses: ";
    for (auto num: playersWithZeroLosses) {
        cout << num<<" ";
    }
    cout<<endl;
    cout << "playersWithOneLoss: ";
    for (auto num : playersWithOneLoss) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

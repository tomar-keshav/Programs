#include <bits/stdc++.h>

using namespace std;

int solve(int N, int D, vector<int> P, vector<int> S) {
    vector<pair<int,int>> ps;
    for(int i = 0; i < N; i++){
        ps.push_back({P[i], S[i]});
    }
    sort(ps.begin(), ps.end());
    map<pair<double, double>, vector<int>> colonies; 


    for (int i = 0; i < N; ++i) {
        colonies[{ (double)ps[i].first, (double)ps[i].second }].push_back(i);
    }

    map<double, double> arrivalTimes; 

    for (auto x : colonies) {
        double pos = x.first.first;
        double speed = x.first.second;
        double time = (double)(D - pos) / speed;
        
        if(speed == 0){
            if(pos == D) arrivalTimes[0] = min(arrivalTimes[0], speed);
            continue;
        }

        if (arrivalTimes.count(time)) {
            arrivalTimes[time] = min(arrivalTimes[time], speed);
        } else {
            arrivalTimes[time] = speed;
        }
    }

    return arrivalTimes.size();
}

int main() {
    int N, D;
    cin >> N >> D;
    vector<int> P(N), S(N);
    for (int i = 0; i < N; ++i) cin >> P[i];
    for (int i = 0; i < N; ++i) cin >> S[i];

    cout << solve(N, D, P, S) << endl;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;

    while (t--) {
        int n, H, M;
        cin >> n >> H >> M;

        vector < pair < int, int >> alarms;

        for (int i = 0; i < n; i++) {
            int h, m;
            cin >> h >> m;
            alarms.push_back({
                h,
                m
            });
        }

        int minDiff = INT_MAX;
        int bed_time = H * 60 + M;

        pair < int, int > nearestAlarm;

        for (auto alarm: alarms) {
            int h = alarm.first;
            int m = alarm.second;

            // Convert alarm time into total minutes
            int alarmTime = h * 60 + m;

            int diff;

            // calculation : 
            // (24: 00 - 23: 11) = 49 minutes
            // 49 + 20: 15(1215 minutes) = 1264 minutes = 21 hours 4 minutes

            //             (24:00 - 23:11) = 49 minutes
            // 49 + 20:15 (1215 minutes) = 1264 minutes
            // = 21 hours 4 minutes


            if (alarmTime >= bed_time) {
                diff = alarmTime - bed_time;
            } else {
                // Wrap around to next day
                diff = (24 * 60 - bed_time) + alarmTime;
            }

            // Track smallest time difference
            if (diff < minDiff) {
                minDiff = diff;
                nearestAlarm = alarm;
            }

        }
        cout << minDiff / 60 << " " << minDiff % 60 << endl;

    }

}
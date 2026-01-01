#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> res(n, 0);
        stack<int> st;   // chỉ cần lưu function_id
        int prevTime = 0;

        for (auto &log : logs) {
            // parse log
            stringstream ss(log);
            string idStr, status, timeStr;
            getline(ss, idStr, ':');
            getline(ss, status, ':');
            getline(ss, timeStr, ':');

            int id = stoi(idStr);
            int time = stoi(timeStr);

            if (status == "start") {
                if (!st.empty()) {
                    res[st.top()] += time - prevTime;
                }
                st.push(id);
                prevTime = time;
            } else { // "end"
                res[st.top()] += time - prevTime + 1;
                st.pop();
                prevTime = time + 1;
            }
        }
        return res;
    }
};

#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <tuple>
using namespace std;

tuple<int, string, int> parseLog(const string &log) {
    stringstream ss(log);
    string token;
    vector<string> parts;
    while (getline(ss, token, ':')) {
        parts.push_back(token);
    }
    int function_id = stoi(parts[0]);
    string status = parts[1];
    int timestamp = stoi(parts[2]);
    return {function_id, status, timestamp};
}

class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> res(n, 0);   
        stack<pair<int, int>> st;       
        int prevTime = 0;        

        for (auto &log : logs) {
            auto [id, status, time] = parseLog(log);

            if (status == "start") {
                if (!st.empty()) {
                    res[st.top().first] += time - prevTime;
                }
                st.push({id, time});
                prevTime = time;
            } else {
                res[st.top().first] += time - prevTime + 1;
                st.pop();
                prevTime = time + 1;
            }
        }
        return res;
    }
};

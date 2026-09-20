class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        for (auto x : operations) {
            if (x == "C" && !s.empty()) {
                s.pop();
            } else if (x == "D" && !s.empty()) {
                s.push(2 * (s.top()));
            } else if (x == "+" && s.size() >= 2) {
                int first = s.top();
                s.pop();

                int second = s.top();

                s.push(first);
                s.push(first + second);
            } else {
                int a = stoi(x);
                s.push(a);
            }
        }
        int ans = 0;
        while (!s.empty()) {
            ans += s.top();
            s.pop();
        }
        return ans;
    }
};
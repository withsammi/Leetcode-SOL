class Solution {
public:
    struct Robot {
        int position ;
        int health;
        char direction;
        int index;
    };
    vector<int> survivedRobotsHealths(vector<int>& positions,
                                      vector<int>& healths, string directions) {
        int n = positions.size();
        vector<Robot> vals;
        for (int i = 0; i < n; i++) {
            vals.push_back({positions[i], healths[i], directions[i], i});
        }
        sort(vals.begin(), vals.end(),
             [](const Robot& a, const Robot& b) {
                 return a.position < b.position;
             }); vector<Robot>
            st;
        for (auto& robot : vals) {
            if (robot.direction == 'R') {
                st.push_back(robot);
                continue;
            }
            bool gone = false;
            while (!st.empty() && st.back().health <= robot.health &&
                   st.back().direction == 'R') {
                if (st.back().health == robot.health) {
                    st.pop_back();
                    gone = true;
                    break;
                }
                robot.health--;
                st.pop_back();
            }
            if (!gone && !st.empty() && st.back().direction == 'R' &&
                st.back().health > robot.health) {
                st.back().health--;
                gone = true;
            }
            if (!gone) {
                st.push_back(robot);
            }
        }
        sort(st.begin(), st.end(),
             [](const Robot& a, const Robot& b) { return a.index < b.index; });
        vector<int> result;
        for (const auto& robot : st) {
            result.push_back(robot.health);
        }
        return result;
    }
};
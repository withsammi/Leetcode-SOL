class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {

        vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int x = 0, y = 0, dir = 0;
        int maxDistSq = 0;

        unordered_set<string> obstacleSet;
        for (auto& obs : obstacles) {
            obstacleSet.insert(to_string(obs[0]) + "," + to_string(obs[1]));
        }

        for (int cmd : commands) {
            if (cmd == -2) {

                dir = (dir + 3) % 4;
            } else if (cmd == -1) {

                dir = (dir + 1) % 4;
            } else {

                for (int i = 0; i < cmd; ++i) {
                    int newX = x + directions[dir].first;
                    int newY = y + directions[dir].second;

                    if (obstacleSet.find(to_string(newX) + "," +
                                         to_string(newY)) ==
                        obstacleSet.end()) {

                        x = newX;
                        y = newY;

                        maxDistSq = max(maxDistSq, x * x + y * y);
                    } else {

                        break;
                    }
                }
            }
        }

        return maxDistSq;
    }
};

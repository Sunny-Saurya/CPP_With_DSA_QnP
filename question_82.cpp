class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int currPos = 0;
        int i = 0, j = 0;
        for (int k = 0; k < commands.size(); k++) {
            if (commands[k] == "RIGHT") {
                j++;
                if (j > n) {
                    return -1;
                }
            } else if (commands[k] == "LEFT") {
                j--;
                if (j < 0) {
                    return -1;
                }
            } else if (commands[k] == "DOWN") {
                i++;
                if (i > n) {
                    return -1;
                }
            } else if (commands[k] == "UP") {
                i--;
                if (i < 0) {
                    return -1;
                }
            }
            currPos = (i * n) + j;
        }

        return currPos;
    }
};

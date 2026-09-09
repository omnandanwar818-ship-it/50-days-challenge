class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        return 2*t+num;//why multiply by 2 Because-->moves toward each other at the same time
    }
};
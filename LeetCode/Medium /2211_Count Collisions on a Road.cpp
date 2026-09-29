class Solution {
public:
    int countCollisions(string directions) {
        int left = 0;
        int right = directions.size() - 1;
        int collision = 0;

        while(left <= right && directions[left] == 'L') {
            left++;
        }

        while(right >= left && directions[right] == 'R') {
            right--;
        }

        for(int i = left; i <= right; i++) {
            if(directions[i] != 'S') {
                collision++;
            }
        }

        return collision;
    }
};

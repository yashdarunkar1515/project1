class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int currentalt=0;
        int maxalt=0;
        for(int i=0;i<gain.size();i++){
            currentalt+=gain[i];
            maxalt=max(currentalt,maxalt);
        }
        return maxalt;
    }
};

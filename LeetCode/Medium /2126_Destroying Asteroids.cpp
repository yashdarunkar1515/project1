class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& ast) {
        sort(ast.begin(), ast.end());

        long long total = mass;

        for(int i = 0; i < ast.size(); i++) {
            if(total < ast[i]) {
                return false;
            }

            total += ast[i];
        }

        return true;
    }
};

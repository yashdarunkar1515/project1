class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {

        sort(deck.begin(), deck.end());

        queue<int> q;

        for(int i = 0; i < deck.size(); i++)
        {
            q.push(i);
        }

        vector<int> ans(deck.size());

        int i = 0;

        while(!q.empty())
        {
            int pos = q.front();
            q.pop();

            ans[pos] = deck[i];
            i++;

            if(!q.empty())
            {
                q.push(q.front());
                q.pop();
            }
        }

        return ans;
    }
};

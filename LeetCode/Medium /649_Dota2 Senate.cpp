class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> r,d;
        int n=senate.size();

        for(int i=0;i<n;i++)
        {
            if(senate[i]=='R')r.push(i);
            if(senate[i]=='D')d.push(i);
        }

        while(r.size()>0 && d.size()>0)
        {
            int r_ind=r.front();
            int d_ind=d.front();

            r.pop();
            d.pop();

            if(r_ind < d_ind)
            {
                r.push(r_ind+n);
            }

            if(r_ind > d_ind)
            {
                d.push(d_ind+n);
            }

        }

        if(r.size() > d.size())
        {
            return "Radiant";
        }
        else
        {
            return "Dire";
        }

    }
};

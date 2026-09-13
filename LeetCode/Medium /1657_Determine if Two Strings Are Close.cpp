class Solution {
public:
    bool closeStrings(string word1, string word2) {

        if(word1.size()!=word2.size())
        {
           return false;
        }
        map<char, int>freq1;
        map<char, int>freq2;

        for(int i=0;i<word1.size();i++)
        {
            freq1[word1[i]]++;
        }
         for(int i=0;i<word2.size();i++)
        {
            freq2[word2[i]]++;
        }
        
        for(auto x : freq1)
        {
           if(freq2.find(x.first)==freq2.end())
           {
             return false;
           }
        }
       for(auto x : freq2)
        {
           if(freq1.find(x.first)==freq1.end())
           {
             return false;
           }
        }
        vector<int>f1;
        vector<int>f2;

        for(auto x : freq1)
        {
             f1.push_back(x.second);
        }
        for(auto x : freq2)
        {
             f2.push_back(x.second);
        }

        sort(f1.begin(),f1.end());
        sort(f2.begin(),f2.end());

        return f1==f2;


    }
};

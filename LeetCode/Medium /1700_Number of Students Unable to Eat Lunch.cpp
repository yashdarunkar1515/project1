class Solution {
public:
    int countStudents(vector<int>& stud, vector<int>& sandwich)
    {
       long zero=0, one=0;

       for(long x : stud)
       {
          if(x==0)
          {
            zero++;
          }
          else
          {
            one++;
          }
       }

       for(long x : sandwich)
       {
          if(x==0)
          {
             if(zero==0)
             {
                return one;
             } 
          zero--;
          }
          else
          {
            if(one==0)
            {
               return zero;
            }
          one--;
          }
       }
return 0;
    }
};

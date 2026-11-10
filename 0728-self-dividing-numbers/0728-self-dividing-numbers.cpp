class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int>res;
        bool condition = true;
        for(int i=left;i<=right;i++)
        {
            int n = i;
            int num = i;
            while(n>0)
            {
                int d = n%10;
                if(d==0)
                {
                    condition = false;
                    break;
                }
                if(d!=0 && num%d!=0) 
                {
                    condition = false;
                    break;
                } 
                n=n/10;
            } 
            if(condition==true )res.push_back(num);
            condition = true;
        }
        return res;
    }
};
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        std::vector<string> result;
        for(int i=0;i<n;i++)
        {
            if(!((i+1) %15)) result.push_back("FizzBuzz");
            else if(!((i+1) %5)) result.push_back("Buzz");
            else if(!((i+1) %3)) result.push_back("Fizz");
            else result.push_back(to_string(i+1));
        }
        return result;
    }
};
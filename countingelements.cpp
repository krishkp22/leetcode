class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_map<int,int> array;
        for(int a: arr)
        {
            if(array.find(a)!=array.end())
            {
                array[a]++;
            }
            else
            {
                array[a]=1;
            }
        }
        int result=0;
        for(auto n: array)
        {
            if(array.find(n.first+1)!=array.end())
            {
                result=result+n.second;
            }
        }
        return result;
    }
};

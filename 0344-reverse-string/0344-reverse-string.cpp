class Solution {
public:
    void reverseString(vector<char>& string) {
        int str=0;
        int  end=string.size()-1;
        while(str<=end){
            swap(string[str],string[end]);
            str++;
            end--;
        }
    }
};
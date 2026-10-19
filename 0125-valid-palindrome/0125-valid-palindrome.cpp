class Solution {
public:
bool isalphanum(char ch){
 if(ch>='0' && ch<='9' || (tolower(ch)>='a' && tolower(ch)<='z')){
    return true;
 }
 return false;
}
    bool isPalindrome(string s) {
        int str=0;
        int end=s.length()-1;
        while(str<=end){
        if( str<end && !isalphanum(s[str])){
            str++;
            continue;
        }
        if( str<end &&!isalphanum(s[end])){
            end--;
            continue;
        }
        if(tolower(s[str])!=tolower(s[end])){
            return false;
        }
        str++;
        end--;
        }
        return true;
    }
};

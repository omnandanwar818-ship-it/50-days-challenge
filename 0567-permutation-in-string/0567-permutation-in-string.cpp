class Solution {
public:
bool istrue(int freq1[],int freq2[]){
    for(int i=0; i<26; i++){
        if(freq1[i]!=freq2[i]){
            return false;
        }
    }
      return true;
}
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        //step-1---> find frequncy of s1.
        for(int i=0; i<s1.length(); i++){
            freq[s1[i]-'a']++;
        }
        // step-2--->making window
        int windowsize=s1.length();//window size equal to s1 size

        for(int i=0; i<s2.length(); i++){//s2 per loop chlega
        int windoidx=0,idx=i;//make new window intialize size and index
        int windofreq[26]={0};//find the frequency of window
        while(windoidx<windowsize && idx<s2.length()){//check
           windofreq[s2[idx]-'a']++;
           windoidx++,idx++;
        }
  if(istrue(freq,windofreq)){//compare both frequency
    return true;
  }
        }
        return false;
    }
};
class Solution {
public:


bool isValid(vector<int>&position,int n,int M,int maxallocated){//bool me 4 varible
    int balls=1,emptybasket=position[0];
 for(int i=1; i<n; i++){
    if(position[i]-emptybasket>=maxallocated){
        emptybasket=position[i];
        balls++;
    }
    if(balls==M){
        return true;
    }
 }
 return false;
}
int maxDistance(vector<int>&position,int M){//int me 3 variable
    //n=empty basket,m=balls distributed in basket
    //sort the array 
    int n=position.size();
    sort(position.begin(),position.end());
    int str=0,end=position[n-1]-position[0],ans=-1; 
    while(str<=end){
        int mid=str+(end-str)/2;
        if(isValid(position,n,M,mid)){
            ans=mid;
            str=mid+1;
        }else{
            end=mid-1;
        }
    }
    return ans;
}

};

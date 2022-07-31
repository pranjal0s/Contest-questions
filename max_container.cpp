https://leetcode.com/problems/container-with-most-water/submissions/

class Solution {
public:
    int maxArea(vector<int>& height) {
     int l,r,res=0;
        l=0;
        r=height.size()-1;
    
    while(l < r){
        int h1=height[l];
        int h2=height[r];
        
        int min_h;
        if(h1<h2){
            min_h=h1;
        }
        else{
            min_h=h2;
        }
        
        int len=r-l;
        int current_area=len*min_h;
        
        if(current_area>res)
            res=current_area;
        
        if(h1 < h2){
            l++;
        }else {
            r--;
        }
        
    }
    return res;   
    }
};

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int r=heights.size()-1;
        int area=0;

        while(l<r){
            int h=min(heights[l],heights[r]);
            int w=r-l;
            int a=h*w;

            area=max(a,area);

            if(heights[l]<heights[r]){
                l++;
            }
            else{
                r--;
            }

        }

        return area;
    }
};

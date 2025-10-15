class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
          int n = heights.size();
        
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (heights[i] < heights[j]) {
                    
                    int tempHeight = heights[i];
                    heights[i] = heights[j];
                    heights[j] = tempHeight;

                   
                    string tempName = names[i];
                    names[i] = names[j];
                    names[j] = tempName;
                }
            }
        }

        return names;
    }
};
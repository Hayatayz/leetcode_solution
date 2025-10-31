class Solution {
public:
    bool hasSameDigits(string s) {
        int n = s.size();
        while(n > 2){
            string next = "";
            for(int j = 0; j < n - 1; j++){
                int sum = (s[j] - '0' + s[j+1] - '0') % 10;
                next += (sum + '0'); 
            }
            s = next;       
            n = s.size();   
        }
        
        return s[0] == s[1];
    }
};

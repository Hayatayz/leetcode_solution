class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        int open_count = 0;
        int close_count = 0;
        string current = "";
        recursion(n, ans, close_count, open_count, current);
        return ans;
    }
    void recursion(int n, vector<string>& ans, int close_count, int open_count, string current){
        if(current.length() == 2*n){
            ans.push_back(current);
            return;
        }
        if(open_count < n){
            recursion(n, ans, close_count, open_count+1, current+'(');
        }
        if(close_count < open_count){
            recursion(n, ans, close_count+1, open_count, current+')');
        }
    }
};
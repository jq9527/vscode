#include"JQ_LIB.h"

#ifndef BACKSTACK
#define BACKSTACK
class back_stack1{
public:
    void backstack (vector<vector<int>> & results,vector<int> &result, const vector<int> & nums,int n ){

         if(n==nums.size()){
            results.push_back(result);
            return;
        }

        result.push_back(nums[n]);
        backstack(results,result,nums,n+1);
        result.pop_back();
        backstack(results,result,nums,n+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> results;
        vector<int> result;
        backstack(results,result,nums,0);
        return results;
    }
};

class back_stack2 {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> combinations;
        if (digits.empty()) {
            return combinations;
        }
        unordered_map<char, string> phoneMap{
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        string combination;
        backtrack(combinations, phoneMap, digits, 0, combination);
        return combinations;
    }

    void backtrack(vector<string>& combinations, const unordered_map<char, string>& phoneMap, const string& digits, int index, string& combination) {
        if (index == digits.length()) {
            combinations.push_back(combination);
        } else {
            char digit = digits[index];
            const string& letters = phoneMap.at(digit);
            for (const char& letter: letters) {
                combination.push_back(letter);
                backtrack(combinations, phoneMap, digits, index + 1, combination);
                combination.pop_back();
            }
        }
    }
};

class back_stack3 {
public:
    vector<int> temp;
    vector<vector<int>> ans;

    void dfs(int cur, int n, int k) {
        if (temp.size() + (n - cur + 1) < k || temp.size() > k) {
            return;
        }
        if (temp.size() == k ) {
            ans.push_back(temp);
            return;
        }
        temp.push_back(cur);
        dfs(cur + 1, n, k);
        temp.pop_back();
        dfs(cur + 1, n, k);
    }

    vector<vector<int>> combinationSum3(int k) {
        dfs(1, 9, k);
        return ans;
    }
};


#endif
#include <vector>
#include <string>
#include <sstream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
        // Memoization table to store results for subproblems
        unordered_map<string, vector<int>> memo;

        // Call the helper function with memo
        return diffWaysToComputeHelper(expression, memo);
    }

private:
    vector<int> diffWaysToComputeHelper(string expression, unordered_map<string, vector<int>>& memo) {
        // If the expression is already computed, return the result from memo
        if (memo.count(expression)) {
            return memo[expression];
        }

        vector<int> results;
        // Base case: If the expression is a single number, convert it to integer and return
        if (expression.find('+') == string::npos &&
            expression.find('-') == string::npos &&
            expression.find('*') == string::npos) {
            results.push_back(stoi(expression));
            return results;
        }

        // Recursively compute results for all possible splits at operators
        for (int i = 0; i < expression.size(); i++) {
            char op = expression[i];
            if (op == '+' || op == '-' || op == '*') {
                // Divide expression into left and right parts
                vector<int> left = diffWaysToComputeHelper(expression.substr(0, i), memo);
                vector<int> right = diffWaysToComputeHelper(expression.substr(i + 1), memo);

                // Compute all possible combinations of left and right results
                for (int leftVal : left) {
                    for (int rightVal : right) {
                        switch (op) {
                            case '+': results.push_back(leftVal + rightVal); break;
                            case '-': results.push_back(leftVal - rightVal); break;
                            case '*': results.push_back(leftVal * rightVal); break;
                        }
                    }
                }
            }
        }

        // Store the result in memo before returning
        memo[expression] = results;
        return results;
    }
};

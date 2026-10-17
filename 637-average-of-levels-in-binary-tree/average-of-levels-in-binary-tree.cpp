/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        vector<int> level;

        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);

        double sum = 0;
        double count=0;

        while (!q.empty()) {
            TreeNode* curr = q.front();
            q.pop();
            
            
            if (curr == NULL) {
                double avg = sum / count;
                ans.push_back(avg);
                sum = 0;
                count = 0;
                level.clear();
                if (q.empty()) {
                    break;
                } else {
                    q.push(NULL);
                }
            } else {
                sum+=curr->val;
                count++;
                level.push_back(curr->val);
                if (curr->left != NULL) {
                    q.push(curr->left);
                }
                if (curr->right != NULL) {
                    q.push(curr->right);
                }
            }
        }
        return ans;
    }
};
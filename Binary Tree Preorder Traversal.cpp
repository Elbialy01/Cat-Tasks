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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>v;
        stack<TreeNode *>s;
        TreeNode *m=root;
        
        if(m){
            do{
        while(m){
           v.push_back(m->val);
            s.push(m);
            m=m->left;
        }
            if(!s.empty()){
                TreeNode *l=s.top();
                s.pop();
                m=l->right;       
            }
            }
            while(!s.empty()||m);
        }
        
        return v;
        
    }
};

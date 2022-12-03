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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        stack<TreeNode *>s;
        TreeNode *m=root;
        
        if(m){
            do{
        while(m!=NULL){
            s.push(m);
            m=m->left;
        }
            if(!s.empty()){
                TreeNode *l=s.top();
                s.pop();
                int k=l->val;
                v.push_back(k);
                m=l->right;       
            }
            }
            while(!s.empty()||m);
        }
        
        return v;
        
    }
};

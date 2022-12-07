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
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum =0;
        stack<TreeNode *>s;
        TreeNode *d=root;
        if(d){
            do{
            while(d){
                s.push(d);
               d=d->left;
            }
            if(!s.empty()){
                TreeNode *p=s.top();
                s.pop();
                if(p->val>=low&&p->val<=high)
                 sum+=p->val;
                d=p->right;

            }
            }while(!s.empty()||d);
        }
        return sum;
        
    }
};

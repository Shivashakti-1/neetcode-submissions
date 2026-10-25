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
    vector<int> rightSideView(TreeNode* root) {
     vector<int> res;

     if(root==nullptr)
     {
        return res;
     }   

     queue<TreeNode*> q;
     q.push(root);

     while(!q.empty())
     {
        int l = q.size();
        queue<int> currlev;

        for(int i=0;i<l;i++)
        {
          TreeNode* x = q.front();
          q.pop();

          currlev.push(x->val);
          if(x->left!=nullptr)
          {
            q.push(x->left);
          }
          if(x->right!=nullptr)
          {
            q.push(x->right);
          }
        }
        res.push_back(currlev.back());
     }
     return res;
    }
};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
      int maxdepth(TreeNode *r) //helps to find the max depth 
    {
        if (r == NULL)
            return 0;

        return max(maxdepth(r->left), maxdepth(r->right)) + 1;
    }
    void dia_help(TreeNode* root, int &dia) 
    {
          int left = 0, right = 0;
        if(root==NULL)
            return;
        if (root->left)
            left = maxdepth(root->left);
        if (root->right)
            right = maxdepth(root->right);
        dia = max(dia, left+right);
        dia_help(root->left, dia);
        dia_help(root->right, dia);
    }
    int diameterOfBinaryTree(TreeNode* root) 
    {
        int dia=0;
        dia_help(root,dia);
        return dia;
    }
};

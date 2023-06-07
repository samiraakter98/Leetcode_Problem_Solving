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
     int getDepth(TreeNode* root)
    {
        if(root == NULL) return 0;
        else
        {
            int left_len = 1+getDepth(root->left);
            int right_len = 1+getDepth(root->right);
            return max(left_len,right_len);
        }
    }
    vector<int> levelTraverse(TreeNode* node, int level, vector<int> vec)
    {
        if(node == NULL) return vec;
        if(level ==1 )
        {
            vec.push_back(node->val);
            return vec;
        }
        else
        {
            vec = levelTraverse(node->left, level - 1, vec);
            vec = levelTraverse(node->right, level - 1, vec);
            return vec;
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
       
        int level =getDepth(root);
        vector<vector<int>> vec(level);        
        for(int i=1; i<=level; i++)
        {
            vector<int> temp;
            temp = levelTraverse(root, i, temp);
            vec[i-1] = (temp);
        }
       return vec;
    }
};

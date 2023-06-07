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
    int getHeight(TreeNode* node)
    {
        if(node == NULL)
            return 0;
        else
        {
            int left_height = getHeight(node->left);
            int right_height = getHeight(node->right);
            
            if(left_height > right_height)
                return left_height+1;
            else return right_height+1;
        }
    }
    vector<int> levelTraverse(TreeNode* node, int level, vector<int> vec)
    {
        if(node == NULL)
            return vec;
        if(level == 1)
        {
            
            vec.push_back(node->val);
             return vec;
        }
            
        else 
        {
            vec = levelTraverse(node->left, level-1, vec);
            vec = levelTraverse(node->right, level-1, vec);
            return vec;
        }
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
       queue<TreeNode*> q;
        // q = root;
        int h= getHeight(root);
        for(int i =1; i<=h; i++ )
        {
             vector<int> temp;
            temp = levelTraverse(root, i, temp);
            if(temp.size() > 0)
                result.push_back(temp[temp.size() -1]);
        }
       
        return result;
    }
};

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
    vector<vector<int>> levelNodes(TreeNode* root, int level,  vector<vector<int>> vec)
    {
        if(root == NULL) return vec;
        else
        {
            vec = levelNodes(root->left, level-1, vec);
            vec = levelNodes(root->right, level-1, vec);
            vec[level].push_back(root->val);
            return vec;
           
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
       
        int level =getDepth(root);
        vector<vector<int>> vec(level);        
        // vec = levelNodes(root,level-1,vec);        
        // reverse(vec.begin(), vec.end()); 
        int i=0;
        queue<TreeNode*> p;
        p.push(root);
        while( ! p.empty() && root!=NULL)
        {
            int sz=p.size();
            for(int j=0; j<sz;j++)
            {
                TreeNode* u= p.front();
                p.pop();
                vec[i].push_back(u->val);
                // cout<<u->left->val<<endl;
                // cout<<u->right->val<<endl;
                if(u->left != NULL)
                    p.push(u->left);
                if(u->right != NULL)
                    p.push(u->right);
            }
            i++;
                
        }
       return vec;
    }
};

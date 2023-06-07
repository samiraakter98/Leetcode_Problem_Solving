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
        if(node == NULL) return 0;
        else
        {
            int l_h = getHeight(node->left);
            int r_h =  getHeight(node->right);
            if(l_h > r_h) return l_h+1;
            else return r_h + 1;
        }
    }
    vector<int> levelTraverse(TreeNode* node, int level, vector<int> vec)
    {
        if(node == NULL) return vec;
        if(level == 1) {
            vec.push_back(node->val);
            return vec;
        }
        else
        {
            vec =  levelTraverse(node->left, level -1, vec);
            vec = levelTraverse(node->right, level -1, vec);
            return vec;
        }
    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> result;
        int h =  getHeight(root);
        for(int i=1; i<=h; i++)
        {
            vector<int> temp;
            temp = levelTraverse(root, i, temp);
            double sum = 0.0;
            if(temp.size()>0)
            {
                for(int j=0; j< temp.size(); j++)
                {
                    sum= sum + temp[j];
                }
                double avg = sum/temp.size();
                result.push_back(avg);
            }   
        }
        return result;
    }
};

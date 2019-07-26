/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int maxlevel;
void getres(TreeNode *A, vector<int> &val, vector <int> &level,int currlevel)
{
    if(A == NULL)
    {
        return;
    }
    val.push_back(A->val);
    level.push_back(currlevel);
    if(currlevel > maxlevel)
        maxlevel = currlevel;
    getres(A->left,val,level,currlevel + 1);
    getres(A->right,val,level,currlevel + 1);
}
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    maxlevel = 0;
    vector<int> val;
    vector<int> level;
 //   int currlevel  0;
    getres(A,val,level,1);
    vector<vector<int> > res(maxlevel,vector<int>());
    
    for(int i = 0 ; i < val.size();i++)
    {
        if(level[i] %2 == 1)
        {
            res[level[i] - 1].push_back(val[i]);
        }
        else
        {
            res[level[i] - 1].insert(res[level[i] - 1].begin(),val[i]);
        }
        //res[level[i] - 1].push_back(val[i]);
    }
    return res;
}


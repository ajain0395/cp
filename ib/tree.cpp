#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Definition for binary tree
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
vector<int> inorderTraversal(TreeNode* A) {
    stack <TreeNode*> stk;
    vector <int> res;
    stk.push(A);
    while(1)
    {
        if(stk.empty())
        {
            break;
        }
        if(stk.top()->left != NULL)
        {
            A = stk.top();
            stk.push(stk.top()->left);
            A->left = NULL;
        }
     else
     {        
         if(!stk.empty())
          {
                A = stk.top();
                res.push_back(A->val);
                A = A->right;
                stk.pop();
                if(A != NULL)
                {
                    stk.push(A);
                }
            }
    }

    }
    return res;
}
vector<int> preorderTraversal(TreeNode* A) {
    stack <TreeNode*> stk;
    vector <int> res;
    if(A == NULL)
    {
        return res;
    }
    stk.push(A);

    res.push_back(stk.top()->val);
    while(1)
    {
        if(stk.empty())
        {
            break;
        }
        if(stk.top()->left != NULL)
        {
            A = stk.top();
            stk.push(stk.top()->left);
    res.push_back(stk.top()->val);
            A->left = NULL;
        }
     else
     {        
         if(!stk.empty())
          {
                A = stk.top();
                A = A->right;
                stk.pop();
                if(A != NULL)
                {
                    stk.push(A);
    res.push_back(stk.top()->val);
                }
            }
    }

    }
    return res;
}
TreeNode* createbst(vector<int> &A,int low,int high)
{
    TreeNode *root = NULL;
    if(low >high)
    {
        return root;
    }
    else
    {
        root = (TreeNode*) malloc(sizeof(TreeNode));
        int mid = (low+high)/2;
        root->val = A[mid];
        root->left = createbst(A,low,mid-1);
        root->right = createbst(A,mid+1,high);
    }
    return root;
}

int main()
{
    TreeNode *A1 = (TreeNode*) malloc(sizeof(TreeNode));
    TreeNode *A2 = (TreeNode*) malloc(sizeof(TreeNode));
    TreeNode *A3 = (TreeNode*) malloc(sizeof(TreeNode));
    TreeNode *A4 = (TreeNode*) malloc(sizeof(TreeNode));
    TreeNode *A5 = (TreeNode*) malloc(sizeof(TreeNode));
    TreeNode *A6 = (TreeNode*) malloc(sizeof(TreeNode));
    TreeNode *A7 = (TreeNode*) malloc(sizeof(TreeNode));
    A1->val = 1;
    A2->val = 2;
    A3->val = 3;
    A4->val = 4;
    A5->val = 5;
    A6->val = 6;
    A7->val = 7;
    A7->left = NULL;
    A7->right = NULL;

    A6->left = NULL;
    A6->right = NULL;

    A5->left = NULL;
    A5->right = NULL;

    A4->left = NULL;
    A4->right = NULL;


    A1->left = A2;
    A1->right = A3;

    A2->left = A4;
    A2->right = A5;

    A3->left = A6;
    A3->right = A7;

    vector <int> res;
    res = inorderTraversal(A1);
    cout<<"Inorder: ";
//    res = preorderTraversal(A1);
//    cout<<"Preorder: ";
//    res = postorderTraversal(A1);
//    cout<<"Postorder: ";

    for(int i = 0 ; i < res.size();i++)
    {
        cout<<res[i]<<" ";
    }
        cout<<endl;
   sort(res.begin(),res.end());
   cout<<"Sorted list"<<endl;
    for(int i = 0 ; i < res.size();i++)
    {
        cout<<res[i]<<" ";
    }
        cout<<endl;
    TreeNode *newroot = createbst(res,0,res.size()-1);
    vector <int> res2 = inorderTraversal(newroot);

    cout<<"inorder: ";

    for(int i = 0 ; i < res2.size();i++)
    {
        cout<<res2[i]<<" ";
    }
        cout<<endl;
}

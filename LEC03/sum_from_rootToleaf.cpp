void preorder(TreeNode* root,int sumsofar){
    vector<int> ans;
    if(root == NULL) return ;
    sumsofar += root->val;
    if(root->left == NULL && root->right == NULL){
        ans.push_back(sumsofar);
        return;
    }
    preorder(root->left,sumsofar);
    preorder(root->right,sumsofar);
}



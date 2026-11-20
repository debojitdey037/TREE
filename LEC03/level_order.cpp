vector<int> ans;
vector<int> Levelorder(TreeNode* root){
       if(root == NULL){
        return ans;
       }

       queue<TreeNode*> q;
       q.push(root);

       while(!q.empty()){
           int size = q.size();
           vector<int> levels;
           for(int i = 0;i<size;i++){
               TreeNode* temp = q.front();
               q.pop();

               int i = 0;
               q.push(temp->val);

               if(temp->left){
                  q.push(temp->left);
               }
               if(temp->right){
                  q.push(temp->right);
               }
           }
           
       }
}
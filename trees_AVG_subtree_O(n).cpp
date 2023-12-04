class Solution {
public:
//this code is 0(n) just because using pair
    int count=0;
    pair<int,int> postorder(TreeNode*root){
        pair<int,int>p;
        if(root==NULL) return p =make_pair(0,-1);
        pair<int,int> l = postorder(root->left);
        pair<int,int> h = postorder(root->right);
        int sum=root->val,c=1;
        if(l.second!=-1){
            sum+=l.first;
            c+=l.second;
        }
        if(h.second!=-1){
            sum+=h.first;
            c+=h.second;
        }
        if(sum/c == root->val) count++;
        return p= make_pair(sum,c);   
    }


    int averageOfSubtree(TreeNode* root) {
        postorder(root);
        return count;
    }
};

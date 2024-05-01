// class solution{
//     public:
//       bool symmetric(TreeNode*rleft,TreeNode*lright){
//         if(rleft==NULL || lright==NULL){
//             return true;
//         }
//         if(rleft->val!=lright->val){
//             return false;

//         }
//         return(rleft->left,lright->right)&&(rleft->right,lright->left);
//     }
//     bool symmetric(TreeNode*root){
//         if(root==NUll){
//             return;
//         }
//         return symmetric(root->left,root->right);
//     }

// };
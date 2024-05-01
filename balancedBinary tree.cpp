// class solution{
//     public:

//     bool isBalanced(Tree*Node){
//         if(root==Null){
//             return true;
//         }
//         if(Height(root)==-1){
//             return false;
//         }
//         return true;
//     }
//     int Height(Tree*Node){
//         if(root==Null){
//             return;
//         }
//         int leftheight= Height(root->left);
//         int rightheight =Height(root->right);
//         if(leftheight==-1 || rightheight==-1 || abs(leftheight-rightheight)>1){
//             return -1;
//         } 
//         return max(leftheight,rightheight)+1;
//     }
// };
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    
    void recursion(Node *root, int level, vector<int>&res){
        if(root == nullptr)
        return;
        
        if(level == res.size()){
            res.push_back(root->data);
        }
        
        recursion(root->right, level+1, res);
        recursion(root->left, level+1, res);
    }
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int>res;
       recursion(root, 0 , res);
       return res;
    }
};

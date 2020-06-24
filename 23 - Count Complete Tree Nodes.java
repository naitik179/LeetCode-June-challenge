class Solution {
    ArrayList<TreeNode>a=new ArrayList<TreeNode>();
    
    void inorder(TreeNode root){
        
        if(root == null){
            return;
        }
        inorder(root.left);
        
        a.add(root);
        
        inorder(root.right);
    }
    public int countNodes(TreeNode root) {
        
        if(root == null){
            return 0;
        }
        inorder(root);
        
        return a.size();
        
    }
}

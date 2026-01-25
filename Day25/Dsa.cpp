/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
vector<vector<int>> getTreeTraversal(TreeNode *root) {
    vector<int> inorder, preorder, postorder;

    function<void(TreeNode*)> traverse = [&](TreeNode* node) {
        if (node == NULL) return;

        // Pre-Order
        preorder.push_back(node->data);

        traverse(node->left);

        // In-Order
        inorder.push_back(node->data);

        traverse(node->right);

        // Post-Order
        postorder.push_back(node->data);
    };

    traverse(root);

    return {inorder, preorder, postorder};
}

#include <iostream>
using namespace std;
// Definition for a binary tree node.
struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int x) : value(x), left(NULL), right(NULL) {}
};
// Function to find the product of all values in the binary tree.
long long productOfTree(TreeNode* root) {
    // Base case: If the node is NULL, return 1 (multiplicative identity)
    if (root == NULL) {
        return 1;
    }
    
    // Recursive case: Multiply the current node's value with the product of the left and right subtrees
    long long leftProduct = productOfTree(root->left);
    long long rightProduct = productOfTree(root->right);
    
    return root->value * leftProduct * rightProduct;
}

int main() {
    // Creating a simple binary tree
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(3);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(6);
    
    // Finding the product of all values in the binary tree
    long long result = productOfTree(root);
    cout << "Product of all values in the binary tree: " << result << endl;
    return 0;
}

                                    //  2 Solution

#include <iostream>
#include <climits> // For INT_MAX
using namespace std;
// Definition for a binary tree node.
struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int x) : value(x), left(NULL), right(NULL) {}
};
// Function to find the minimum value in the binary tree.
int findMinValue(TreeNode* root) {
    // Base case: If the node is NULL, return a large value (effectively infinity)
    if (root == NULL) {
        return INT_MAX;
    }
    
    // Recursive case: Find the minimum value in the left and right subtrees
    int leftMin = findMinValue(root->left);
    int rightMin = findMinValue(root->right);
    
    // Return the minimum of the current node's value, leftMin, and rightMin
    return min(root->value, min(leftMin, rightMin));
}
int main() {
    // Creating a simple binary tree
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(15);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(8);
    root->right->right = new TreeNode(12);
    
    // Finding the minimum value in the binary tree
    int minValue = findMinValue(root);
    cout << "Minimum value in the binary tree: " << minValue << endl;
    return 0;
}

//     3 Solution   =>   https://leetcode.com/problems/balanced-binary-tree/submissions/1351786943/

//     4 Solution   =>   https://leetcode.com/problems/symmetric-tree/submissions/1351790567/
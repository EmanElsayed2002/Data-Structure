# Binary Tree
## Binary Tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child and the left node always less than the Root node and the right node always greater than the Root node.

[![Binary Tree](https://upload.wikimedia.org/wikipedia/commons/f/f7/Binary_tree.svg)](https://en.wikipedia.org/wiki/Binary_tree#/media/File:Binary_tree.svg)

## Binary Tree Travesal
- Inorder Traversal
    - left -> root -> right
- Preorder Traversal
    - root -> left -> right
- Postorder Traversal
    - left -> right -> root

## Why Binary Search Tree
because it is easy to search for a value in a binary search tree.
when we search for a value in a binary search tree, we start at the root node and compare the value we are searching for with the value of the root node. If the value we are searching for is less than the value of the root node, we search the left subtree. If the value we are searching for is greater than the value of the root node, we search the right subtree. If the value we are searching for is equal to the value of the root node, we have found the value we are searching for. If we reach a leaf node, we have not found the value we are searching for. So we search in O(log n) time.

## Binary Search Tree Operations
- Insertion
- Deletion
- Searching
- Traversal

## Insertion
- Insertion in a Binary Search Tree is done in O(log n) time.
- if the value we are inserting is less than the value of the root node, we insert the value in the left subtree. If the value we are inserting is greater than the value of the root node, we insert the value in the right subtree.
- And in Insertion ,we have two cases
    - Case 1: If the tree is empty, we create a new node and make it the root node.
    - Case 2: If the tree is not empty, we traverse the tree to find the correct position for the new node.
- ```cpp
   BST *Insert(BST *root, int data)
    {
        if (root == NULL)
        {
            BST *newnode = new BST(data);
            root = newnode;
        }
        else if (data <= root->data)
        {
            root->left = Insert(root->left, data);
        }
        else
        {
            root->right = Insert(root->right, data);
        }
        return root;
    }
    ```

## Deletion
- Deletion in a Binary Search Tree is done in O(log n) time.
- There are three cases in deletion
    - Case 1: If the node to be deleted has no children, we simply delete the node.
    - Case 2: If the node to be deleted has one child, we replace the node with its child.
    - Case 3: If the node to be deleted has two children, we replace the node with the minimum value in the right subtree or with the maximum value in the left subtree.
- ```cpp
    BST *Delete(BST *root, int data)  // This function return pointer to the root node
    {
        if (root == NULL)
            return root;
        else if (data < root->data)
            root->left = Delete(root->left, data);
        else if (data > root->data)
            root->right = Delete(root->right, data);
        else
        {
            if (root->left == NULL && root->right == NULL)
            {
                delete root;
                root = NULL;
            }
            else if (root->left == NULL)
            {
                BST *temp = root;
                root = root->right;
                delete temp;
            }
            else if (root->right == NULL)
            {
                BST *temp = root;
                root = root->left;
                delete temp;
            }
            else
            {
                BST *temp = FindMin(root->right); // Find the minimum value in the right subtree and replace the node with it or Find the maximum value in the left subtree and replace the node with it
                root->data = temp->data;
                root->right = Delete(root->right, temp->data);
            }
        }
        return root;
    }
    ```

## Searching
- Searching in a Binary Search Tree is done in O(log n) time.
- if the value we are searching for is less than the value of the root node, we search the left subtree. If the value we are searching for is greater than the value of the root node, we search the right subtree. If the value we are searching for is equal to the value of the root node, we have found the value we are searching for. If we reach a leaf node, we have not found the value we are searching for.
- we have two cases in searching
    - Case 1: If the tree is empty, we return false.
    - Case 2: If the tree is not empty, we traverse the tree to find the value we are searching for.
- ```cpp
    bool Search(BST *root, int data)
    {
        if (root == NULL)
            return false;
        else if (root->data == data)
            return true;
        else if (data <= root->data)
            return Search(root->left, data);
        else
            return Search(root->right, data);
    }
    ```

## Traversal
- Traversal in a Binary Search Tree is done in O(n) time.
- There are three types of traversal
    - Inorder Traversal
    - ```cpp
        void Inorder(BST *root)
        {
            if (root == NULL)
                return;
            Inorder(root->left);
            cout << root->data << " ";
            Inorder(root->right);
        }
        ```
    - Preorder Traversal
    - ```cpp
        void Preorder(BST *root) // root->left->right
        {
        if (root == NULL)
        {
            return;
        }
        cout << root->data << " ";
        Preorder(root->left);
        Preorder(root->right);
       }
      ```
    - Postorder Traversal
    - ```cpp
        void Postorder(BST *root) // left->right->root
        {
            if (root == NULL)
            {
                return;
            }
            Postorder(root->left);
            Postorder(root->right);
            cout << root->data << " ";
        }
        ```

    







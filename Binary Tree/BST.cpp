#include <bits/stdc++.h>
using namespace std;

struct BST
{
    int data;
    BST *left;
    BST *right;
    BST(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

class BinarySearchTree
{
public:
    BST *root;
    BinarySearchTree()
    {
        root = NULL;
    }
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
    void Insert(int data)
    {
        root = Insert(root, data);
    }

    BST *Delete(BST *root, int data)
    {
        if (root == NULL)
        {
            return root;
        }
        else if (data < root->data)
        {
            root->left = Delete(root->left, data);
        }
        else if (data > root->data)
        {
            root->right = Delete(root->right, data);
        }
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
                BST *temp = FindMin(root->right); // FindMin(root->right) or FindMax(root->left)
                root->data = temp->data;
                root->right = Delete(root->right, temp->data);
            }
        }
        return root;
    }
    void Delete(int data)
    {
        root = Delete(root, data);
    }

    BST *FindMin(BST *root)
    {
        while (root->left != NULL)
        {
            root = root->left;
        }
        return root;
    }
    BST *FindMax(BST *root)
    {
        while (root->right != NULL)
        {
            root = root->right;
        }
        return root;
    }
    BST *Search(BST *root, int data)
    {
        if (root == NULL)
        {
            return root;
        }
        else if (data < root->data)
        {
            return Search(root->left, data);
        }
        else if (data > root->data)
        {
            return Search(root->right, data);
        }

        return root;
    }
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
    void Preorder()
    {
        Preorder(root);
    }
    void Inorder(BST *root)
    {
        if (root == NULL)
        {
            return;
        }
        Inorder(root->left);
        cout << root->data << " ";
        Inorder(root->right);
    }
    void Inorder()
    {
        Inorder(root);
    }
    void Postorder(BST *root)
    {
        if (root == NULL)
        {
            return;
        }
        Postorder(root->left);
        Postorder(root->right);
        cout << root->data << " ";
    }
    void Postorder()
    {
        Postorder(root);
    }

    bool Search(int item)
    {
        BST *temp = Search(root, item);
        if (temp == NULL)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};

int main()
{
    BinarySearchTree bst;
    bst.Insert(10);
    bst.Insert(5);
    bst.Insert(15);
    bst.Insert(3);
    bst.Insert(7);
    bst.Insert(12);
    cout << "Preorder: ";
    bst.Postorder();
    cout << endl;
    cout << "Inorder: ";
    bst.Inorder();
    cout << endl;
    cout << "Postorder: ";
    bst.Postorder();
    cout << endl;
    bst.Delete(5);
    cout << "After deleting 5: ";
    bst.Inorder();
    cout << endl;
    bst.Postorder();
    cout << endl;
    bst.Preorder();
    cout << endl;
    cout << "Min: " << bst.FindMin(bst.root)->data << endl;
    cout << "Max: " << bst.FindMax(bst.root)->data << endl;
    cout << "Search 7: " << bst.Search(7) << endl;
    cout << "Search 5: " << bst.Search(5) << endl;

    return 0;
}

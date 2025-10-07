#include<bits/stdc++.h>

using namespace std;

struct Node
{

    int data;
    Node* left;
    Node* right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }

};

void inorder(Node* root)
{
    if(root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node* root)
{
    if(root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root)
{
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int countNodes(Node* root) {
if(root == NULL) return 0;
return 1+countNodes(root->left)+countNodes(root->right);
}

int height(Node* root) {
if(root == NULL) return 0;
int leftHeight = height(root->left);
int rightHeight = height(root->right);
return 1+max(leftHeight, rightHeight);
}

int sumOfNodes(Node* root) {
if(root == NULL) return 0;
return root->data + sumOfNodes(root->left) + sumOfNodes(root->right);
}

bool search(Node* root, int key) {
if(root == NULL) return false;
if(root->data == key) return true;
return (search(root->left, key) || search(root->right, key));
}

int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Inorder: ";
    inorder(root);
    cout << endl;
    cout <<"preorder: ";
    preorder(root);
    cout << endl;
    cout <<"PostOrder: ";
    postorder(root);
    cout << endl;
    cout << "Total Nodes: ";
    cout << countNodes(root) << endl;
    cout <<"Height: " << height(root) << endl;
    cout << "sumOfNodes: " << sumOfNodes(root) << endl;
    cout << "search: 5 " << search(root, 5) << endl;
    return 0;
}

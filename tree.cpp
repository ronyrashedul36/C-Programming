#include <iostream>
#include <queue>
#include <stack>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BinaryTree
{
public:
    Node* root;

    BinaryTree() : root(nullptr) {}

    // Depth-First Traversals (Recursive)

    void inorderRecursive(Node* node)
    {
        if (node == nullptr) return;
        inorderRecursive(node->left);
        cout << node->data << " ";
        inorderRecursive(node->right);
    }

    void preorderRecursive(Node* node)
    {
        if (node == nullptr) return;
        cout << node->data << " ";
        preorderRecursive(node->left);
        preorderRecursive(node->right);
    }

    void postorderRecursive(Node* node)
    {
        if (node == nullptr) return;
        postorderRecursive(node->left);
        postorderRecursive(node->right);
        cout << node->data << " ";
    }

    // Depth-First Traversals (Iterative)

    void inorderIterative(Node* root)
    {
        stack<Node*> s;
        Node* curr = root;

        while (curr != nullptr || !s.empty())
        {
            while (curr != nullptr)
            {
                s.push(curr);
                curr = curr->left;
            }
            curr = s.top();
            s.pop();
            cout << curr->data << " ";
            curr = curr->right;
        }
    }

    void preorderIterative(Node* root)
    {
        if (root == nullptr) return;

        stack<Node*> s;
        s.push(root);

        while (!s.empty())
        {
            Node* curr = s.top();
            s.pop();
            cout << curr->data << " ";

            if (curr->right) s.push(curr->right);
            if (curr->left) s.push(curr->left);
        }
    }

    void postorderIterative(Node* root)
    {
        if (root == nullptr) return;

        stack<Node*> s1, s2;
        s1.push(root);

        while (!s1.empty())
        {
            Node* curr = s1.top();
            s1.pop();
            s2.push(curr);

            if (curr->left) s1.push(curr->left);
            if (curr->right) s1.push(curr->right);
        }

        while (!s2.empty())
        {
            cout << s2.top()->data << " ";
            s2.pop();
        }
    }

    // Breadth-First Traversal (Level Order)

    void levelOrder(Node* root)
    {
        if (root == nullptr) return;

        queue<Node*> q;
        q.push(root);

        while (!q.empty())
        {
            Node* curr = q.front();
            q.pop();
            cout << curr->data << " ";

            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
        }
    }

    // Level order with level separation
    void levelOrderByLevel(Node* root)
    {
        if (root == nullptr) return;

        queue<Node*> q;
        q.push(root);

        while (!q.empty())
        {
            int size = q.size();
            for (int i = 0; i < size; i++)
            {
                Node* curr = q.front();
                q.pop();
                cout << curr->data << " ";

                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);
            }
            cout << endl;
        }
    }
};

int main()
{
    // Create sample tree:
    //       1
    //      / \
    //     2   3
    //    / \   \
    //   4   5   6

    BinaryTree tree;
    tree.root = new Node(1);
    tree.root->left = new Node(2);
    tree.root->right = new Node(3);
    tree.root->left->left = new Node(4);
    tree.root->left->right = new Node(5);
    tree.root->right->right = new Node(6);

    cout << "Inorder (Recursive): ";
    tree.inorderRecursive(tree.root);
    cout << endl;

    cout << "Preorder (Recursive): ";
    tree.preorderRecursive(tree.root);
    cout << endl;

    cout << "Postorder (Recursive): ";
    tree.postorderRecursive(tree.root);
    cout << endl;

    cout << "\nInorder (Iterative): ";
    tree.inorderIterative(tree.root);
    cout << endl;

    cout << "Preorder (Iterative): ";
    tree.preorderIterative(tree.root);
    cout << endl;

    cout << "Postorder (Iterative): ";
    tree.postorderIterative(tree.root);
    cout << endl;

    cout << "\nLevel Order: ";
    tree.levelOrder(tree.root);
    cout << endl;

    cout << "\nLevel Order (by level):\n";
    tree.levelOrderByLevel(tree.root);

    return 0;
}

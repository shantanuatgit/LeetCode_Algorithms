#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int key;
    node *left;
    node *right;
};

 node *newnode(int key)
{
     node* temp = new node;
    temp->key = key;
    temp->left = temp->right = NULL;
};

void printPreorder(node *node)
{
    if (node == NULL)
        return;
    cout << node->key << " ";

    printPreorder(node->left);

    printPreorder(node->right);
}

int main()
{
    class node* root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->right->left = newnode(4);
    root->right->right = newnode(5);
    root->left->left = newnode(6);
    printPreorder(root);
}

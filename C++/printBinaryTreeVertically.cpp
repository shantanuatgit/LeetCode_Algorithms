#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left,*right;
};
node *newNode(int data)
{
    node *newnode=new node();
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
}

void getverticalOrder(node *root,map<int, vector<int> >&m,int hd)
{
    if(root==NULL)
        return;
    m[hd].push_back(root->data);
    getverticalOrder(root->left,m,hd-1);
    getverticalOrder(root->right,m,hd+1);
}



void printVerticalOrder(node *root)
{
    map<int, vector<int> >m;
    int hd=0;
    getverticalOrder(root,m,hd);
    map<int, vector<int> > :: iterator it;
    for (it=m.begin(); it!=m.end(); it++)
    {
        for (int i=0; i<it->second.size(); ++i)
            cout << it->second[i] << " ";
        cout << endl;
    }
}
int main()
{
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->right = newNode(8);
    root->right->right->right = newNode(9);
    cout << "Vertical order traversal is \n";
    printVerticalOrder(root);
    return 0;
}

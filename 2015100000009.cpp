#include<iostream>
using namespace std;



      //TREE

struct Node {
    char data;
    struct Node *left;
    struct Node *right;
};
void Preorder(struct Node *root) {
    if(root == NULL) return;

    cout<<("%c ",root->data);
    Preorder(root->left);
    Preorder(root->right);
}
void Inorder(Node *root) {
    if(root == NULL) return;

    Inorder(root->left);
    cout<<("%c ",root->data);
    Inorder(root->right);
}
void Postorder(Node *root) {
    if(root == NULL) return;

    Postorder(root->left);
    Postorder(root->right);
    cout<<("%c ",root->data);
}
    Node* Insert(Node *root,char data) {
    if(root == NULL) {
        root = new Node();
        root->data = data;
        root->left = root->right = NULL;
    }
    else if(data <= root->data)
        root->left = Insert(root->left,data);
    else
        root->right = Insert(root->right,data);
    return root;
}
int main()
 {
    Node* root = NULL;
    root = Insert(root,'F'); root = Insert(root,'A');
    root = Insert(root,'B'); root = Insert(root,'D');
    root = Insert(root,'G'); root = Insert(root,'I');
    root = Insert(root,'C'); root = Insert(root,'E');
    root = Insert(root,'H');
    cout<<"Preorder: ";
    Preorder(root);
    cout<<"\n";
    cout<<"Inorder: ";
    Inorder(root);
    cout<<"\n";
    cout<<"Postorder: ";
    Postorder(root);
    cout<<"\n";
}

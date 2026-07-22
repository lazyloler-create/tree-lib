#include <iostream>
#include "headers/print_tree.hpp"
#include "headers/node_class.hpp"

//preorder(data,left,right)
void preorder(Node* root){
    if(root == nullptr)
        return;

    std::cout<<root->data << std::endl;
    preorder(root->left);
    preorder(root->right);
}

//inorder(left,data,right)
void inorder(Node* root){
    if(root == nullptr)
        return;

        inorder(root->left);
        std::cout<<root->data<<std::endl;
        inorder(root->right);

}

//postorder(left,right,data)
void postorder(Node* root){
    if(root == nullptr)
        return;

        postorder(root->left);
        postorder(root->right);
        std::cout<<root->data<<std::endl;
}

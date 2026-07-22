#include <iostream>
#include "headers/print_tree.hpp"
#include "headers/node_class.hpp"
#include "headers/equations.hpp"


//main is only for function tests
int main(){
    Node* root = nullptr;
    int target = 3;
     
    root = Node::createNode(1);
    root->left = Node::createNode(2);
    root->right = Node::createNode(3);
    root->left->left = Node::createNode(4);

    std::cout<<"Preorder: "<<std::endl;
    preorder(root);
    std::cout<<std::endl;
    std::cout<<"Inorder: "<<std::endl;
    inorder(root);
    std::cout<<std::endl;
    std::cout<<"Postorder: "<<std::endl;
    postorder(root);
    std::cout<<std::endl;

    std::cout<<"Num of nodes in this tree: ";
    std::cout<<countNode(root)<<std::endl;

    bool check = exists(root, target);
    if(check)
        std::cout<<"Num: " << target << " exists in this tree!" << std::endl;
    else
        std::cout<<"Num:" << target << "doesnt exists in this tree!" << std::endl;

    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
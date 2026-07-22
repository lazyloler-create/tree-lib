#include <iostream>
#include "headers/node_class.hpp"

int countNode(Node* root){
    if(root == nullptr)
        return 0;

    int left_count = countNode(root->left);
    int right_count = countNode(root->right);

    return 1 + left_count + right_count;
}

bool exists(Node* root, int target){
    if(root == nullptr)
        return false;

    if(root->data == target)
        return true;

    return exists(root->left, target) || 
           exists(root->right, target);
}
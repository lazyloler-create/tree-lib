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

void inorderArrAdd(Node* root, vector<int>& list){
    if(root == nullptr)
        return;

    inorderAdd(root->left, list);
    list.push_back(root->data);
    inorderAdd(root->right, list);
}

void preorderArrAdd(Node* root, vector<int>& list){
    if(root == nullptr)
        return;

        list.push_back(root->data);
        preorderArrAdd(root->left);
        preorderArrAdd(root->right);
}

void postorderArrAdd(Node* root, vector<int>& list){
    if(root == nullptr)
        return;

    postorderArrAdd(root->left);
    postorderArrAdd(root->right);
    list.push_back(root->data);
}

vector<int> ArrToTreeIn(Node* root){
    vector<int> list;
    inorderArrAdd(root, list);
    return list;
}

vector<int> ArrToTreePre(Node* root){
    vector<int> list;
    preorderArrAdd(root, list);
    return list;
}

vector<int> ArrToTreePost(Node* root){
    vector<int> list;
    postorderArrAdd(root, list);
    return list;
}
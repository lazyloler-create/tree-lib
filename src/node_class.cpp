#include <iostream>
#include "headers/node_class.hpp"

//initializes a new node with default value
// data=0, left = right = nullptr
Node::Node() : data(0), left{nullptr}, right(nullptr){
    std::cout<<"Node constructor called!"<<std::endl;
}

//creates a new node and returns it
Node* Node::createNode(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

Node::~Node(){
    delete left;
    delete right;
}
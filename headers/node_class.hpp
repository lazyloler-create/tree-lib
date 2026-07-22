#ifndef NODE_CLASS_HPP
#define NODE_CLASS_HPP

class Node{
    public:
    int data;
    Node* left = nullptr;
    Node* right = nullptr;

    //constructor
    Node();

    static Node* createNode(int data);

    //deconstructor
    ~Node();
};
#endif
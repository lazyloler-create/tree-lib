#include <iostream>
#include "headers/print_tree.hpp"
#include "headers/node_class.hpp"
#include "headers/equations.hpp"

void printVector(const std::vector<double>& vec) {
    if (vec.empty()) {
        std::cout << "Empty vector\n";
        return;
    }
    
    std::cout << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i];
        if (i != vec.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]\n";
}

//main is only for function tests
int main(){
    Node* root = nullptr;
    int target = 3;
    std::vector<double> values = {
    1.0, 2.5, 3.14159, 4.0, 5.789
};
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

    int choice;
    std::cout<<"Choose which way to create a tree from list: "<<std::endl;
    std::<<cout<<"1.Preorder"<<'\n'<<"2.Inorder"<<'n'<<"3.Postorder"<<"Enter your choice: ";
    std::cin>>choice;
    
    Node* TreeList;
    vector<double> newList;
    switch(choice){
        case 1: newList = ArrToTreePre(TreeList);
        break;

        case 2: newList = ArrToTreeIn(TreeList);
        break;

        case 3: newList =  ArrToTreePost(TreeList);
        break;
    }

    
    printVector(newList);

    delete root->left;
    delete root->right;
    delete root;
    return 0;
}
#include <iostream>

class Node{
    public:
    int data;
    Node* left = nullptr;
    Node* right = nullptr;
};

Node* createNode(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}


int countNode(Node* root){
    if(root == nullptr)
        return 0;

    int left_count = countNode(root->left);
    int right_count = countNode(root->right);

    return 1 + left_count + right_count;
}

bool exists(Node* root){
    if(root == nullptr)
        return false;

    if(root->data == target)
        return true;

    return exists(root->left, target) || 
           exists(root->right, target);
}

//preorder
void printTree(Node* root){
    if(root == nullptr)
        return;

    std::cout<<root->data << std::endl;
    printTree(root->left);
    printTree(root->right);
}

void inorder(Node* root){
    if(root == nullptr)
        return;

        inorder(root->left);
        std::cout<<root->data<<std::endl;
        inorder(root->right);

}

void postorder(Node* root){
    if(root == nullptr)
        return;

        postorder(root->left);
        postorder(root->right);
        std::cout<<root->data<<std::endl;
}

int main(){
    Node* root = nullptr;
    int target = 3;
     
    root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);

    std::cout<<"Preorder: "<<std::endl;
    printTree(root);

    std::cout<<"Inorder: "<<std::endl;
    inorder(root);

    std::cout<<"Postorder: "<<std::endl;
    postorder(root);
    delete root;

    return 0;
}
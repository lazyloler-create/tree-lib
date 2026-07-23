#ifndef EQUATIONS_HPP
#define EQUATIONS_HPP

#include "headers/node_class.hpp"

int countNode(Node* root);
bool exists(Node* root, int target);
vector<int> ArrToTreePre(Node* root);
vector<int> ArrToTreeIn(Node* root);
vector<int> ArrToTreePost(Node* root);

#endif
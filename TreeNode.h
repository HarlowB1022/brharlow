//
// Created by ojcch on 2/3/2020.
//

#ifndef NEXTDATE_TREENODE_H
#define NEXTDATE_TREENODE_H
#include <string>
#include <iostream>

using namespace std;

template <class Object>
class TreeNode {
public:
    Object element;
    TreeNode* left = nullptr;
    TreeNode* right = nullptr;
    int height = 1;
    explicit TreeNode(Object element);
    virtual ~TreeNode();
};

template class TreeNode<int>;
template class TreeNode<char>;
template class TreeNode<string>;
template class TreeNode<float>;
template class TreeNode<double>;


#endif //NEXTDATE_TREENODE_H

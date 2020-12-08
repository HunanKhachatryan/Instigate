#include "binarytree.h"
#include <stdexcept>

BTree::BTree(){
    root = NULL;
}
BTree::~BTree(){
   deleteTree(root);
}
void BTree::deleteTree(Node* leaf){
   if(leaf!=NULL) {
    deleteTree(leaf->left);
    deleteTree(leaf->right);
    delete leaf;
  }
    
}
void BTree::insert(int value, Node* leaf) {
    
    if (value < leaf->value){
        if (leaf->left != NULL){
            insert(value, leaf->left);
        } else {
            leaf->left = new Node;
            leaf->left->value = value;
            leaf->left->left = NULL;
            leaf->left->right = NULL;
        }
    }else{
        if (leaf->right != NULL){
            insert(value, leaf->right);
        } else {
            leaf->right = new Node;
            leaf->right->value = value;
            leaf->right->left = NULL;
            leaf->right->right = NULL;
        }
    }
}
void BTree::insert(int value) {
    if (root != NULL){
        insert(value, root);
    }else{
        root = new Node;
        root->value = value;
        root->left = NULL;
        root->right = NULL;
    }
}
Node* BTree::search(int value, Node* leaf) {
    if (leaf != NULL){
        if (value == leaf->value) return leaf;
        if (value < leaf->value) return search(value, leaf->left);
        else  return  search(value, leaf->right);
    }
    return NULL;
}
Node* BTree::search(int value) {
    if (root != NULL){
        return search(value, root);
    }
    return NULL;
}

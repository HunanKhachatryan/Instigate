#ifndef BINARYTREE_H
#define BINARYTREE_H

struct Node {
    int value;
    Node* left;
    Node* right;
};

class BTree {
    private:
        Node* root;
        void deleteTree( Node* leaf);
        void insert(int value, Node* leaf);
        Node* search(int value, Node* leaf);
    public:
	    BTree();
        ~BTree();
        void insert( int value);
        Node* search(int value);
        
};

#endif

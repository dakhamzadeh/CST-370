/****************************************
 *
 * Title: CST 370 Assignment 7
 * Abstract: Binary Sort Tree traversals
 * Author: Devorah Akhamzadeh
 * ID: 002602885
 * Date: Tuesday, Feb 19,2018
 *
 ****************************************/


#include <iostream>
using namespace std;

#ifndef BINARY_SEARCH_TREE
#define BINARY_SEARCH_TREE

enum TRAVERSE_STYLE { IN_ORDER, PRE_ORDER };

class BST
{
public:
    /***** Function Members *****/
    BST();
    bool empty() const;
    bool search(const int & item) const;
    void insert(const int & item);
    void traverseTree(TRAVERSE_STYLE tr) const;
    int nodeCount() const;
    
private:
    /***** Node class *****/
    class BinNode
    {
    public:
        int data;
        BinNode * left;
        BinNode * right;
        
        // BinNode constructors
        // Default -- data part is default int value; both links are null.
        BinNode()
        : left(0), right(0)
        {}
        
        // Explicit Value -- data part contains item; both links are null.
        BinNode(int item)
        : data(item), left(0), right(0)
        {}
        
    };// end of class BinNode declaration
    
    /***** Data Members *****/
    BinNode * myRoot;
    
    /***** Private Members Functions *****/
    bool recursiveSearch(const BinNode * myRoot, const int & item) const;
    void inOrder(const BinNode * root) const;
    void preOrder(const BinNode * root) const;
    int nodeCount(const BinNode * root) const;
    
}; // end of class declaration

#endif

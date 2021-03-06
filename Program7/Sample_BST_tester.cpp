/****************************************
 *
 * Title: CST 370 Assignment 7
 * Abstract: Binary Sort Tree traversals
 * Author: Devorah Akhamzadeh
 * ID: 002602885
 * Date: Tuesday, Feb 19,2018
 *
 ****************************************/

/*----- treetester.cpp -----------------------------------------------------
 Program for testing BST.
 ------------------------------------------------------------------------*/
#include <iostream>
using namespace std;

#include "BST.h"

int main()
{
    // Testing Constructor and empty()
    BST intBST;            // test the class constructor
    int count;
    cout << "Constructing empty BST\n";
    cout << "BST " << (intBST.empty() ? "is" : "is not") << " empty\n";
    
    // Testing insert
    cout << "\nNow insert a bunch of integers into the BST."
    "\nTry items not in the BST and some that are in it:\n";
    int number;
    for (;;)
    {
        cout << "Item to insert (-999 to stop): ";
        cin >> number;
        if (number == -999) break;
        intBST.insert(number);
    }
    cout << "BST " << (intBST.empty() ? "is" : "is not") << " empty\n";
    
    // Testing search()
    cout << "\n\nNow testing the search() operation."
    "\nTry both items in the BST and some not in it:\n";
    for (;;)
    {
        cout << "Item to find (-999 to stop): ";
        cin >> number;
        if (number == -999) break;
        cout << (intBST.search(number) ? "Found" : "Not found") << endl;
    }
    
    // traveral testing
    
    cout << "\nIn Order Traveral\n";
    intBST.traverseTree(IN_ORDER);
    cout << "\nPre Order Traveral\n";
    intBST.traverseTree(PRE_ORDER);
   
    
    cout << "\nNode Count of Tree\n";
    count = intBST.nodeCount();
    cout << count << endl;
    
}

//
// Created by Kamil on 2017-04-09.
//

#ifndef ANT2_NODE_H
#define ANT2_NODE_H

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Node {
public:
    char name;
    int number;

    Node();
    Node(int number);
    // Node(Node & ex);
    //Node& operator= (Node const& ex);
};


#endif //ANT2_NODE_H

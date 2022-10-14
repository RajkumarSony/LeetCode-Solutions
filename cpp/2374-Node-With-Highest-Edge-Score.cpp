/**
Problem Statement
-----------------
You are given a directed graph with n nodes labeled from 0 to n - 1, where each node has exactly one outgoing edge.
The graph is represented by a given 0-indexed integer array edges of length n, where edges[i] indicates that there is a directed edge from node i to node edges[i].
The edge score of a node i is defined as the sum of the labels of all the nodes that have an edge pointing to i.
Return the node with the highest edge score. If multiple nodes have the same edge score, return the node with the smallest index.

Ex-: 
Input: edges = [1,0,0,0,0,7,7,5]
Output: 7
Explanation:
- The nodes 1, 2, 3 and 4 have an edge pointing to node 0. The edge score of node 0 is 1 + 2 + 3 + 4 = 10.
- The node 0 has an edge pointing to node 1. The edge score of node 1 is 0.
- The node 7 has an edge pointing to node 5. The edge score of node 5 is 7.
- The nodes 5 and 6 have an edge pointing to node 7. The edge score of node 7 is 5 + 6 = 11.
Node 7 has the highest edge score so return 7.


Approach
--------
Traverse the given list edges.
Maintain a vector in which corresponding to a given node (lets call it i), add the label of all nodes from which edge starts and points to i.
Then traverse the vector , and find out the index of the node with the maximum label value.
To make ensure that if two or more nodes are there with same maximum value then we should choose the node with smallest index , use < condition  instead of <=.
Return that index. That's all we have to do.

Analysis
--------
Time Complexity -: O(N)
Auxillary Space Complexity -: O(N)

*/

class Solution {
public:
    int edgeScore(vector<int>& edges) {
        int len  =edges.size();
        vector <long long > sum_of_label(len);
        for (int i = 0; i< len ;  i++) {
            // adding label's value to the node at which the current edge is pointing.
            sum_of_label[edges[i]]+=i;
        }
        long long maximum  = -1;
        int index = -1;
        for (int i = 0 ; i< len  ; i++) {
            long long sum = 0;
            if (maximum < sum_of_label[i]) {
                maximum = sum_of_label[i] ; 
                index = i;
            }
        }
        return index;
    }
};

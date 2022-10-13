/*
You are given an integer n, which indicates that there are n courses labeled from 1 to n. You are also given a 2D integer array relations where relations[j] = [prevCoursej, nextCoursej] denotes that course prevCoursej has to be completed before course nextCoursej (prerequisite relationship). Furthermore, you are given a 0-indexed integer array time where time[i] denotes how many months it takes to complete the (i+1)th course.

You must find the minimum number of months needed to complete all the courses following these rules:

You may start taking a course at any time if the prerequisites are met.
Any number of courses can be taken at the same time.
Return the minimum number of months needed to complete all the courses.

Note: The test cases are generated such that it is possible to complete every course (i.e., the graph is a directed acyclic graph).

Time: O(n)
Space: O(n)
*/

class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        // data structure for graph representation
        vector<vector<int>> adj( n+1, vector<int> () );
        vector<int> indeg( n+1, 0 );
        
        for( auto &e: relations ){
            adj[e[0]].push_back( e[1] );
            indeg[ e[1] ]++;
        }
        
        // perform topological sort of all vertices
        queue<int> q;
        vector<int> topo_sort;
        for( int i=1; i<=n; i++ ){
            if( indeg[i]==0 ) q.push( i );
        }
        
        while( !q.empty() ){
            int curr=q.front();
            q.pop();
            
            topo_sort.push_back( curr );
            for( auto v: adj[curr] ){
                indeg[v]--;
                if( indeg[v]==0 ) q.push( v );
            }
        }
        
        // using topological sort, compute time of completion of all vertices
        
        vector<int> t_complete( n+1, 0 ); // array to have min starting time / completion time of a course
        int res=INT_MIN; // max completion time will be result
        for( auto c: topo_sort ){
            int t=time[c-1];
            t_complete[c]+=t;
            res=max( res, t_complete[c] );
            for( auto e: adj[c] ){
                t_complete[e] = max ( t_complete[e], t_complete[c] );
            }
        }
        
        return res;
    }
};
#include<bits/stdc++.h>
using namespace std;
   
struct ListNode {
     int val;
     ListNode *next;
       ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    void deleteNode(ListNode* node) {
        swap(node->val, node->next->val);
        node->next = node->next->next;
    }
};

// Time Complexity - O(1)
// Space Complexity - O(1)
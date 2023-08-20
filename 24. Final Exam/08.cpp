#include <bits/stdc++.h>

using namespace std;



struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* n = NULL;
        if (lists.size() == 0) return n;

        priority_queue< int, vector<int>, greater<int> > pq;

        for (auto n : lists)
        {
            ListNode* tmp = n;

            while (tmp)
            {
                pq.push(tmp->val);
                tmp = tmp->next;
            }
        }

        ListNode* head = new ListNode(pq.top());
        ListNode* tmp = head;
        pq.pop();

        while (!pq.empty())
        {
            ListNode* newNode = new ListNode(pq.top());
            pq.pop();
            tmp->next = newNode;
            tmp = newNode;
        }
        
        return head;
    }
};


int main(void)
{
    

    return 0;
}
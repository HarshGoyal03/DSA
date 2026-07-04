/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {

        if (!root)
            return NULL;

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {

            int size = q.size();

            for (int i = 0; i < size; i++) {

                Node* curr = q.front();
                q.pop();

                if (i < size - 1)
                    curr->next = q.front();

                if (curr->left)
                    q.push(curr->left);

                if (curr->right)
                    q.push(curr->right);
            }
        }

        return root;
    }
};
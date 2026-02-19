#include <cstddef>
#include <iostream>
#include <queue>

using namespace std;

struct node {
  node *left;
  node *right;
  int val;
  node(int v) {
    left = right = nullptr;
    val = v;
  }
};

node *insert(node *root, int val) {
  if (!root) {
    // cout << val;
    return new node(val);
  }
  if (val >= root->val) {
    root->right = insert(root->right, val);
  } else {
    root->left = insert(root->left, val);
  }

  // cout << root->val;
  return root;
}

int sum(node *root) {
  if (!root)
    return 0;

  return root->val + sum(root->left) + sum(root->right);
}

int summ = 0;

void transform(node *root) {
  if (!root)
    return;
  transform(root->left);
  summ += root->val;
  root->val += summ;
  transform(root->right);
}

void levelOrder(node *root) {
  if (!root)
    return;
  queue<node *> q;
  q.push(root);

  while (!q.empty()) {
    int n = q.size();
    for (int i = 0; i < n; i++) {
      node *temp = q.front();
      q.pop();
      if (temp->left)
        q.push(temp->left);
      if (temp->right)
        q.push(temp->right);
      cout << temp->val << " ";
    }
  }
}

int main() {
  int n;
  cin >> n;

  node *root = nullptr;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    root = insert(root, x);
  }

  transform(root);

  levelOrder(root);
}

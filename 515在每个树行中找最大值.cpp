vector<int> largestValues(TreeNode* root) 
{
	queue<TreeNode*> q;
	vector<int> ans;
	if (!root)
		return ans;
	q.push(root);
	while (!q.empty())
	{
		int n = q.size(), maxVal = INT32_MIN;
		for (int i = 0; i < n; i++)
		{
			TreeNode* node = q.front();
			q.pop();
			maxVal = max(maxVal, node->val);
			if (node->left)
				q.push(node->left);
			if (node->right)
				q.push(node->right);
		}
		ans.push_back(maxVal);
	}
	return ans;
}
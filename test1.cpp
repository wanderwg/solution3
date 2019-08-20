//���ö���ʵ�ֲ������
vector<vector<int>> LevelOrder(Node* root)
{
	vector<vector<int>> vtree;
	if (root == nullptr)
		return vtree;
	vector<int> levelret;//���ÿ��Ľ��
	queue<Node*> q;
	q.push(root);
	while (!q.empty())
	{
		int size = q.size();
		while (size)
		{
			auto node = q.front();
			q.pop();
			levelret.push_back(node->val);
			for (auto child : node->children)
			{
				if (child)
					q.push(child);
			}
			--size;
		}
		if (!levelret.empty())
			vtree.push_back(levelret);
	}
	return vtree;
}
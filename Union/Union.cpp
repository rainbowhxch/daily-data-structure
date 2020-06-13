#include "Union.h"

Union::Union(int n):_cnt(n)
{
    _parent = new int[n];
    _size = new int[n];
    for (int i = 0;i < n;++i) {
	_parent[i] = i;
	_size[i] = 1;
    }
}

void Union::connect(int u1, int u2)
{
    int root1 = _find(u1);
    int root2 = _find(u2);
    if (root1 == root2) return;

    if (_size[root1] > _size[root2]) {
	_parent[root2] = _parent[root1];
	_size[root2] += _size[root1];
    } else {
	_parent[root1] = _parent[root2];
	_size[root1] += _size[root2];
    }

    _cnt--;
}

bool Union::is_connected(int u1, int u2)
{
    return _find(u1) == _find(u2);
}

int Union::_find(int u)
{
    while (_parent[u] != u) {
	_parent[u] = _parent[_parent[u]];
	u = _parent[u];
    }

    return u;
}

int Union::get_count()
{
    return _cnt;
}

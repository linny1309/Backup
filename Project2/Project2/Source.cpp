using namespace std;

#include "iostream";

class node
{
	void *info;      
	node *next;
public:
	node(void *v) { info = v; next = 0; }
	void put_next(node *n) { next = n; }
	node *get_next() { return next; }
	void *get_info() { return info; }
};

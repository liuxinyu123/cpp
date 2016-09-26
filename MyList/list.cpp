#include "list.h"
#include <cstdlib>

List::List()
{
	init();
}

List::List(LinkList L)
{
	init();
	//_size = 0;
	int i = 0;
	LinkList p = L -> link;
	LinkList q;
	while(p)
	{
		q = static_cast<Node*> (malloc(sizeof(Node)));
		q -> data = p -> link -> data;
		p = p -> link;
		q -> link = p;
		++ _size;	
	}
}

LinkList find(LinkList L,int i)
{
	LinkList p = L -> link;
	int k = 1;

	while (p && k < i)
	{
		p = p -> link;
		++i;
	}

	if(p && k == i)
			return p;
	return 0;
}

int List::insert(LinkList L,int i,int value)
{
	LinkList p;
	if(i == 1)
		p = L;
	p = this -> find(L,i-1);

	Node *q = static_cast<Node*> (malloc(sizeof(Node)));

	if(!q)
		return -1;
	q -> data = value;
	q -> link = p -> link;
	p -> link = q;
	++ _size;
	return 0;
}

int List::remove(LinkList L,int i)
{
	if (i > _size)
		return -1;
	LinkList p;
	if (i == 1)
		p = L -> link;
	p = this -> find(L,i-1);

	LinkList q = p -> link;
	p -> link = q -> link;
	-- _size;
	free(q);

	return 0;
}

void List::init()
{
	_size = 0;
	_head = static_cast<Node*> (malloc(sizeof(Node)));
	//_trailer = static_cast<Node*> (malloc(sizeof(Node)));
	//_head -> link = _trailer;

}


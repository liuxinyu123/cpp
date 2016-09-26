#ifndef _LIST_H
#define _LIST_H

typedef struct node {
int data;
struct node *link;
}Node,*LinkList;

class List{

public:
		List();
		List(LinkList L);
	    ~List();
		LinkList find(LinkList L,int i);
		int insert(LinkList L,int i,int value);
		int remove(LinkList L,int i);
		int size() { return _size;}		
private:
		void init();
		void copy(LinkList L,int n);

private:
	Node *_head;
	int _size;	

};
#endif

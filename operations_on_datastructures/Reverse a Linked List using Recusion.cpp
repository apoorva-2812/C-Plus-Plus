#include <iostream>
using namespace std;

struct node
{
	int val;
	node *next;
};

node *head;

void insert(int x)
{
	node *t = head;
	if (start != NULL)
	{
		while (t->next != NULL)
		{
			t = t->next;
		}
		node *n = new node;
		t->next = n;
		n->val = x;
		n->next = NULL;
	}
	else
	{
		node *n = new node;
		n->val = x;
		n->next = NULL;
		head = n;
	}
}

void reverse(node *p, node *q)
{
	if (q->next == NULL)
	{
		q->next = p;
		p->next = NULL;
		start = q;
		return;
	}
	else
	{
		reverse(q, q->next);
		q->next = p;
		p->next = NULL;
	}
}

void show()
{
	node *t = start;
	while (t != NULL)
	{
		cout << t->val << "\t";
		t = t->next;
	}
}

int main()
{
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(6);

	reverse(head, head->next);

	show();

	return 0;
}

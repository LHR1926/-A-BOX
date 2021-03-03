#include<bits/stdc++.h>
using namespace std;
struct node {
	int data;
	node *lchild;
	node *rchild;
}tree[105];
int loc;
node *create() {
	tree[loc].lchild=tree[loc].rchild=NULL;
	return &tree[loc++];
}
node *insert(node *t,int x) {
	if(t==NULL) {
		t=create();
		t->data=x;
	} else {
		if(t->data<x) {
			if(t->lchild==NULL) {
				cout<<t->data<<endl;
			}
			t->lchild=insert(t->lchild,x);
		} else {
			if(t->rchild==NULL) {
				cout<<t->data<<endl;
			}
			t->rchild=insert(t->rchild,x);
		}
	}
	return t;
}
int main() {
	int N,data;
	node *t=NULL;
	cin>>N;
	loc=0;
	while(N--) {
		cin>>data;
		if(t==NULL) {
			cout<<"-1\n";
		}
		t=insert(t,data);
	}
	return 0;
}

#include <iostream>
using namespace std;
struct Node{
	char data;
	int depth;
	Node *lChild, *rChild;
};
void creat(Node* &bt, int depth){
	char ch;
	cin>>ch;
	if(ch=='#'){
		bt=NULL;
	}
	else
	{
		bt=new Node;
		bt->data=ch;
		bt->depth=depth;
		creat(bt->lChild, depth+1);
		creat(bt->rChild, depth+1);
	}
	return;
}
void find(Node* &bt,char a){
	if(bt==NULL)
        return;
	else{
		if(bt->data==a)
        {
			cout<<bt->depth;
			return;
		}
		find(bt->lChild,a);
		find(bt->rChild,a);
	}
}
int main()
{
    char a;
	Node *first;
	creat(first, 1);
	cin>>a;
	find(first,a);
	return 0;
}



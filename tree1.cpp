#include <iostream>
using namespace std;
struct Node
{
	char data;
	Node *lChild, *rChild;
};
void creat(Node* &bt)
{
	char ch;
	cin>>ch;
	if(ch =='#')
		bt=NULL;
	else
	{
		bt=new Node;
		bt->data=ch;
		creat(bt->lChild);
		creat(bt->rChild);
	}
	return;
}
void fun(Node* &bt)
{
	if(bt==NULL)
        return;
	else{
		fun(bt->lChild);
		cout<<bt->data;
		fun(bt->rChild);
	}
}
int main(){
	Node *first;
	creat(first);
	fun(first);
	return 0;
}


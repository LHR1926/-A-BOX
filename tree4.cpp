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
void find(Node* &bt,int *t, int size){
	if(bt==NULL)
        return;
	else{
		t[bt->depth]++;
		find(bt->lChild,t, size);
		find(bt->rChild,t, size);
	}
}
void max(int *t, int size){
	int max=0;
	for(int i=0;i<10;i++){
		if(t[i]>max)
			max=t[i];
	}
	cout<<max;
}
int main(){
    int t[10]={0};
	Node *first;
	creat(first, 1);
	find(first,t,10);
	max(t, 10);
	return 0;
}

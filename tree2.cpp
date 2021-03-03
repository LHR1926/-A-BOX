#include <iostream>
using namespace std;
struct Node{
	char data;
	Node *lChild, *rChild;
};
void creat(Node* &bt){
	char ch;
	cin>>ch;
	if(ch=='#'){
		bt=NULL;
	}
	else
	{
		bt=new Node;
		bt->data=ch;
		creat(bt->lChild);
		creat(bt->rChild);
	}
	return;
}
void find(Node* &bt,int &count,char a){
	if(bt==NULL) return;
	else{
		if(bt->data==a){
			count=1;
			return;
		}
		find(bt->lChild, count, a);
		find(bt->rChild, count, a);
	}
}
int main(){
    int count=0;
    char a;
	Node *first;
	creat(first);
	cin>>a;
	find(first,count,a);
	if(count == 1)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}

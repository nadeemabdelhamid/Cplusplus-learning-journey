#include<iostream>
using namespace std;
class Node{
    public:
int data;
Node *left;
Node *right;
Node(){
    data = 0;
    left = NULL;
    right = NULL;
}



};
class BST{
    public:
Node* root;
BST(){
    root = NULL;
}
Node* insert(Node *proot,int item){
if(proot==NULL){
    Node *newnode=new Node();
newnode->data=item;
proot=newnode;
return newnode;


}
 if(item<proot->data){

    proot->left=insert(proot->left,item);
}
else
{
    proot->right=insert(proot->right,item);
}


return proot;

}

void insert(int item){
    root = insert(root, item);
}
void preorder(Node* proot){
    if(proot==NULL)
    return;
    cout<<proot->data<<"\t";
    preorder(proot->left);
    preorder(proot->right);
}


};



int main(){
BST x;
x.insert(45);
x.insert(15);
x.insert(79);
x.insert(90);
x.insert(10);
x.insert(55);
x.insert(12);
x.insert(20);
x.insert(50);
x.preorder(x.root);




}
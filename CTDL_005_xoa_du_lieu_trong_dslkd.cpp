#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cstring>
#include <vector>
#include <map>
 
#define ll long long
#define in(n) cout<<'['<<n<<']'<<endl;
#define faster() std::ios_base::sync_with_stdio(0); std::cin.tie(NULL); std::cout.tie(NULL);
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

struct Node{
    int data;
    Node* next;
};

typedef Node* node;

node createNode(int val){
    node tmp = new Node;
    tmp -> data = val;
    tmp -> next = NULL;
    return tmp;
}

void addBack(node &head, int val){
    node tmp = head;
    if(head == NULL){
        head = createNode(val);
        return;
    }
    while(tmp->next != NULL)
        tmp = tmp->next;
    tmp -> next = createNode(val);
}

void printList(node head, int k){
    while(head != NULL){
        if(head->data != k)
            cout << head->data << ' ';
        head = head -> next;
    }
}

int main(){
    int n, k, x;
    cin >> n;
    node head = NULL;
    while(n--){
        cin >> x;
        addBack(head, x);
    }
    cin >> k;
    printList(head, k);
}
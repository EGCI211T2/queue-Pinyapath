
#ifndef queue_h
#define queue_h
#include "Node.h"
class Queue {
	NodePtr headPtr,tailPtr;
	int size;
public:
    void enqueue(int);
    int dequeue();
    Queue();
    ~Queue();
};


void Queue::enqueue(int x){

  NodePtr new_node= new NODE(x);

if(new_node!=NULL){ 
    if(size>0){
        tail->set_next(new_node);
    }
    else{
        headPtr=new_node;
    }
        tailPtr=new_node;
        size++;
 }
 else{
    cout<<"Out of memory"<<endl;
 }
}

int Queue::dequeue(){
  if(size>0){
    NodePtr t=headPtr;
    headPtr=headPtr->get_next();
    if() tailPtr=NULL;
    --size;
    delete t;
     /* Add head and tail for me please */
          
    
  }
  cout<<"Empty queue";
  return -1;
}


Queue::Queue(){
    //initialize Queue
    
}
Queue::~Queue(){
    cout<<"Dequeue all"<<endl;
    int n=size;
    for(i=0;i<n;i++){
        dequeue();
    }
    
}


#endif

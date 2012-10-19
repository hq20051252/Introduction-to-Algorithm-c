#include <stdio.h>

/*Practice of IntroAlgorithm.Use two stack to implement a queue.*/
typedef struct stack{
    int top;/*The top index of stack*/
    int size;/*The size of stack*/
    int _stack[100];/*The stack*/
    int (*pop)(stack* s);
    int (*push)(stack* s,int ele);
    } stack;

typedef struct queue{
    stack i,o;
    int (*add)(queue* q,int ele);
    int (*get)();
    int (*transfer)(stack* a,stack* b);
    }queue;
int pop(stack s){
    /*Judge weather the stack is empty.*/
    if(s.top==0){
        printf("Stack is empty.");
        return NULL;
    }
    /*Return the top element,and reduce the top index.*/
    return s->_stack[s.top--];
}

/*the function in stack used to push element into stack.*/
int push(stack s,int ele){
    /*Test weather the stack is full to avoid overflowing.*/
    if(s.top>=s.size){
        printf("The stack is overflowing.\n");
        return 0;
    }
    s->_stack[s.top++]=ele;
    return 1;
}

/*the function in queue,it is implement by pop and push operation in stack.*/
int add(queue q,int ele){
    if(!q.i.push(q->i,ele)){
        printf("The queue is full.");
        return 0;
    }
    else{
        printf("Add element successfully.");
        return 1;
    }
}

int get(queue q){
    /*temporary variable used to store middle result.*/
    int ele;
    ele=q.o->pop();
    if(ele!=NULL){
        printf("Successfully get one element.");
        return ele;
    }
    else{
        q.transfer();
        ele=q.o->pop();
        if(ele==NULL){
            printf("The queue is empty.");
            return NULL;
        }
        else{
            printf("Successfully get a element.");
            return ele;
        }
    }
}
int transfer(stack* a,stack* b){
    int midv;/*middle variable.*/
    midv=a->pop();
    while(midv!=NULL){
        b->push(b,midv);
        midv=a->pop();
    }
    return 0;
}

#define MAX 100
typedef struct {
    int data[MAX];
    int top;
} MyStack;

MyStack* myStackCreate() {
    MyStack *stack = (MyStack*)malloc(sizeof(MyStack));
    stack->top = -1;
    return stack;
}

void myStackPush(MyStack* obj, int x) {
    obj->data[++(obj->top)]=x;
}

int myStackPop(MyStack* obj) {
   return obj->data[(obj->top)--]; 
}

int myStackTop(MyStack* obj) {
    return obj->data[(obj->top)];
}

bool myStackEmpty(MyStack* obj) {
    if((obj->top)==-1)
    return true;
    else
    return false;
}

void myStackFree(MyStack* obj) {
    free(obj);
}



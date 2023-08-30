#include<iostream>
using namespace std;
#define MAX 10
bool isEmpty(int top) {
  if(top == -1)
  return 1;
  else
  return 0;
}
void push(char stk[],int *top,int value) {
    stk[++(*top)] = value;
}
char pop(char stk[],int *top) {
 char temp = stk[(*top)];
 (*top)--;
 return temp;
}
char topElement(char stk[],int *top) {
    return stk[*top];
}
int main() {
 int top = -1;
 char stk[MAX];
 string str = "()";
 int i=0 , flag = 0;
 char temp;
 while(str[i] != '\0') {
  if(str[i] == '(' || str[i] == '[' ||str[i] == '{')
  push(stk,&top,str[i]);
  else {
    if(isEmpty(top)) 
    flag = 1;
    else {
    temp = topElement(stk,&top);
    if((temp == '(' && str[i] == ')') || (temp == '{' && str[i] == '}') ||(temp == '[' && str[i] == ']')) {
       char extra = pop(stk,&top);
    }
    else
    flag = 1;
    }
  }
  i++;
 }
 if(isEmpty(top) == 1 && flag == 0)
 cout<<"Balanced";
 else
 cout<<"Not balanced";
 return 0;
}

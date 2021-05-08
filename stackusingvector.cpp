#include <iostream>
#include <vector>
using namespace std;

class stack{
    vector<int>v;  //to give functions of stack only
    int cs;    //no of elements in stack
public:
    stack(){
        cs=0;
    }
    void push(int val){
       v.push_back(val);

        cs++;
    }

    void pop(){
        if(cs>0){

            v.pop_back();
            cs--;
        }
    }

    int top(){
        return v[v.size()-1];
    }

    bool empty(){
        return cs==0;
    }

    int size(){
    return  cs;}


};

 int main(){
     stack s;
     s.push(1);
     s.push(2);
     s.push(3);
     s.push(4);
     s.push(5);
     s.push(6);
     cout<<endl<<s.top()<<endl;
     if(s.empty()){
         cout<<endl<<"Stack is empty";
     }
     else{
         cout<<"NOT EMPTY";
     }
 }

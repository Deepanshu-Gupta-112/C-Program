#include<iostream>
#include<set>
#include<unordered_map>
using namespace std;
int main(){
 set <int> s;
 s.insert(3);
 s.insert(4);
 s.insert(5);
 s.insert(6);
 s.insert(7);
 for (auto it= s.begin(); it!=s.end(); it++)
 {
  cout<<&it<<"  "<<*it<<endl;
 }
 

}
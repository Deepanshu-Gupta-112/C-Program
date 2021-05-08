/*Take as input S, a string. Write a function that returns the character with maximum frequency. Print the value returned.

Input Format
String

Constraints
A string of length between 1 to 1000.

Output Format
Character

Sample Input
aaabacb
Sample Output
a  */

#include<iostream>
using namespace std;
int main() {
    string a;
    cin>>a;
    int count[27]={0};
    for(int i=0;i<a.length();i++)
    {
      int p=a[i]-'a';  // You have to subtract with 'a' bcoz 97 is not a character
      count[p]++;
    }
    int max=0,p=0;
    for(int i=0;i<27;i++)
    {
        if(count[i]>max)
        {
            max=count[i];
            p=i;
        }
    }
    char answer=(char)(p+'a');
    cout<<answer<<endl;
    return 0;
}

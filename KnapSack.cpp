#include<iostream>
#include<ctime>
#include<algorithm>
using namespace std;
struct Node{
    int val;
    int wt;
    double ratio;
};
bool compare(Node p,Node q)
{
    return p.ratio>q.ratio;
}
int main()
{
    int n;
    cout<<"enter the number of values:";
    cin>>n;
    int bag_wt;
     cout<<"enter the bag capacity:";
    cin>>bag_wt;
    Node items[n];
    for(int i=0;i<n;i++)
    {
        cin>>items[i].val;
    }
    cout<<"\nwait\n";
    for(int i=0;i<n;i++)
    {
        cin>>items[i].wt;
    }
    for(int i=0;i<n;i++)
    {
        items[i].ratio=((double)items[i].val/items[i].wt);
    }
    cout<<"values       "<<"weight      "<<"ratio       "<<"       xi   "<<" profit"<<endl;
    cout<<endl;
    sort(items,items+n,compare);
   
    double max_p=0;int i=0;
    int prints=0;
    while(i<n && bag_wt!=0)
    {
          if(items[i].wt<=bag_wt)
          {    int d=items[i].val;
              max_p+=items[i].val;
              bag_wt-=items[i].wt;
              cout<<items[i].val<<"           "<<items[i].wt<<"         "<<items[i].ratio<<"       1         "<<d<<endl;
              prints++;
          }
          else
          {  
               int d=items[i].val*((double)bag_wt/items[i].wt);
               float p=(float)d/items[i].val;
              max_p+=items[i].val*((double)bag_wt/items[i].wt);
              cout<<items[i].val<<"           "<<items[i].wt<<"         "<<items[i].ratio<< "    " <<p <<"       "     <<d<<endl;
              prints++;
              break;
          }
        i++;  
    }
    for(int i=prints;i<n;i++)
    {
             cout<<items[i].val<<"           "<<items[i].wt<<"         "<<items[i].ratio<<"       0"<<"         0"<<endl;  
    }
    cout<<"max-profit="<<max_p;
    return 0;
}

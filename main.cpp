#include <iostream>
#include <set>
#include <iterator>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    int x, k;
    string str, jjj;
    getline (cin, str);
    str.insert(0, " ");
    string:: iterator it=str.begin();
    set<int> S;
    cout<<endl;
    k=str.find(" ",0);
    while(k!=-1){
        jjj.clear();
        if(str.find(" ", k+1)!=-1) jjj=str.substr(k+1, str.find(" ", k+1)-1);
        else jjj=str.substr(k+1);
        k=str.find(" ",k+1);
        if(jjj.find(" ", 0)!=-1) jjj.erase(jjj.find(" ", 0));
        x = atoi(jjj.c_str());
        if (S.find(x) == S.end()) {S.insert(x); cout<<"NO"<<endl;}
        else cout<<"YES"<<endl;
    }
    }


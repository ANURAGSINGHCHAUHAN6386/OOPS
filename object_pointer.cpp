#include<bits/stdc++.h>
using namespace std;
class cricket{
    public:
    int runs;
    string name ;
    int Century;
    cricket(string  s, int r,int b){
        runs=r;
        name=s;
        Century=b;
    }
        void display(cricket c ){
             cout<<c.name<<" "<<c.runs<<c.Century<<endl;

        }

};
int main(){
    cricket c1 ("VIRAT KOHALI",18000,86);

    cricket c2 ("rohit sharma ",14000,34);
    c1.display(c1);
    c2.display(c2);
}
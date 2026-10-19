#include<bits/stdc++.h>
using namespace std;
class Student{
    public :
    int rolln;
    string name;
    int section;
    float marks;
    string type;

     Student( string s ,int r ){
       name=s;
       rolln=r;
       section=r;
       type=s;


     }
     Student(int r,float b,string s){
         
        marks=b;
        rolln=r;
        name=s;
     }

};
int main(){
    Student s1 ("Anurag",25);

    Student s2("mahendra",23);
    Student s3(34,234.34,"abhijit");
    cout<<s1.name<<s1.rolln<<endl;
    cout<<s2.name<<s2.rolln<<endl;
    cout<<s3.marks<<s3.rolln<<s3.name<<endl;




}
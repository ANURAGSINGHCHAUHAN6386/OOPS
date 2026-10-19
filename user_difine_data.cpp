#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int rolln;
    string name;
    float gpa;
    void print (Student s){
        cout<<s.name<<" "<<s.gpa<<" "<<s.rolln<<" "<<endl;

    }


};
    

int main(){
    Student s1;
    s1.name="Anurag Singh chauhan";
    s1.rolln=6;
    s1.gpa=8.5;
        Student s2;
    s2.name="Aman Singh Chauhan";
    s2.rolln=258;
    s2.gpa=8.0;
    print(s1);
    print s2();
//    cout<<"name is:"<< s1.name<<endl;
//    cout<<"roll number is:"<<s1.rolln<<endl;
//    cout<<"gpa is :"<<s1.gpa<<endl;
//    cout<<"name is :"<<s2.name<<endl;
//    cout<<"roll is :"<<s2.rolln<<endl;
//    cout<<"gpa is :"<< s2.gpa<<endl;

}
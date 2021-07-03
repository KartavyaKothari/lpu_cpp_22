#include<bits/stdc++.h>
using namespace std;

typedef struct Student{
    string name;
    int age;
} Student;

int main(){
    Student arr[5] = {
        {"Kartavya",23},
        {"Ajit",12},
        {"Himanshu",34},
        {"Sakib",2345},
        {"Jyotir",1500}
    };

    fstream fp;
    fp.open("student_details.txt",ios::out|ios::binary);
    for(int i = 0 ; i < 5 ; i++){
        fp.write( (char *) &arr[i] , sizeof(Student));
    }

    fp.close();
    fp.open("student_details.txt",ios::in|ios::binary);

    Student new_arr[5];

    for(int i = 0 ; i < 5 ; i++){
        fp.read( (char *) &new_arr[i],sizeof(Student));
    }

    for(int i = 0 ; i < 5 ; i++){
        cout<<new_arr[i].name<<" is "<<new_arr[i].age<<"years old"<<endl;
    }

    return 0;
}
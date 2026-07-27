#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        int id;
        char name[101];
        char section;
        int marks;
};

int main(){
    int t;
    cin >> t;

    while(t--){
        Student f;
        Student s;
        Student t;

        for(int i=1; i<=3; i++){
            if(i == 1){
                cin >> f.id >> f.name >> f.section >> f.marks;
            }else if(i == 2){
                cin >> s.id >> s.name >> s.section >> s.marks;         
            }else{
                cin >> t.id >> t.name >> t.section >> t.marks;
            }
        }

        Student highest_marks_obj = f;
        
        if(s.marks > highest_marks_obj.marks ){
            highest_marks_obj = s;
        }
        else if(s.marks == highest_marks_obj.marks){
            if(s.id < highest_marks_obj.id){
                highest_marks_obj = s;            
            }
        }

        if(t.marks > highest_marks_obj.marks){
            highest_marks_obj = t;            
        }
        else if(t.marks == highest_marks_obj.marks){
            if(t.id < highest_marks_obj.id){
                highest_marks_obj = t;            
            }
        }
        
        cout<<highest_marks_obj.id<<" "<<highest_marks_obj.name<<" "<<highest_marks_obj.section<<" "<<highest_marks_obj.marks<<endl;        
    }

    return 0;
}
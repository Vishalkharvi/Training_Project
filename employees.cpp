#include<iostream>
#include "employee_data.h"


using namespace std;

int main() {
    map<string,Employee> var= my_main();
    for(auto i:var){
        cout<<"Emp id is"<<i.first<<endl;
        cout<<"Emp name is"<<i.second.emp_name<<endl;
        cout<<"Emp skills are:"<<endl;
        for(string a:i.second.emp_skills){
            cout<<"\t"<<a<<endl;
        }
        cout<<"Years of Experience: "<<i.second.emp_year_of_exp<<endl;
        cout<<"isManager? "<<i.second.isManager<<endl;
        cout<<"Manager Name: "<<i.second.manager_name<<endl;
        cout<<"is Available ? "<<i.second.status<<endl;

        cout<<"-------------------------------------------------------------------"<<endl;
    }

    return 0;
}

#include<iostream>
#include<map>
#include "employees.h"
using namespace std;



map<string, Employee> my_main () {
        map<string,Employee> var;
        Employee obj[10];
        obj[0].emp_name="prateek";
        obj[0].emp_desig="ASE";
        obj[0].emp_skills={"python","java"};
        obj[0].emp_year_of_exp=0.2;
        obj[0].isManager=false;
        obj[0].manager_name="Prakash";
        obj[0].status=true;
        obj[0].project_name="NDB";

        obj[1].emp_name="tharani";
        obj[1].emp_desig="ASE";
        obj[1].emp_skills={"python","java"};
        obj[1].emp_year_of_exp=0.2;
        obj[1].isManager=false;
        obj[1].manager_name="Prakash";
        obj[1].status=true;
        obj[1].project_name="Snort";


        obj[2].emp_name="Vikram";
        obj[2].emp_desig="SE";
        obj[2].emp_skills={"python","java","C","C#"};
        obj[2].emp_year_of_exp=2;
        obj[2].isManager=false;
        obj[2].manager_name="Prakash";
        obj[2].status=true;
        obj[2].project_name="Snort";

        var.insert({"10316",obj[0]});
        var.insert({"10317",obj[1]});
        var.insert({"10318",obj[2]});
        return var;
};
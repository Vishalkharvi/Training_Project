#include <iostream>
#include <list>
#include <map>
#include "employees.h"
#include "Course_Schedule.h"
using namespace std;

class Trainer :public Employee,public Course_Schedule{
    public:
        int trainer_id;
        string trainer_name;
        // string emp_role;
        list<string> trainer_skills;
        float trainer_year_of_exp;
        string trainer_desig;
        bool availability_status;
        string manager_name;
        bool isManager;        
};

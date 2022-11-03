#include <iostream>
#include <list>
#include <map>
#include "Project.h"
#include "Course_Schedule.h"
using namespace std;

class Manager: public Project,public Course_Schedule{
    public:
        int emp_id;
        string emp_name;
        // string emp_role;
        list<string> emp_skills;
        float emp_year_of_exp;
        string emp_desig;
        bool status;
        string manager_name;
        bool isManager;

        list<string> allProjectNameWhichManagerHandles(string mananger_name);


        
};

// lets try to use trainer.h itself and make use manager_data.h
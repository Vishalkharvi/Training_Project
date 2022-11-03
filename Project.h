#include <iostream>
#include <list>
#include <map>
#include "employees.h"
using namespace std;

class Project : public Employee {
    public:
        int project_id;
        string project_name;
        string project_manager;
        list<string> getDetailsOfEmployeeOfThisProject();      
};

#include "School.c"

void showCourses(char courses[][20],int n){
    for (int i = 0; i < n; i++)
    {
        if(i == n-1){
            printf("%s\n",courses[i]);
            break;
        }
        printf("%s, ",courses[i]);
    }
}

int main()
{
    system("cls");

    //* availabel courses in school
    char courses[][20] = {"Maths","Physics","English","Computer Science","Biology","Physical Education","Chemistry","Electronics","IOT"};
    int totalCourses =9;

    //* create class of each course 
    //* showCourses(courses,totalCourses);
    Course*head = init(courses,totalCourses);

    //* Register Students
    registerStudent(head,"Ironman","Physics");
    registerStudent(head,"Ironman2","Maths");
    registerStudent(head,"Ironman3","Physics");
    registerStudent(head,"Paras","Maths");
    registerStudent(head,"Sumit","Maths");
    registerStudent(head,"Shashwat","Chemistry");
    registerStudent(head,"Inzemamul","Computer Science");
    registerStudent(head,"Sumit","Physical Education");
    registerStudent(head,"Aditya","Biology");
    registerStudent(head,"Rajan","Electronics");
    registerStudent(head,"Sam","Maths");
    registerStudent(head,"Sonam","English");
    registerStudent(head,"Samarth","Physics");
    registerStudent(head,"Samy","Physical Education");
    registerStudent(head,"Virus","Physics");
    registerStudent(head,"Sonali","Biology");
    registerStudent(head,"Maya","IOT");

    //* Generate Reports
    generateReport1(head);
    generateReport2();

    //* exporting reports to file
    exportReport1(head);
    exportReport2();
    return 0;
}

// *Complexities***********************

//? n-> No of Courses
//? m-> No of Students

//* Report-1 --> O(n + m)
//* Report-2 --> O(m)
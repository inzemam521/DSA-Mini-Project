#include "Course.c"

typedef struct School{
    char *name;
    char *courseName;
    int rollNo;
    struct School*next;
}School;

// ********global variables
int globalRollNo = 1;
School*schoolHead = NULL;

// *Utility functions
School*createSchoolNode(char name[],char courseName[]){ // O(1)
    School*node = (School*)malloc(sizeof(School));
    node->courseName = courseName;
    node->name = name;
    node->rollNo = 0;
    node->next = NULL;
    return node;
}

void insertSchoolNodeAtLast(School*last){ // O(m)
    School*node = schoolHead;
    while(1){
        if(node->next == NULL){
            break;
        }
        node = node->next;
    }
    node->next = last;
}

Course*findCourse(Course*head,char courseName[]){ //O(n)
    Course*courseNode = head;
    while (1)
    {
        if(courseNode->next == NULL && strcmp(courseNode->courseName,courseName)==1){
            return NULL;
        }
        if(strcmp(courseNode->courseName,courseName)==0){
            return courseNode;
        }
        if(courseNode->next == NULL){
            break;
        }
        courseNode = courseNode->next;
    }
    return NULL;
}

//* Register student in Report-1
void registerStudentInReport1(Course*head,char name[],char courseName[]){ //O(n+m)
    Course*courseNode = head;
    Course*matchedCourse = findCourse(head,courseName);
    if(matchedCourse == NULL){
        return;
    }
    else{
        if(matchedCourse->std == NULL){
            Student*s = createStudentNode(name,courseName);
            s->globalRollNo = globalRollNo;
            matchedCourse->std = s;
            globalRollNo++;
        }
        else{
            Student*s = createStudentNode(name,courseName);
            s->globalRollNo = globalRollNo;
            insertStudentNodeAtLast(matchedCourse->std,s);
            globalRollNo++;
        }
    }
}

void generateReport1(Course*head){ //O(n+m)
    printf("\t**************Report-1***************\n");
    Course*coureNode = head;

    while(1){
        printf("\t%s\n",coureNode->courseName);
        Student*std = coureNode->std;
        int i = 1;
        int contains = 0;

        while(1){
            if(std == NULL){
                break;
            }
            std->rollNo = i;
            printf("\t    %d) %s\n",i,std->name);
            std = std->next;
            contains =1;
            i++;
        }
        if(contains==0){
            printf("\t    None\n");
        }

        if(coureNode->next == NULL){
            break;
        }

        coureNode = coureNode->next;
        printf("\n");
    }
    printf("\n");
}

//* Register student in Report-2
void registerStudentInReport2(char name[],char courseName[]){// O(m)
    if(schoolHead== NULL){
        schoolHead = createSchoolNode(name,courseName);
    }
    else{
        School*node = createSchoolNode(name,courseName);
        insertSchoolNodeAtLast(node);
    }
}

void generateReport2(){// O(m)
    printf("\t**************Report-2***************\n");
    School*node = schoolHead;
    if(node==NULL){
        printf("\t\t-------None--------\n");
        return;
    }
    int i=1;
    while(1){
        node->rollNo=i;
        printf("\t%d) %s -- %s\n",i,node->name,node->courseName);

        if(node->next == NULL){
            break;
        }

        node = node->next;
        i++;
    }
}

//* Calling both functions together (Report-1 and Report-2)
void registerStudent(Course*courseHead,char name[],char courseName[]){
    registerStudentInReport1(courseHead,name,courseName);

    //! check if subject is availabel or not
    Course*node = courseHead;
    int i = 0;
    while(1){
        if(strcmp(node->courseName,courseName)==0){
           registerStudentInReport2(name,courseName);
           return;
        }
        if(node->next == NULL){
            break;
        }
        node = node->next;
        i++;
    }
}

//* export content to a file
//* Report-1
void exportReport1(Course*head){
    FILE*file = fopen("Report-1.txt","w");
    fprintf(file,"%s","**************Report-1***************\n");
    Course*coureNode = head;
    while(1){
        fprintf(file,"%s\n",coureNode->courseName);
        Student*std = coureNode->std;
        int i = 1;
        int contains = 0;
        while(1){
            if(std == NULL){
                break;
            }
            std->rollNo = i;
            fprintf(file,"\t %d) %s\n",i,std->name);
            std = std->next;
            contains =1;
            i++;
        }
        if(contains==0){
            fprintf(file,"\t%s","    None\n");
        }

        if(coureNode->next == NULL){
            break;
        }

        coureNode = coureNode->next;
        fprintf(file,"%s","\n");
    }
    fclose(file);
}

//* Report-2
void exportReport2(){
    FILE*file=  fopen("Report-2.txt","w");
    fprintf(file,"%s","**************Report-2***************\n");
    School*node = schoolHead;
    if(node==NULL){
        fprintf(file,"%s","\t\t-------None--------\n");
        return;
    }
    int i=1;
    while(1){
        node->rollNo=i;
        fprintf(file,"\t%d) %s -- %s\n",i,node->name,node->courseName);

        if(node->next == NULL){
            break;
        }

        node = node->next;
        i++;
    }
    fclose(file);
}

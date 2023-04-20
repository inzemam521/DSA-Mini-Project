#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Student.c"

typedef struct Course{
    char *courseName;
    Student*std;
    struct Course*next;
}Course;

//* Utility functions
Course*createCourseNode(Student*std,char *courseName){//O(1)
    Course*node = (Course*)malloc(sizeof(Course));
    node->std =std;
    node->courseName=courseName;
    node->next = NULL;
    return node;
}

void insertCourseNodeAtLast(Course*head,Course*last){  //O(n)
    Course*node = head;
    while(1){
        if(node->next == NULL){
            break;
        }
        node = node->next;
    }
    node->next = last;
}

//* Creating all course linked list and joining all together
Course*init(char courses[][20],int length){ //O(n)
    Course*head = createCourseNode(NULL,courses[0]);
    for (int i = 1; i < length; i++)
    {
        Course*node = createCourseNode(NULL,courses[i]);
        insertCourseNodeAtLast(head,node);
    }
    return head;
}



typedef struct Student{
    char *name;
    char *courseName;
    int rollNo;
    int globalRollNo;
    struct Student*next;
}Student;

//* Utility functions
Student*createStudentNode(char *name,char *coureName){ //O(1)
    Student*node = (Student*)malloc(sizeof(Student));
    node->name = name;
    node->courseName = coureName;
    node->globalRollNo =0;
    node->rollNo =0;
    node->next = NULL;
    return node;
}

void insertStudentNodeAtLast(Student*head,Student*last){ //O(m)
    Student*node = head;
    while(1){
        if(node->next == NULL){
            break;
        }
        node = node->next;
    }
    node->next = last;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


typedef struct {
    char name[100];
    char id[100];
} Student;

//===== Declare Global Variables / Functions here if required =====


int compareStudents(const void *a, const void *b) {
    return strcmp(((Student*)a)->name, ((Student*)b)->name);
}

int main() {
    char names_str[1000];
    char ids_str[1000];

    fgets(names_str, sizeof(names_str), stdin);
    fgets(ids_str, sizeof(ids_str), stdin);

    //===== Declare Local Variables / Functions here if required =====


    char *name_token;
    char *id_token;
    Student students[100];
    int num_students = 0;

    name_token = strtok(names_str, ",");
    id_token = strtok(ids_str, ",");

    while (name_token != NULL && id_token != NULL) {
        strcpy(students[num_students].name, name_token);
        strcpy(students[num_students].id, id_token);
        num_students++;

        name_token = strtok(NULL, ",");
        id_token = strtok(NULL, ",");
    }

    //===== Write Your Logic Here =====
    

}
#include "student.h"

Student *createStudents(int n) {
   return (Student *)malloc(sizeof(Student) * n);
}

Student newStudent(char *name, int id) {
   char *newName = (char*)malloc(sizeof(char) * strlen(name));
   strcpy(newName, name);
   Student new = {.name = newName, .id = id};
   return new;
}

void appendStudent(Student *students, int index, Student student) {
   students[index] = student;
}

void printStudents(FILE *output, Student *students, int length) {
  for (int i = 0; i < length; i++) {
    fprintf(output, "name: %s id: %d\n", students[i].name, students[i].id);
  }
}

void freeStudents(Student *students, int length) {
   for (int i = 0; i < length; i++) {
      free(students[i].name);
   }
  free(students);
}

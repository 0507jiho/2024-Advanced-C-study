#include "sort.h"

int compareByName(Student a, Student b) {
   return strcmp(a.name, b.name);
}

int compareById(Student a, Student b) {
   return a.id - b.id;
}

void quickSort(Student *students, int length, int (*compare)(Student, Student)) {
   for (int i = length; i > 1; i--) {
      for (int j = 0; j < i - 1; j++) {
         if (compare(students[j], students[j+1]) > 0) {
            swap(&students[j], &students[j+1]);
         }
      }
   }
}
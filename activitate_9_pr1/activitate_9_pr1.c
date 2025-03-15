#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char nume[50];
    float note[5];
};

int main()
{
    struct Student student;

    printf("Informations about students: \n");
    printf("The name of the student is : ");
    scanf("%s", student.nume);

    for(int i=0; i<5; i++)
    {
        printf("NOte[%d]:",i+1);
        scanf("%f", &student.note[i]);
    }
      printf("The notes of the student are:");

      for(int i=0; i<5; i++)
      {
          printf("%.2f  ", student.note[i]);
      }
    return 0;
}

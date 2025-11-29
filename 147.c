//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e, e_read;
    FILE *fp;

    // ----- Write to binary file -----
    fp = fopen("employee.dat", "wb"); // binary write
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    // Input employee data
    printf("Enter Name ID Salary: ");
    scanf("%s %d %f", e.name, &e.id, &e.salary);

    // Write structure to binary file
    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);

    printf("Employee data stored successfully.\n");

    // ----- Read from binary file -----
    fp = fopen("employee.dat", "rb"); // binary read
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    fread(&e_read, sizeof(e_read), 1, fp);
    fclose(fp);

    // Display stored data
    printf("\nData read from file:\n");
    printf("Name: %s | ID: %d | Salary: %.2f\n",
           e_read.name, e_read.id, e_read.salary);

    return 0;
}

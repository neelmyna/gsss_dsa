#include <stdio.h>

void printStudentDetails(struct Student *);

struct Address {
    int doorNumber;
    char area[32];
    char city[32];
    int pin;
};

struct Student
{
    char name[32];
    int marks;
    char usn[11];
    long long int phoneNumber;
    struct Student *s;
};

int main()
{
    struct Student s1 = {"", 0, "", 0};
    struct Student s2 = {"Nithin", 88, "4VV06IS019", 9480273090};
    strcpy(s1.name, s2.name); // s1.name = s2.name;
    s1.marks = s2.marks;
    strcpy(s1.usn, s2.usn); // s1.usn = s2.usn;
    s1.phoneNumber = s2.phoneNumber;
    s1 = s2;
    printf("Student1 details:\nName=%s, Marks=%d, USN=%s, PhoneNumber=%lld \n", s1.name, s1.marks, s1.usn, s1.phoneNumber);
    printStudentDetails(&s2);
}

void printStudentDetails(struct Student *ptr)
{
    printf("Student2 details:\nName=%s, Marks=%d, USN=%s, PhoneNumber=%lld \n", ptr->name, (*ptr).marks, ptr->usn, ptr->phoneNumber);
}
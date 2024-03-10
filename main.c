#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

typedef struct student{
    char* name;
    int age;
    char* city;
} student;

char* read_line(int fd){
    char c;
    int n = read(fd, &c, 1); 
}

student* load_csv_data(char* file_name){
    int fd = open(file_name, O_RDONLY);

    close(fd);
}
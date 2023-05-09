#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>

int _putchar(char c);
int _strlen(char *s);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void textfile_copier(int cpied_fl, int fl_cp, char *first_fl, char *snd_fl);
void print_elf_header(Elf64_Ehdr eh, char *filename __attribute__((unused)));
void print_usage(char *program_name);

#endif

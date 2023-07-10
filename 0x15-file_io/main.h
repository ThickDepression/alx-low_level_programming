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
void elf_checker(unsigned char *e_ident);
void magic_printer(unsigned char *e_ident);
void class_printer(unsigned char *e_ident);
void data_printer(unsigned char *e_ident);
void version_printer(unsigned char *e_ident);
void osabi_printer(unsigned char *e_ident);
void abi_printer(unsigned char *e_ident);
void type_printer(unsigned int e_type, unsigned char *e_ident);
void entry_printer(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);


#endif

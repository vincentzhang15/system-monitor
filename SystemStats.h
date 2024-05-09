/**
 * Header file for reporting system usage statistics concurrently
 * on linux machines.
 *
 * Created: 2024-03-15
 * Updated: 2024-04-08
 * Author: Vincent Zhang
*/

#include <stdio.h> // printf, perror, fgets, stdin, stdout, snprintf,
                   // FILE, fgets, fclose, fscanf
#include <stdlib.h> // exit, EXIT_FAILURE, strtol, atoi, malloc, free
#include <string.h> // strstr, strcat, strcspn, strcmp

#include <unistd.h> // sleep, read, write, pipe, fork, close
#include <utmp.h> // setutent, getutent, endutent, USER_PROCESS.
                  // (Users information).
#include <getopt.h> // struct option, getopt_long, no_argument,
                    // optional_argument. (Command-line argument parsing).

#include <sys/utsname.h> // struct utsname, uname. (System/Machine information).
#include <sys/sysinfo.h> // sysinfo, struct sysinfo. (Uptime and memory usage).
#include <sys/resource.h> // struct rusage, getrusage, RUSAGE_SELF

#include <signal.h> // signal, SIGINT, SIGTSTP, SIG_IGN, SIGCHLD


double bytes_to_gb(unsigned long x);
void move_cursor(char *str, int n_lines);
void erase_line(char *str);
void fetch_latest_sysinfo(struct sysinfo *sys_info);
void writefd(int fd, char *s);

void print_memory_usage(int fd, int flag_graphics, double prev_virtual,
                        double total_phys, double total_virtual);
void print_user_usage(int fd, int flag_sequential);
int get_cores();
void print_cpu_usage(int fd, int flag_graphics, int flag_sequential,
                     long tdelay, int i);

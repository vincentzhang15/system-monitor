/**
 * Functions for reporting system usage statistics concurrently
 * on linux machines.
 *
 * Created: 2024-03-15
 * Updated: 2024-04-08
 * Author: Vincent Zhang
*/

#include "SystemStats.h"

//########################### HELPER FUNCTIONS ###########################//
/**
 * bytes_to_gb - Converts integral value in bytes to gigabytes.
 * @x: The given integral value, which must be in bytes.
 * @return: Converted value in gigabytes.
*/
double bytes_to_gb(unsigned long x) {
    // [Code Private - Contact to View]
}

/**
 * move_cursor - Move the cursor of the terminal down or up <n_lines> number
 *               of lines by storing escape character in <str>.
 * @str: String to store the move cursor character to.
 * @n_lines: Number of lines to move up or down, if positive down, if
 *           negative up.
 * @return: void
*/
void move_cursor(char *str, int n_lines) {
    // [Code Private - Contact to View]
}

/**
 * erase_line - Erase the line the cursor is at in the terminal.
 * @str: Destination to store erase character to.
 * @return: void
*/
void erase_line(char *str) {
    // [Code Private - Contact to View]
}

/**
 * fetch_latest_sysinfo - Fetch most up-to-date system information.
 * @sys_info: Pointer to the sysinfo struct defined at the function call to
 *            store updated system information values.
 * @return: void
*/
void fetch_latest_sysinfo(struct sysinfo *sys_info) {
    // [Code Private - Contact to View]
}

/**
 * writefd - Write given string to given fd.
 * @fd: The file descriptor to write to.
 * @s: The string to write.
 * @return void
*/
void writefd(int fd, char *s) {
    // [Code Private - Contact to View]
}
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^//

//########################### MEMORY USAGE ###########################//
/**
 * print_memory_usage - Write the memory usage information to pipe.
 * @fd: File descriptor to write data to.
 * @flag_graphics: Whether to display graphics. Display graphics if 1.
 * @prev_virtual: Previous total virtual memory usage initialized to -1.
 * @total_phys: Current total physical memory.
 * @total_virtual: Current used total memory.
 * @return: void
*/
void print_memory_usage(int fd, int flag_graphics, double prev_virtual,
                        double total_phys, double total_virtual) {
    // [Code Private - Contact to View]
}
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^//


//########################### USER USAGE ###########################//
/**
 * print_user_usage - Write user usage information to pipe.
 * @fd: File descriptor to write data to.
 * @flag_sequential: Output in sequential format if 1, non-sequential if 0.
 * @return: void
*/
void print_user_usage(int fd, int flag_sequential) {
    // [Code Private - Contact to View]
}
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^//


//########################### CPU USAGE ###########################//
/**
 * get_cores - Find and return number of cores.
 * @return: The number of cores of the machine CPU.
*/
int get_cores() {
    // [Code Private - Contact to View]
}

/**
 * get_cpu_total_idle - Get total CPU time and idle time from /proc/stat.
 * @result: Where the result of computations of this function will be stored.
 *          Total CPU time is at index 0 and idle CPU time is at index 1
 *          of <result>.
 * @return: void
*/
void get_cpu_total_idle(unsigned long long *result) {
    // [Code Private - Contact to View]
}

/**
 * get_cpu_usage - Compute the CPU usage by taking two samples of CPU total and
 *                 idle time one second apart.
 * @tdelay: Sampling frequency in seconds.
 * @return: Percentage CPU usage.
*/
double get_cpu_usage(long tdelay) {
    // [Code Private - Contact to View]
}

/**
 * print_cpu_usage - Write CPU usage information to pipe.
 * @fd: File descriptor to write data to.
 * @flag_graphics: Displays graphics if flag is 1, otherwise no graphics.
 * @flag_sequential: Sequential output if flag is 1, otherwise in-place.
 * @tdelay: Sampling frequency in seconds.
 * @i: The iteration number in the loop through the samples.
 * @return: void
*/
void print_cpu_usage(int fd, int flag_graphics, int flag_sequential,
                                                           long tdelay, int i) {
    // [Code Private - Contact to View]
}
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^//

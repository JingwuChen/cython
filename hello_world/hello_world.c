/*
 * =====================================================================================
 *
 *       Filename:  hello_world.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2018/09/12 00時12分28秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
/*filename: hello_world.c */
#include <stdio.h>
#include "hello_world.h"

void print_hello_world(void)
{
    printf("hello world...");
}

int main(int argc, char *argv[])
{
    print_hello_world();
    return (0);
}


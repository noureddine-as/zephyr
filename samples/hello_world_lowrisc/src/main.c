/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

// #include <zephyr.h>
// #include <sys/printk.h>

// void main(void)
// {

// 	int a = 221;
// 	int b = 564;

// 	int c;


// 	c = (a+b)*a + b;


// 	return c;

// 	// printk("Hello World! %s\n", CONFIG_BOARD);
// }


char text[] = "Vafgehpgvba frgf jnag gb or serr!";

void foo()
{
    int i = 0;
    while (text[i]) {
        char lower = text[i] | 32;
        if (lower >= 'a' && lower <= 'm')
            text[i] += 13;
        else if (lower > 'm' && lower <= 'z')
            text[i] -= 13;
        i++;
    }
}


volatile int wait = 1;
int main(void)
{
    while(wait)
        ;

    // printf("Old text: %s \n", text);
    foo();
    // printf("New text: %s \n", text);

    while(!wait)
        ;
    
    return 0;
}


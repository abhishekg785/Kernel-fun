/*
 * hello-world.c - simply prints hello world
 */

#include<linux/module.h>   /* every module require it  */
#include<linux/kernel.h>   /* for using KERN_DEBUG */

int init_module(void){
	printk(KERN_DEBUG "Hello World!\n");

	/*
	 * non zero return means failed to load 
	 */

	return 0;
}


void cleanup_module(void){
	printk(KERN_DEBUG "Unloading module!\n");
}



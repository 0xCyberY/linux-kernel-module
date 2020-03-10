#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>
MODULE_LICENSE("GPL");
int lkmfile_init(void)
{
	printk(KERN_INFO"hello world\n");
return 0;
}

void lkmfile_exit(void)
{
	printk(KERN_INFO"Goodby world\n");
}
module_init(lkmfile_init);
module_exit(lkmfile_exit);


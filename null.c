#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
int simple_init(void){
	printk(KERN_INFO "SAY HI TO GET DESTROYED\n");
	int count = 0;
	char* pnt;
        loop:
	pnt = (char*) count;
	*pnt = 'f';
	BUG();
	count++;
	if(count!=10) goto loop;
	return 0;
}
void simple_exit(void){
	printk(KERN_INFO "IT IS NEVER GOING TO COME\n");
}
module_init(simple_init);
module_exit(simple_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("DESTRUCTION MODULE");
MODULE_AUTHOR("RISHABH");

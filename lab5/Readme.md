![img1](https://user-images.githubusercontent.com/78512320/148105491-6d05fd5a-9e1d-42e1-8e31-88ae74245c6a.png)

![img2](https://user-images.githubusercontent.com/78512320/148105510-fa194e71-4f28-445f-9bf7-a559fdbcb435.png)


![img3](https://user-images.githubusercontent.com/78512320/148105539-f6905153-51ea-49c1-8b48-0d6aa81fcc3d.png)



modinfo hello.ko

insmod hello.ko amount=7

insmod hello.ko amount=8

insmod hello.ko amount=12

cat sys/module/hello/parameters/amount

rmmod hello.ko

![img4](https://user-images.githubusercontent.com/78512320/148105569-a09c8eec-1d0d-4b95-af52-2c008a1528f7.png)


**hello.c**

#include <linux/init.h>

#include <linux/module.h>

#include <linux/moduleparam.h>

#include <linux/printk.h>

MODULE_AUTHOR("Tribunskaya Karolina");

MODULE_DESCRIPTION("Lab5");

MODULE_LICENSE("Dual BSD/GPL");

static int amount = 1;

module_param(amount, uint, S_IRUGO);

MODULE_PARM_DESC(times, "Amount of outputting Hello worlds");

static int __init hello_init(void)

{

uint i = 0;

  if(amount == 0)

{

printk(KERN_WARNING "Entered parameter equals 0");

}

else if(amount >= 5 && amount <= 10)

{

printk(KERN_WARNING "Entered parameter is between 5 and 10");

}

else if(amount > 10)

{

printk(KERN_ERR "Entered parameter is bigger than 10");

return -EINVAL;

}

  for(i=0; i<amount; i++)

{

printk(KERN_EMERG "Hello, world!\n");

}

  printk(KERN_INFO "Amount: %d\n", amount);

  return 0;

}

static void __exit hello_exit(void)

{

/* Do nothing here right now */

}

module_init(hello_init);

module_exit(hello_exit);

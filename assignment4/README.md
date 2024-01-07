 - Block Diagram:
 - Code:
   ```C
   //#include <stdio.h>
   void sleep(int seconds)
   {
        int i;
        for (i = 0; i < seconds * 1000000; i++)
        {
                asm("nop");
        }
   }
   int main()
   {
   int LED_GPIO = 1;
   int LED_STATUS = 0;
   while(1)
   {
        if (LED_GPIO == 1)
        {
                LED_STATUS = 1;
		// printf("ON");
                sleep(1);
                LED_STATUS = 0;
		// printf("OFF");
                sleep(1);
                LED_GPIO = 0;
        }
        else
        {
                LED_STATUS = 0;                
                LED_GPIO = 1;
        }
   }
   return 0;
   }```
 - Commands:
 - Unique instructions:


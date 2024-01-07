Blinky will use an RV32 processor to turn an LED ON/OFF.

 - Block Diagram:
	 - The following is the block diagram 
	![s2](https://github.com/haran2001/VSD-riscv/assets/56040092/ea6854c3-d6f0-405c-9b9d-210043a040a7)

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
- The following command was used to generate the RV32 assembly.
  ![s3](https://github.com/haran2001/VSD-riscv/assets/56040092/38d17f63-c2e1-4fbe-9649-d29b0f253af5)
  
- Unique instructions:
- A python script was used to find and display all the unique instructions used in the code. 
  ![s1](https://github.com/haran2001/VSD-riscv/assets/56040092/296abf87-5fd0-4b93-911d-19f47a01972a)
  

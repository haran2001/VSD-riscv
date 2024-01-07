# Using readlines()
file1 = open('blinky32_noprintf.txt', 'r')
Lines = file1.readlines()
 
count = 0
# Strips the newline character
instructions = []

for line in Lines:
    line = line.split('\t')
    if len(line) > 3:
        instructions.append(line[2])

instructions = list(set(instructions))
print("The following instructions were used: ", instructions)
print("There are ", len(instructions), "unique instructions")
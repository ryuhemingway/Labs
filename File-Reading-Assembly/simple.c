

// simple c file


int main() {
    int x = 10;
    x = x + 5;
    return 0;
}

### Discussion
* What are some of the assembly commands generated? 
Some of the assembly lines generated are as follows: mov, sub, add, str, ldr, ret
* Was there more than you expected? 
Yes, because with only 3 real lines of code, we were able to generate a long list of assembly commands.
* If you run `gcc -S shift.c`. Do you notice anything unusual about the generated assembly?
Yes, when we run this command, we get an entire new list in simple.s which has substantially more assembly commands generated.
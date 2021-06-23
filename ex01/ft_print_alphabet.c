#include <unistd.h> 

void ft_print_alphabet(void);

int main() {
    ft_print_alphabet();
    return 0;
}

void ft_print_alphabet(void) 
{
    char *alphabet; 
    alphabet = "abcdefghijklmnopqrstuvwxyz";
    
    write(1, &*alphabet, 26);
}

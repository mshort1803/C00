#include <unistd.h> 


void ft_putchar(char c);

int main(int argc, char** argv) {
    ft_putchar('f');
}

void ft_putchar(char c) {
    write(1, &c, 1);
}
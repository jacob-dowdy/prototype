#include <cs50.h>
#include <stdio.h>

void print_name(string name);

int main(void)
{
    printf("Hi! What's your name? ");
    string s = get_string();
    print_name(s);
}

void print_name(string name)
{
    printf("Hello, %s\n", name);
}

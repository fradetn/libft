int ft_isalpha(int c)
{
    if ((c > 64 && c < 91) || (c > 96 && c < 123))
    {
        return (1024);
    }
    return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int main (int argc, char **argv)
{
    (void) argc;
    printf("%d\n", ft_isalpha(argv[1][0]));
    printf("%d\n", isalpha(argv[1][0]));
}*/
#include <cstdio>

int main(int argc, char *argv[])
{
    fprintf(stderr, "Our fancy game launcher was called with %d arguments.\nThese are:\n", argc);
    for (int index = 1; index < argc; ++index)
    {
        fprintf(stderr, "    %s\n", argv[index]);
    }

    return 0;
}

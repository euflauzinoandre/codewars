#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

size_t count_sheep(const bool sheep[/* count */], size_t count)
{
    size_t total_sheeps = 0;
    for (size_t i = 0; i < count; i++){
        if (sheep[i] == true)
            total_sheeps++;
    }
    return total_sheeps;
}

// int main(void)
// {   
//     size_t count = 0;
//     const bool sheep[] = { true, true, true, false, true, true, true, true, true, false, true, false, true, false, false, true, true, true, true, true, false, false, true, true };
//     size_t size = sizeof(sheep) / sizeof(sheep[0]);
//     count = count_sheep(sheep, size);
//     printf("%d\n", count);
//     return 0;
// }
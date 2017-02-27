# Practice in C
## Compile with this argument  `-lcs50`
### Example:
```gcc src/sigma1.c -lcs50 -o sigma```
## Useful operators
```c
#include <stdlib.h>
void f(void)
{
    int *x = malloc(10 * sizeof(int)); // take memmory from heap
    x[9] = 0;
    free(x); // free mammory!
}
int main(void)
{
    f();
    free
    return 0;
}
```
| Text |
|------|
| initialized variables |
| uninitialized variables |
| heap |
||
| stack |

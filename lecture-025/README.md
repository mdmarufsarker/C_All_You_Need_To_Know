# [Assignment Operators in C](https://youtu.be/tzLD2DxwrU4?si=-a0H-KvL_tsrWEYR)

## Assignment Operators

```md
| Operator | Example | Equivalent to |
| -------- | ------- | ------------- |
| =        | x = 5   | x = 5         |
| +=       | x += 5  | x = x + 5     |
| -=       | x -= 5  | x = x - 5     |
| *=       | x *= 5  | x = x * 5     |
| /=       | x /= 5  | x = x / 5     |
| %=       | x %= 5  | x = x % 5     |
```

## Code Example

```c
#include <stdio.h>

int main(){
    int x = 5;
    x += 5;
    printf("%d\n", x);
    x -= 5;
    printf("%d\n", x);
    x *= 5;
    printf("%d\n", x);
    x /= 5;
    printf("%d\n", x);
    x %= 5;
    printf("%d\n", x);
    return 0;
}
```
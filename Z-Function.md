# Functions

- Why function before what function. Why need of function in the programming.

```c
// check if the string contains the letter 'a'

#include "stdio.h"

int main() {
  char str[10] = "blue";
  char flag = 'n'; // n -> no, y -> yes

  for (int i=0; i < 10; i++) {
    if (str[i] == 'a') {
      flag = 'y';
    }
  }

  // if flag is 'y' it means string contains 'a' else not.
  if (flag == 'y') {
    printf("The string contain letter 'a'.\n");
  } else {
    printf("The string does not contain letter 'a'.\n");
  }
}

// let's say we have to perform this operations for bunch of string (str1, str2, str3, ...) so we have to write these all code mutiple times.

// Here comes the concept of function. by using function we can do the check for all the strings by calling a check funtion.

```

- here is the implementation of the function in this type of problem

```c
#include "stio.h"
#include "string.h"

char checkForA(char str[]);

int main() {
  char str[10] = "blue";

  char flag = checkForA(str);

  if (flag == 'y') {
    printf("The string contain letter 'a'.\n");
  } else {
    printf("The string does not contain letter 'a'.\n");
  }

  return 0;
}

char checkForA(char str[]) {
  int n = strlen(str);

  for (int i=0; i<n; i++) {
    if (str[i] == 'a') {
      return 'y';
    }
  }

  return 'n';
}
```

- Retrun type, function name, parameters, etc.<br>
  - Parameters are called parameters when we are defining function. while calling function it is called arguments.
  - Number of parameters of a function can be 0 (no arguments function).
  - Function return type can be void. in this case we can skip return statement or write only `return;`

```c
// function syntex

retrunType functionName(...parameters) {
  functionDefination

  return somethingWhichIsOfTypeOfReturnType
}

// for example a function to add two ints

int add(int a, int b) {
  int sum = a + b;
  return sum;
}
```

- Calling a function

```c
// syntex for calling a function
functionName(...arguments);

// or if we want to store the ouput of the function into any variable so the syntex will be
type varName = funtionName(...arguments);
// here type should be of returnType
```

- calling a void funtion.

```c
functionName(...arguments);
```

- calling a funtion with no parameters.

```c
functionName();
// or if we want to store the value
type varName = functionName();
```

- example of calling add funtion (we defined above).

```c
int sum = add(5, 10);
// here sum is the returned value from the function and 5 is the arg 'a' and 10 is arg 'b'.
```

## Partial declaration of function

```c
#include "stdio.h"

int add(int a, int b);

int main() {
  int s = add(5, 10);
  printf("%d", s);

  return 0;
}

int add(int a, int b) {
  int sum = a + b;
  return sum;
}
```

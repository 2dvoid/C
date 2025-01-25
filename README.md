## String:
A string is a sequence of characters that ends with a terminating character '\0'.

**Usage:**
```C
#include <stdio.h>
#include <string.h>

void getString(char *arr, int n);

int main () {
	char name[100];
	printf ("Name: ");
	getString(name, sizeof(name));
	printf ("Hello Mr. %s. How are you Today?\n", name);
}

void getString(char *arr, int n){
	// Read the string
	fgets(arr,n,stdin);
	//Find the Newline and replace it with Null Character
	arr[strcspn(arr,"\n")]='\0';
}
```

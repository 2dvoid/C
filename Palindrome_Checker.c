#include <stdio.h>
#include <string.h>

void getString(char *arr, int n);

int main () {
	char name[100];
	printf ("word: ");
	getString(name, sizeof(name));
	int len = strlen(name);
	int n = len/2;
	int matched = 1;
	for (int i=0; i<=n; i++) {
		if (name[i] != name[len-i-1]) matched = 0;
	} 
	if (matched) printf ("Palindrome!\n");
	else printf ("Not Palindrome :(\n");
}

void getString(char *arr, int n){
	// Read the string
	fgets(arr,n,stdin);
	//Find the Newline and replace it with Null Character
	arr[strcspn(arr,"\n")]='\0';
}

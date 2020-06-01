#include<stdio.h>
#include <string.h> 
void reverseString(char* str) 
{ 
    int l, i; 
    char *front_ptr, *end_ptr, ch; 
    l = strlen(str); 
    front_ptr = str; 
    end_ptr = str; 
    for (i = 0; i < l - 1; i++) 
        end_ptr++; 
    for (i = 0; i < l / 2; i++) { 
  
        // swap character 
        ch = *end_ptr; 
        *end_ptr = *front_ptr; 
        *front_ptr = ch; 
  
        // update pointers positions 
        front_ptr++; 
        end_ptr--; 
    } 
} 
  
// Driver code 
int main() 
{ 
  
    char str[100] ;
    gets(str);
  
    // Reverse the string 
    reverseString(str); 
  
    // Print the result 
    puts(str);
  
    return 0; 
} 

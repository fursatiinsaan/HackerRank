/* Write a program that takes two lowercase characters and prints how many letters apart they are in the alphabet.

Input Format

Two lowercase characters char1 and char2 separated by space.

Constraints

Input letters are lowercase a–z
char1 always comes before char2 in alphabetical order
Use ASCII arithmetic only
Output Format

Single line printing the result as:
The distance between {char1} and {char2} is {value} 

Sample Input 0
a c
Sample Output 0

The distance between a and c is 2

Sample Input 1
b f
Sample Output 1

The distance between b and f is 4
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  // solution starts from here 
    char char1;
    char char2;
    scanf("%c %c", &char1, &char2);
    int distance= abs(char2 - char1);
    printf("The distance between %c and %c is %d",char1 ,char2, distance);
    
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#define PIE 3.14

int main(void){
	float radius;
	printf("Enter the radius of your circle: ");
	scanf("%f", &radius);
	float ans = PIE * (radius * radius); 
	printf("The area of your circle is %f\n",ans);
	return 0;
}
/*
// PIE R squared 
## Assignment 4
Prompt the user to input the length of a radius and then print the area of the user's circle to the terminal.

Extra credit: Use the `#define` feature of C to assign the value `3.14` to `PIE`.

## Example Output
```terminal_sessionls
tokyo:~/LearningC/ # ./assignment4                                  
Enter the radius of your circle: 12.34
The area of your circle is 478.145386
```
*/

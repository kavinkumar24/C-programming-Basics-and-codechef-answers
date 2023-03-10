/////////////////////////////Course Registration/////////////////////////////

/* Problem
There is a group of N friends who wish to enroll in a course together. The course has a maximum capacity of 
M students that can register for it. If there are K other students who have already enrolled in the course, determine if it will still be possible for all the N friends to do so or not.

Input Format
The first line contains a single integer T - the number of test cases. Then the test cases follow.
Each test case consists of a single line containing three integers N, M and K - the size of the friend group, the capacity of the course and the number of students
already registered for the course.*/



/////////////////////////////////////Solution////////////


#include <stdio.h>
int main(void) {
	
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    int d = b - c;
	    if(a<=b && a<=d){
	        printf("Yes\n");
	    }
	    else{
	        printf("NO \n");
	    }
	}
	return 0;
}

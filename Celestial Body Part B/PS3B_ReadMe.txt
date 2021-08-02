/**********************************************************************
 *  N-Body Simulation ps3b-readme.txt template
 **********************************************************************/

Name: Tarpan Patel
Hours to complete assignment: 7 hrs

/**********************************************************************
 *  Briefly discuss the assignment itself and what you accomplished.
 **********************************************************************/
In this assignment, the goal was to have the planets rotate around the sun.
I was able to get the planets to rotate, given starting point for each particle
from a file. 



 /**********************************************************************
 *  Discuss one or more key algorithms, data structures, or 
 *  OO designs that were central to the assignment.
 **********************************************************************/
To figure out the location and speed of each planet at certain time, we had to 
calculate the net force. Along with x & y cordinate force, acceleration, velocity.
I used vector to store smart pointers. 


/**********************************************************************
 *  Briefly explain the workings of the features you implemented.
 *  Describe if and how do you used the smart pointers 
 *  Include code excerpts.
 **********************************************************************/
Giving a file to start with, I was able to revolve the planets around the sun.

I used smart pointers to create new particles and storing each pointer into
an vector. 


/**********************************************************************
 *  List whatever help (if any) you received from the instructor,
 *  classmates, or anyone else.
 **********************************************************************/
I didn't receive any help from tutor or classmate.

/**********************************************************************
 *  Describe any serious problems you encountered.                    
 **********************************************************************/
I encountered 2 problems. First problem was how to use the overloading output operator to print particles properties. 

/**********************************************************************
 *  List any other comments here.                                     
 **********************************************************************/
 All gif files and planets.txt file must be in the same directory for the program to 
Able to read it. When the time runs out and the sfml window closes, another window will open given current state of the planets. 
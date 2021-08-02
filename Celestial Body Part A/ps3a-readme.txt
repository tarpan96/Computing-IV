/**********************************************************************
 *  N-Body Simulation ps3a-readme.txt template
 **********************************************************************/

Name: Tarpan Patel 
Hours to complete assignment: 5 - 6hrs

/**********************************************************************
 *  Briefly discuss the assignment itself and what you accomplished.
 **********************************************************************/

For this assignment, I had to use SFML libraries for 
to create an Solar System. I couldn't get the code to work to get exact output 
as specified. 



  /**********************************************************************
 *  Discuss one or more key algorithms, data structures, or 
 *  OO designs that were central to the assignment.
 **********************************************************************/
I used overloading operator to read in file to create new planets. 


/**********************************************************************
 *  Briefly explain the workings of the features you implemented.
 *  Describe if and how do you used the smart pointers 
 *  Include code excerpts.
 **********************************************************************/
I have a vector that holds shared pointers and seperate pointer. The separate
shared pointer is used just to create an new object (in this case new planet), and then once the planet
is created, I had the separate pointer into the vector. 

 separate shared pointer: std::shared_ptr<CelestialBody> planet(new CelestialBody(radius));
 vector of shared pointer: std::vector<std::shared_ptr<CelestialBody> > SolarSystem;


/**********************************************************************
 *  List whatever help (if any) you received from the instructor,
 *  classmates, or anyone else.
 **********************************************************************/
I didn't receive any help.
/**********************************************************************
 *  Describe any serious problems you encountered.                    
 **********************************************************************/

I ran to a problem where I wouldn't load image into texture becuase my planetName variable 
was empty but I was able to get the name of the planet in the universe class. So this took me a while. 
My second problem, is that I can't figure out how to spread out the planets. They are still in the center and I couldn't figure out what the problem is. The planets are all loaded but are hiding behind the sun. 


/**********************************************************************
 *  List any other comments here.                                     
 **********************************************************************/
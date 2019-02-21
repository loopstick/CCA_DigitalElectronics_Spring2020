## Debugging
   - Troubleshooting
     - Figuring out how to make it work when it’s not working

## Software
  - Make sure you understand what is going on
    - use [Arduino Language Reference](https://www.arduino.cc/reference/en/) to be sure you understand how functions work and are using the correct syntax
    - if you are getting compile errors try to understand what is causing the error
      - error messages can be difficult to understand but they often point out exactly what's wrong. 
      - google the exact error message - sometimes you will find a solution
    - Add println() to display values and to report on stage in processing:
    
				Serial.print("before loop, sensor value is ");
				Serial.println(sensorValue);
				for (int i = 200, i > 0, i--)
				{
				Serial.print("inside loop, i is ");
				Serial.println(i);
				// other stuff happens
				}
				Serial.print("after loop, sensor value is ");
				Serial.println(sensorValue);
        
     - No serial monitor? Use LEDs to indicate what’s going on:
           
                   digitalWrite(redLED, HIGH) //before loop
				digitalWrite(greenLED, LOW) //not in loop
				digitalWrite(yellowLED, LOW) //not after loop
				delay(50); // just enough to see
				for (int i = 200, i > 0, i--)
				  {
				  digitalWrite(redLED, LOW) //not before loop
				  digitalWrite(greenLED, HIGH) // in loop
				  digitalWrite(yellowLED, LOW) //not after loop
				  delay(50); // just enough to see
				  // other stuff happens
				  }
				digitalWrite(redLED, LOW) //not before loop
				digitalWrite(greenLED, LOW) // not in loop
				digitalWrite(yellowLED, HIGH) // after loop
				delay(50); // just enough to see
        
	- Problems with libraries
	  - Ideally, confirm the library works with the examples that came with it or came from the website where you got the library. finally try to find examples that seem to be reliable (comments are a good way to determine)
	  - be careful of libraries that are very old, especially if the comments are also very old. it might be that changes in Arduino prevent them from working now.
	  - Join any mailing lists or forums related to the library or the website that the library came from. search the archive for hints, and then post your question after you’ve done some research

- Isolate problems
  - Create a small test program to isolate the part that is not working
    - This makes it easier to work on
    - Identify whether it’s due to an interaction with something else
    - You are much more likely to get help quickly from teacher or others (online forum, etc.) with a simple problem than a complex bundle of code.


 ## Hardware
 - Swap parts
 - Isolate problems
   - Create a small test circuit to isolate the part that is not working
   - This makes it easier to work on
   - Identify whether it’s due to an interaction with something else
   - Much more likely to get help quickly from teacher or others (online forum, etc.
  - Test equipment
    - Multimeter
      - test for voltage
      - test for continuity
   - Oscilloscope
   - Variable power supplies

Online resources
 - Copy and paste the error message into Google
 - Google keywords: Arduino and/or Processing, along with what you are trying to do or any components that are part of the issue. The goal of the project is usually not a good keyword.
   - Posting a question on a forum, mailing lists, etc.
     - Before posting, you must prepare
       - Do everything else possible first. People are much more helpful when it’s obvious that you’ve done your homework e.g. researching the issue, isolating the problem to a minimal circuit/program, getting local help (me, other teachers or students)
       - Read some other posts in this forum/mailing list to get a sense of the culture. You want to post your question in a similar way
       - Most forums have a post that suggests the best way to get help. This might be called something like “Before you Post” or “Read this First” or “How to Post”. Make sure you follow the instructions.
       - Compose your post carefully. Include all the necessary information, but don’t confuse the issue with unnecessary information (e.g. the concept of your project probably doesn’t matter if you are getting an error from a library). Include your minimal circuit schematic or program, which must be neat and clear and well documented
       - You are welcome to run the post by me first
       - If it’s extremely late at night use sites in different time zones. Evening is probably the most appropriate time.
       - Suggested sites
         - Always start with the home site of any library or part that is key to what the problem is (assuming there is one). If your project is based on an Instructable or other set of instructions, post on that site if possible
           - [Arduino forum](https://forum.arduino.cc/)
           - [Adafruit forum](https://forums.adafruit.com/)
	   - [SparkFun forums](https://forum.sparkfun.com/)
           - [Stack Exchange](https://stackexchange.com/)
           - Tronixstuff

## Reduce Risk
- How to reduce risks before buying components, using libraries, or trusting an Instructable or other instruction, example, or tutorial:
  - Read the documentation. Is it clear and complete? Does it explain everything you need to know?
  - Read all the comments and feedback to see if there are any issues and to gauge how helpful the provider is. 
  - Are examples and tutorials provided? Are they clear and complete? That’s a sign of reduced risk. Read those, and any comments on them.
  - Google the name of the item. Is it discussed much? 
    - If there is no discussion that implies that no one else is using it = High risk. Follow some of the discussions. 
    - Do people seem to be having success and getting projects to work? Good, that indicates a low risk. 
    - If the discussions are mostly about problems that aren’t solved, that’s a high risk.








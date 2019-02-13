
###Debugging!###

	1.	Software
	    - Make sure you understand what is going on
	      - Add println() to display values and to report on stage in processing e.g.:Serial.print("before loop, sensor value is ");
                Serial.println(sensorValue);
                for (int i = 200, i > 0, i--)
	      {
	v.	Serial.print("inside loop, i is ");
	vi.	Serial.println(i);
	vii.	// other stuff happens
	viii.	}
	ix.	Serial.print("after loop, sensor value is ");
	x.	Serial.println(sensorValue);
	xi.	No serial monitor? Use LEDs to indicate what’s going on e.g.:digitalWrite(redLED, HIGH) //before loop
	xii.	digitalWrite(greenLED, LOW) //not in loop
	xiii.	digitalWrite(yellowLED, LOW) //not after loop
	xiv.	delay(50); // just enough to see
	xv.	for (int i = 200, i > 0, i--)
	xvi.	{
	xvii.	digitalWrite(redLED, LOW) //not before loop
	xviii.	digitalWrite(greenLED, HIGH) // in loop
	xix.	digitalWrite(yellowLED, LOW) //not after loop
	xx.	delay(50); // just enough to see
	xxi.	// other stuff happens
	xxii.	}
	xxiii.	digitalWrite(redLED, LOW) //not before loop
	xxiv.	digitalWrite(greenLED, LOW) // not in loop
	xxv.	digitalWrite(yellowLED, HIGH) // after loop
	xxvi.	delay(50); // just enough to see
	xxvii.	Problems with libraries
	a.	Ideally, confirm the library works with the examples that came with it or came from the website where you got the library. finally try to find examples that seem to be reliable (comments are a good way to determine)
	b.	be careful of libraries that are very old, especially if the comments are also very old. it might be that changes in arduino prevent them from working now.
	c.	Join any mailing lists or forums related to the library or the website that the library came from. search the archive for hints, and then post your question after you’ve done some research
	B.	Isolating problems
	i.	Create a small test program to isolate the part that is not working
	a.	This makes it easier to work on
	b.	Identify whether it’s due to an interaction with something else
	c.	Much more likely to get help quickly from teacher or others (online forum, etc.
	C.	
	2.	Hardware
	A.	Swapping parts
	B.	Isolating problems
	a.	Create a small test circuit to isolate the part that is not working
	b.	This makes it easier to work on
	c.	Identify whether it’s due to an interaction with something else
	d.	Much more likely to get help quickly from teacher or others (online forum, etc.
	C.	Test equipment
	i.	Oscilloscope
	ii.	Multimeter
	iii.	Variable power supplies
	3.	Online resources
	A.	Copy and paste the error message into Google
	B.	Google keywords: Arduino and/or Processing, along with what you are trying to do or any components that are part of the issue. The goal of the project is usually not a good keyword.
	C.	Posting a question on a forum, mailing lists, etc.
	i.	Before posting, you must prepare
	a.	Do everything else possible first. People are much more helpful when it’s obvious that you’ve done your homework e.g. researching the issue, isolating the problem to a minimal circuit/program, getting local help (me, other teachers or students)
	b.	Read some other posts in this forum/mailing list to get a sense of the culture. You want to post your question in a similar way
	c.	Most forums have a post that suggests the best way to get help. This might be called something like “Before you Post” or “Read this First” or “How to Post”. Make sure you follow the instructions.
	d.	Compose your post carefully. Include all the necessary information, but don’t confuse the issue with unnecessary information (e.g. the concept of your project probably doesn’t matter if you are getting an error from a library). Include your minimal circuit schematic or program, which must be neat and clear and well documented
	e.	You are welcome to run the post by me first
	f.	If it’s extremely late at night use sites in different time zones. Evening is probably the most appropriate time.
	g.	Suggested sites
	a.	Always start with the home site of any library or part that is key to what the problem is (assuming there is one). If your project is based on an Instructable or other set of instructions, post on that site if possible
	b.	Arduino forum
	c.	Adafruit forum
	d.	Stack Exchange
	e.	Spark Fun
	f.	Tronixstuff
	4.	How to reduce risks before buying components, using libraries, or trusting an Instructable or other instruction, example, or tutorial:
	A.	Read the documentation. Is it clear and complete? Does it explain everything you need to know?
	B.	Read all the comments and feedback to see if there are any issues and to gauge how helpful the provider is.
	C.	Are examples and tutorials provided? Are they clear and complete? That’s a sign of reduced risk. Read those, and any comments on them.
	D.	Google the name of the item. Is it discussed much? If there is no discussion that implies that no one else is using it. High risk. Follow some of the discussions. Do people seem to be having success and getting projects to work? Good, that indicates a low risk. If the discussions are mostly about problems that aren’t solved, that’s a high risk.

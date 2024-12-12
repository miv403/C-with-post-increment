# exercises

1. Read about CVE-2001-0500, a buffer overflow in Microsoft’s Internet
Information Services. (This vulnerability is commonly referred to as the Code
Red worm vulnerability.)
2. Add a `read_from` and a `write_to` function to Listing 3-6. These functions
should read or write to `upper` or `lower` as appropriate. Perform bounds check-
ing to prevent buffer overflows.
3. Add an `Element*` previous to Listing 3-9 to make a *doubly linked list*. Add
an `insert_before` method to `Element`. Traverse the list from front to back, then
from back to front, using two separate for loops. Print the `operating_number`
inside each loop.
4. Reimplement Listing 3-11 using no explicit types. (Hint: use `auto`.)
5. Scan the listings in Chapter 2. Which methods could be marked `const`?
Where could you use `auto`?  ✕

## deitel c 6/e

**16.16 (Target-Heart-Rate Calculator)** While exercising, you can use a heart-rate monitor to see
that your heart rate stays within a safe range suggested by your trainers and doctors. According to the
American Heart Association (AHA) (www.americanheart.org/presenter.jhtml?identifier=4736),
the formula for calculating your maximum heart rate in beats per minute is 220 minus your age in
years. Your target heart rate is a range that is 50–85% of your maximum heart rate. [Note: These for-
mulas are estimates provided by the AHA. Maximum and target heart rates may vary based on the health,
fitness and gender of the individual. Always consult a physician or qualified health care professional before
beginning or modifying an exercise program.] Create a class called HeartRates. The class attributes
should include the person’s first name, last name and date of birth (consisting of separate attributes
for the month, day and year of birth). Your class should have a constructor that receives this data as
parameters. For each attribute provide set and get functions. The class also should include a function
getAge that calculates and returns the person’s age (in years), a function getMaxiumumHeartRate that
calculates and returns the person’s maximum heart rate and a function getTargetHeartRate that cal-
culates and returns the person’s target heart rate. Since you do not yet know how to obtain the current
date from the computer, function getAge should prompt the user to enter the current month, day
and year before calculating the person’s age. Write an application that prompts for the person’s in-
formation, instantiates an object of class HeartRates and prints the information from that object—
including the person’s first name, last name and date of birth—then calculates and prints the person’s
age in (years), maximum heart rate and target-heart-rate range.

## deitel 17.5

**17.5 (Complex Class)** Create a class called Complex for performing arithmetic with complex numbers. Write a program to test your class. Complex numbers have the form

realPart + imaginaryPart * i
where i is
sqrt(–1)

Use double variables to represent the private data of the class. Provide a constructor that enables
an object of this class to be initialized when it’s declared. The constructor should contain default
values in case no initializers are provided. Provide public member functions that perform the following tasks:
1. Adding two Complex numbers: The real parts are added together and the imaginary
parts are added together.
2. Subtracting two Complex numbers: The real part of the right operand is subtracted from
the real part of the left operand, and the imaginary part of the right operand is sub-
tracted from the imaginary part of the left operand.
3. Printing Complex numbers in the form (a, b), where a is the real part and b is the imaginary part.

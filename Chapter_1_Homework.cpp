/*/  C++ Session 2 Homework
Question 1
Which signed/unsigned data types can fully store the value 70,000?

    Int, Float, and Double

Question 2
Which signed/unsigned data types can fully store the value of 3.14?

    Float and Double.

Question 3
Can -10 be signed? Why or why not?

    It is signed.  Negative anything needs to be signed,

Question 4
(a) Try to predict what this program will print.

    Takes your rent then subtracts your expenss.  A problem will occur with having balance be unsigned if you ever overspend.

(b) Write and run the program, was your prediction correct?

    You went broke.  Which made you rich?  I should try this.

(c) Why did this happen?

    Balance needs to be set to signed int so it can go negative.  Or you need to get financial help.

Question 5
How would you fix the program from the previous question?

    Balance needs to be set to signed int so it can go negative.  Or you need to get financial help.

Question 6
What will this program print out to the console?

    97

Question 7
What will this program print out to the console?

    a

Question 8
What will this program print out to the console and why?

    20.   It adds up to 20.8 but the Int C drops the decimal.

Question 9
What if the variable "a" in the previous question was 10.5 instead of 10.4?

    21

Question 10
Rewrite the following program and replace the underscores with the most optimal data type.


    #include ​<iostream>
    using​ ​namespace​ ​std​;
    int​ main() {
    unsigned int salary = ​70000​;
    short int age = ​42​;
    double humanPopulation = ​7600000000​; ​// as of 2019
    unsigned float pi = ​3.14159​;
    char gender = ​'f'​;
    short unsigned int IQ = ​127​;
    bool hasApples = ​true​;
    int mathTime = (​12​ + ​13​) * (​6​ - ​7​) / ​5​;
    cout​ << ​"I make $"​ << salary << ​" per year"​ << ​endl​;
    cout​ << ​"I am "​ << age << ​" years old"​ << ​endl​;
    cout​ << ​"There are "​ << humanPopulation << ​" people on this planet"
    << ​endl​;
    cout​ << ​"The value of pi is "​ << pi << ​endl​;
    cout​ << ​"My gender is: "​ << gender << ​endl​;
    cout​ << ​"My IQ is: "​ << IQ << ​endl​;
    cout​ << ​"1 means I have apples! Having apples = "​ << hasApples <<
    endl​;
    cout​ << ​"(12 + 13) * (6 - 7) / 5 = "​ << mathTime << ​endl​;
    return​ ​0​;
    }






*/



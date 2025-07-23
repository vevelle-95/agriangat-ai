// 1. Hello World, comments, escape sequences

#include <stdio.h>
int main(){

    // This is a comment blah
    /*
        this
        is
        a
        multiline
        comment

        escape sequence = character combination consisting of a backslash \ 
        followed by a letter or combination of digits.
        They specify actions within a line or string of text
        \n - newline
        \t - tab
    */
    printf("I like pizza!");
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9");
    printf("\"I like Pizza\" - Abraham Lincoln probably")
    

    return 0;
}

// 2. Variables

#include <stdio.h>
int main(){
    /*
    variable - allocated space in memory to store a value
    We refer to a variable's name to access the stores value.
    That variable now behaves as if it was the value it contains.
    But we need to declare what type of data we are storing.
    */

   int x; // declaration - assigning a datatype to a variable
   x = 123; // initialization - assigning a value to a variable
   int x = 321; // declaration + initialization

   int age = 21; // Integer
   float gpa = 2.05; // floating point number
   char grade = 'C'; // Single character
   char name[] = "Bro"; // Array of Characters

   // Not an OOP (object-oriented programming lang) so there are no strings
   printf("Hello %s\n", name);

   printf("You are %d years old", age); // format specifier

   printf("Your average grade is %c", gpa);
}

// 3. Data types
#include <stdio.h>
#include <stdbool.h> // for boolean variable

int main(){
    char a = 'C';       // single character %c
    char b[] = "Bro";   // array of characters %s

    float c = 3.141592;             // 4 bytes (32 bits of precision) 6 - 7 digits %f
    double d = 3.141592653589793    // 8 bytes (64 bits of precision) 15 - 16 digts %lf

    bool e = true;          // 1 byte (true or false) %d

    char f = 100;           // 1 byte (-128 to +127) %d or %c
    unsigned char g = 255;  // 1 byte (0 to +255) %d or %c

    // short h = 32767; // 2 bytes (-32,768 to +32,767) %d int
    // unsigned short i = 65535; // 2 bytes (0 to +65,535) %d

    int j = 2147483647;         // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int k = 42967295L; // 4 bytes (0 to +4,294,967,295) %u

    long long int = 9223372036854775807; // 8 bytes (+-9 quintillion) %lld
    unsigned long long int m = 18446744073709551615U; // 8 bytes (0 - 18 quintillion) %llu

    // printf("%c\n", a) // char
    // printf("%s\n", a) // string

    printf("%0.2f\n", c); // float
    printf("%lf\n", d); // double
    
    printf("%d\n", a) // bool
    // printf("%d\n", a) // ascii vs OG / its index
    // printf("%c\n", a) // unsigned char 

    // printf("%\n", a) // char
    // printf("%\n", a) // char

    // When it exceeds the limit of characters, it'll return the lowest value

}

// 4. Format Specifiers

#include <stdio.h>
int main(){
    /*format specifier % - defines and formats a type of data of be displayed
    %c - character
    %s - string
    %d - decimal/boolean/everything else
    %f - float
    %lf - double
    %u - unsigned int
    %lld - long long int
    %llu - long long unsigned
    
    %.1 = decimal precision
    %1 = minimum field width (right-aligned)
    %- = left align
    */
    
    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1 : $%.2f\n", item1);
    printf("Item 2 : $%.2f\n", item2);
    printf("Item 3 : $%.2f", item3);

    return 0;

}

#include <stdio.h>
int main(){
    // constant = fixed value that cannot be altered by the program during its execution

    const float PI = 3.14159; // Capital the convention
    PI = 420;

    printf("%f", PI);

    return 0;
}

// 6. Arithmetic and Augmented Operators 
#include <stdio.h>

int main(){
    /*
    ==Augmented Assignment operators== 
    used to replace a statement where an operator
    takes a varaiable as one of its arguments
    and then assigns the resultback to the same variable

    */

    int x = 10;

    // x = x + 2;
    // x+=2;

    // x = x - 3;
    // x-=3;

    x = x * 4;
    x*=4;

    x = x / 5;
    x/=5;

    x = % 2;
    x%=2;

    printf("The value of x is: %d", x);
   
    return 0;
    
}

// 7. User Input
#include <stdio.h>
#include <string.h>

int main()(
    int main(){
    char name[25]; // bytes
    int age;

    printf("What's your name? ");
    scanf("%s", &name);
    //fgets(name, 25, stdin);
    //name[strlen(name)-1 = '\0']
    printf("\nHow old are you? ");
    scanf("%d", &age);

    printf("You are %s, who's currently %d years old", name, age);
    
    // printf("\nHello %s, how are you?", name);
    // printf("\nYou are %d years old.", age);
    return 0;
)
// 8. Math Functions
#include <stdio.h>
#include <math.h>

int main(){

    double A = sqrt(9);
    double B = pow(2, 4); // 2^4
    int C = round(3.14);
    int D = ceil(3.14);
    int E = floor(3.99);
    double F = fabs(-100);
    double G = log(3);
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);
    
    printf("\n%lf", F);
    
}

// 9. Circumference & Area
#include <stdio.h>

int main() {
    const double PI = 3.1416;
    double a;
    double c;
    double rad; 
    
    printf("Radius? ");
    scanf("%lf", &rad);
    
    c = 2 * PI * rad;
    a = PI * rad * rad;
    
    printf("Circumference: %.2lf", c);
    printf("\nArea: %.2lf", a);

    return 0;
}

// 10. Celsius to Fahrenheit
#include <stdio.h>

int main(){
    double i_temp; // Initial temperature
    double f_temp; // Final temperature
    int choice;
    
    // Initialization
    printf("What is the current temperature? ");
    scanf("%lf", &i_temp);
    
    // Which conversion
    printf("Is it (1) °C to °F or (2) °F to °C? ");
    scanf("%d", &choice);
    
    // Conversion Output
    if (choice == 1) { // Celsius to Fahrenheit
        f_temp = (i_temp * 9/5) + 32;
        printf("The temperature in Fahrenheit is: %lf", f_temp);
    }
    else if (choice == 2) { // Fahrenheit to Celsius
        f_temp = (i_temp - 32) * 5/9;
        printf("The temperature in Celsius is: %lf", f_temp);
    }
    else {
        printf("Please choose either options.")
    }
        
    return 0;
}

// 11. Hypotenuse Calculator
#include <stdio.h>
#include <math.h>

int main(){
    double opp;
    double adj;
    double hyp;

    printf("What is the length of the opp. side? ");
    scanf("%lf", &opp);

    printf("What is the length of the adj. side? ");
    scanf("%lf", &adj);

    hyp = sqrt(pow(opp, 2) + pow(adj, 2)); // sqrt(a^2 + b^2)

    printf("\nThe hypotenuse of the triangle is: %.2lf", hyp);

    return 0;

}

// 12. If statements
#include <stdio.h>

int main(){

    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);
    
    if (age >= 18) {
        printf("You are now signed up!")
    }
    else if(age < 0) {
        printf("You haven't been born yet!");
    }
    else (
        printf("You were barely even born to get credit!")
    )

    return 0;
}

// 13. Switch Case 
#include <stdio.h>

int main(){
    // switch = A more efficient alternative to suing many "else if" statements
    //          allows a value to be tested for equality against many cases

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("Good!\n");
            break;
        case 'B':
            printf("Fine\n");
            break;
            
        case 'C':
            printf("You did okay!\n");
            break;

        case 'F':
            printf("Sadge!\n");
            break;

        default:
            printf("Please enter a letter!\n");
        
    }
}

// 14. Simple Calculator Application
#include <stdio.h>

int main(){
    double f_num;
    double s_num;
    char symbol;
    double result;

    printf("\nEnter an operator (+ - * /)? ");
    scanf("%c", &symbol);

    printf("First number: ");
    scanf("%lf", &f_num);

    printf("Second number: ");
    scanf("%lf", &s_num);
    

    switch(symbol){
        case '+':
            result = f_num + s_num;
            printf("Result: %.2lf", result);
            break;
        case '-':
            result = f_num - s_num;   
            printf("Result: %.2lf", result);
            break;
        case '*':
            result = f_num * s_num;
            printf("Result: %.2lf", result);
            break;
        case '/':
            result = f_num / s_num;
            printf("Result: %.2lf", result);
            break;
        default:
            printf("%c is not a valid operator", symbol);
    }

    return 0;
}

// 15. Logical operators
#include <stdio.h>
#include <stdbool.h>

int main(){
    // logical operators = && (AND) checks if two conditions are true

    float temp = 1000;
    bool sunny = true;

    if (temp >= 0 && temp <= 30 && sunny == true){ // sunny == 1 or sunny
        printf("\nThe weather is good!");
    }
    else {
        printf("\nThe weather is bad!")
    }


    // || (OR) checks if at least one condition is true

    float temp = 25;
    
    if(temp <= 0 || temp >= 30){
        printf("\nThe weather is bad!");
    }
    else{
        printf("\nThe weather is good!")
    }

    // ! (NOT) reverses the state of a condition
    bool sunny = true;

    if(!sunny){
        printf("\nIt's cloudy outside!");
    }
    else{
        printf("\nIt's coudy outside!");
    }

    return 0;
}

// 16. Functions
#include <stdio.h>

void birthday()
{
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to dear...YOU!");
    printf("\nHappy birthday to you!\n");
}

int main(){
    birthday();
    birthday();
    birthday();

    return 0;
}

// 17. Arguments - Functions can't see from other functions
#include <stdio.h>

void birthday(char name[], int age)
{
    printf("\nHappy birthday dear %s!", name);
    printf("\nYou are %d years old!", age);
}

int main(){
    char name[] = "Bro";
    int age = 21;

    birthday(name, age); // insert matching arguments (order and datatype) inside the phone numbers

    return 0;
}

// 18. Returning 
#include <stdio.h>
double square (double x) // ensure the function has a matching return datatype
{
    double result = x * x;
    return result;

    // return x * x
}

int main()
{
    double x = square(3.14);
    printf("%lf", x);

    return 0;
}

// 19. Ternary operator
#include <stdio.h>

int findMax(int x, int y)
{
    if (x > y){
        return x;
    }
    else{
        return y;
    }
    
    // return (x > y) ? x : y;
}

int main(){
    // ternary operator = shortcut to if/else when assigning/returning a value
    // (condition) ? "value if true" : "value if false"


    int max = findMax(5,4);
    return 0;
}

// 20. Function prototypes
#include <stdio.h>

void hello (char[], age) // Function declaration

int main(){
    // Function declaration, w/o a body, before main()
    // Ensures that calls to a function are made with the correct arguments

    /*
    Note:
    - Many C compilers do not check for parameter matching
    - Missing arguments will result in unexpected behavior
    - Function prototypes causes the compiler to flag an error if arguments are missing
    
    */

    char name[] = "Carl";
    int age = 21;

    hello();

    return 0;
}

void hello(char name[]. int age)
{
    printf("\nHello %s", name);
    printf("\nYou are %d years old", age);
}

// 21. String Functions
#include <stdio.h>
#include <string.h>

int main(){
    char string1[] = "Carl";
    char string2[] = "Lee";

    strlwr(string1);    // converts a string to lowercase
    strupr(string1);    // converts a string to uppercase

    // concatenation
    strcat(string1, string2);       // appends string2 to end of string1
    strncat(string1, string2, 1);   // appens n characters from string 2 to string 1

    // copy
    strcpy(string1, string2);       // copy string2 to string1
    strncpy(string1, string2, 4);   // copy n characters of string2 to string1

    // set & extra
    strset(string1, '?');       // sets all characters of a string to a given character
    strnset(string1, 'x', 1);   // sets first ncharcters of a string to a given character
    strrev(string1);            // reverses a string

    // length
    int result = strlen(string1);                // returns string length as int

    // compare + ignore
    int result = strcmp(string1, string2);          // string compare all characters
    int result = strncmp(string1, string2, 1);      // string compare n characters
    int result = strcmpi(string1, string1);         // string compare all (ignore case)
    int result = strnicmp(string1, string1, 1);     // string compare n characters (ignore case)

    printf("%s", string1);
    
    return 0;
}

// 22. Loop
#include <stdio.h>
#include <string.h>

int main()
{
    // a. for loop = repeats a section of code a limited amount of times
    for(int i = 1; i <= 10; i++) // i+=2 (or augmented ass. operator) works as well
    {
            printf("%d\n", i);
    }

    // b. while loop = repeats a section of code possible unlimited times.
    // WHILE some condition remains true
    // a while loop might not execute at all
    // checks a condition, THEN executes a block of code if cond. == true

    char name[25];

    printf("\nWhat's your name?: ");
    fgets(name, 25, stdin); // fgets is a preference over scanf within arrays/strings
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0)
    {
        printf("\nYou did not enter your name.");
        printf("\nWhat's your name?: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s", name)

    // c. do while loop = always executes a block of code once, THEN checks a condition
    int number = 0;
    int sum = 0;
    
    do{
        printf("Enter a # above 0: ");
        scanf("%d", &number);
        if(number > 0)
        {
            sum += number;
        }
    }while(number > 0);
    
    printf("Sum: %d", sum);

    return 0;
}

#include <stdio.h>

int main()
{
   //nested loop = a loop inside of another loop

   int rows;
   int columns;
   char symbol;

   printf("\nEnter # of rows: ");
   scanf("%d", &rows);

   printf("Enter # of columns: ");
   scanf("%d", &columns);

   scanf("%c"); //clears \n from buffer

   printf("Enter a symbol to use: ");
   scanf("%c", &symbol);

   for(int i = 1; i <= rows; i++)
   {
      for(int j = 1; j <= columns; j++)
      {
         printf("%d", j);
      }
      printf("\n");
   }

   return 0;
}

int main(){
    // continue = skips rest of code & code & forces the next iteration of the loop
    // break = exits a loop/switch

    for(int i = 1; i<=20; i++)
    {
        if(i == 13)
        {
            continue;
        }
        printf("%d\n", i);
    }
}

// Arrays

#include <stdio.h>

int main (){
    // array = a data structure that can store many values of ther same data type

     double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0, 30.0}; // double price = 5.0;
     
     /* Initialization equivalent to this
     double prices[5];
     
     prices[0] = 5.0;
     prices[1] = 10.0;
     prices[2] = 15.0;
     prices[3] = 25.0;
     prices[4] = 20.0;
     */

     printf("$%.2lf", prices[1]);
     
     for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++){
         printf("\n$%.2lf", prices[i]);
     }

    return 0;
}

// 2D Arrays
#include <stdio.h>

int main(){
    // 2D array = an array, where each element is an entire array
    //            useful if you need a matrix, grid, or table of data

    int numbers[3][3] = {
                        {1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}
                        };
                        
    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);
    
    printf("rows: %d\n", rows);
    printf("columns: %d\n", rows);

    /*
    int numbers[3][3];
    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;
    numbers[2][0] = 7;
    numbers[2][1] = 8;
    numbers[2][2] = 9;
    */

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// Array of strings
#include <stdio.h>
#include <string.h>

int main(){
    char cars[][10] = {"Mustang", "Corvette", "Camaro"};

    // cannot override cars[0] = "Tesla";
    strcpy(cars[0], "Tesla");

    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }

    return 0;
}

// Swapping of values
#include <stdio.h>
#include <string.h>

int main()
{
    char x = 'X';
    char y = 'Y';

    x = y;

    printf("x = %c\n", x);
    printf("y = %c\n", y);

    return 0;
}

// Array sorting - Ascending Bubble sort
#include <stdio.h>

void sort(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++) // can optimize the condition by "j < size-i-1"
        {
            if(array[j] > array[j+1]) // if(array[j] < array[j+1]) if descending
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

int main()
{
    int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5}; // Initialization + Declaration
    int size = sizeof(array)/sizeof(array[0]); // Length = Total bytes / Bytes of any element

    sort(array, size); // Calls for functions
    printArray(array, size);

    return 0;
}

// Struct - Group of Variables
#include <stdio.h>
#include <string.h>

struct Player
{
    char name[12];
    int score;
};

int main()
{
    /* struct = collection of related members ("variables")
                they can be of different data types unlike ARRAYS
                listed under one name in a block meory
                AKIN to classes in other languages (but no methods)
    */

   struct Player player1;
   struct Player player2; // refer to different blocks of members

   strcpy(player1.name, "Carl");
   player1.score = 4;

   strcpy(player2.name, "Gab");
   player2.score = 5;

   printf("%s\n", player1.name);
   printf("%d\n", player1.score);
   
   printf("%s\n", player2.name);
   printf("%d\n", player2.score);


   return 0;
}


// Usage of Typedef
/*
#include <stdio.h>
#include <string.h>

// typedef char user[25] 
struct User
{
    char name[25];
    char password[12];
    int id;
};

int main()
{
    // typedef = reserved keyword that gives an existing datatype a "nickname"

    //user user1 = "Carl";
    struct User user1 = {"Carl", "pass123", 1234};
    struct User user2 = {"Gab", "pass321", 4321};
    
    return 0;
}*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[25];
    char password[12];
    int id;
} User; // Nickname; at the end of each type definitions

int main()
{
    // typedef = reserved keyword that gives an existing datatype a "nickname"

    User user1 = {"Carl", "pass123", 1234};
    User user2 = {"Gab", "pass321", 4321};
    
    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);
    printf("\n");
    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);
    
    return 0;
}

// Array of structs
#include <stdio.h>
#include <string.h>

struct Student
{
    char name[12];
    float gpa;
};

int main()
{
    struct Student student1 = {"Spongebob", 3.0};
    struct Student student2 = {"Patrick", 2.5};
    struct Student student3 = {"Sandy", 4.0};
    struct Student student4 = {"Squidward", 2.0};

    struct Student students[] = {student1, student2, student3, student4};

    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {
        printf("%-12s\t", students[i].name); // "-": left justify and 12 characters max
        printf("GPA: %.1f\n\n", students[i].gpa);
    }

    return 0;
}

// Enums
#include <stdio.h>

enum Day{Sun = 1 , Mon = 2, Tues = 3, Wed = 4, Thurs = 5, Fri = 6, Sat = 7}; // constants with indices

int main()
{
    // enum = a user defined type of named integer identifiers
    //        helps to make a program more readable
    
    enum Day today = Sun;
    // printf("%d", today); // enums are NOT STRINGS, but they can be treated as int
    
    // if (today == 1 || today == 7)
    if(today == Sun || today == Sat)
    {
        printf("\nIt's the weekend! Party time!");
    }
    else
    {
        printf("\nI have to work today!");
    }

    return 0;
}

// Random Numbers
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // pseudo random numbers = A set of values or elements that are statistically random
    //                          (Don't use for cryptographic security)

    srand(time(0)); // s for seed, rand for random

    int number1 = (rand() % 6) + 1; // 0 - 32,767 limits; for six sides of die
    int number2 = (rand() % 6) + 1;
    int number3 = (rand() % 6) + 1; 

    printf("%d\n", number1); // will print anything within "0 to 5" + 1
    printf("%d\n", number2); 
    printf("%d\n", number3); 

    return 0;
}

// Guessing Number Game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;// minimum random number
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;

    // uses the current time as a seed
    srand(time(0));

    // Generate a random number between Max and Min
    answer = (rand() % MAX) + MIN;

    // printf("%d", answer);
    do{
        printf("Enter a guess: ");
        scanf("%d", &guess);

        if(guess > answer)
        {
            printf("Too high!\n");
        }
        else if(guess < answer)
        {
            printf("Too low!\n");
        }
        else
        {
            printf("CORRECT!\n");
        }

        guesses++; // akin to the increment in for loops
    } while(guess != answer);

    printf("**********************\n");
    printf("answer: %d\n", answer);
    printf("guesses: %d\n", guesses);
    printf("**********************");

    return 0;
}

// Quiz game
#include <stdio.h>
#include <ctype.h>

int main()
{
    char questions[][100] = {"1. What year did the C language debut?: ",
                             "2. Who is credited with creating C?: ",
                             "3. What is the predecessor of C?: "};

    char options[][100] = {"A. 1969", "B. 1972", "C. 1975", "D. 1999",
                           "A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmack", "D. Doc Brown",
                           "A. Objective C", "B. B", "C. C++", "D. C#"};

    char answers[3] = {'B', 'A', 'B'};

    int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);

    char guess;
    int score = 0;

    printf("QUIZ GAME!!!\n");

    for(int i = 0; i < numberOfQuestions; i++)
    {
        printf("**********************\n");
        printf("%s\n", questions[i]);
        printf("**********************\n");
        
        // nested index j starts at every 4th string and only displays 4 options 
        for(int j = (i * 4); j < (i * 4) + 4; j++) 
        {
            printf("%s\n", options[j]);
        }
        
        printf("guess: ");
        scanf("%c\n", &guess);
        scanf("%c");
        
        guess = toupper(guess);
        
        if(guess == answers[i])
        {
            printf("CORRECT!\n");
            score++;
        }
        else
        {
            printf("WRONG!\n");
        }
    }
    
    printf("**********************\n");
    printf("FINAL SCORE: %d/%d\n", score, numberOfQuestions);
    printf("**********************");

    return 0;
}

// Bitwise Operators
#include <stdio.h>

int main()
{
    /*
    BITWISE OPERATORS = special operators used in bit-level programming
                        (binary is mandatory)
    & AND
    | OR
    ^ XOR (exclusive or)
    << left shift
    >> right shift
    */ 

    int x = 6;  // 0000 0110
    int y = 12; // 0000 1100
    int z = 0;  // 0000 1110

    z = x & y;
    printf("AND = %d\n", z); // 4 -  0100
    
    
    z = x | y;
    printf("OR = %d\n", z); // 14 - 1110
    
    z = x ^ y;
    printf("XOR = %d\n", z); // 10 - 1010
    
    z = x << 1; // 12 - 0000 1100
    printf("SHIFT LEFT = %d\n", z)
    
    z = x >> 2; // 1 - 0000 0001 (1) truncated
    printf("SHIFT RIGHT")
    
    return 0;
}

// Memory Addresses
#include <stdio.h>

int main()
{
    // memory - an array of bytes wihtin RAM (street)
    // memory block = a single unit (byte) within memory, used to hold some value (person)
    // memory address = the address of where a memory block is located (house address)

    // Going over a "street" to find a "person" on each "address" 
    char a ;   // 1 byte
    short b;  // 2 byte
    int c;    // 4 byte
    double c;    // 8 byte
    short e[2];     // 2 byte * memory allocated = 4
    
    printf("%d bytes\n", sizeof(a)); // decimal
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));
    printf("%d bytes\n", sizeof(d));
    printf("%d bytes\n", sizeof(e));
    
    printf("%p\n", &a); // hexadecimal
    printf("%p\n", &b);
    printf("%p\n", &c);
    printf("%p\n", &d);
    printf("%p\n", &e);

    return 0;
}

// 40. Pointers
#include <stdio.h>

void printAge(int *pAge)
{
    printf("You are %d years old", *pAge); // dereference
}

int main()
{
    // pointer = a "variable-like" reference that holds a memory address to another variable,
    //           some tasks are performed more easily with pointers
    //           * = indirection operator (value at address)

    // need data types to be consistent; always 8 bytes
    int age = 21;
    int *pAge = &age; // Indirecting the age at an address: *p Age
    
    // Alternate declaration
    int *pAge = NULL; // good practice while declaring pointers
    pAge = &age;

/*
    printf("address of age: %p\n", &age); // %p for hexadecimal address; & - "address of" operator
    printf("value of pAge: %p\n", pAge);

    printf("size of age: %d bytes\n", sizeof(age));
    printf("size of pAge: %d bytes\n", sizeof(pAge));
    
    printf("value of age: %d\n", age);
    printf("value at stored address: %d\n", *pAge); // dereferencing or extracting the value of the address
*/
    printAge(age);
}

// Writing Files
#include <stdio.h>

int main()
{
    
    // Can use a file path (i.e. C:\Users\cjtle\Desktop)
    FILE *pF = fopen("test.txt", "w"); // write (overwrite), append (concatenate), read

    fprintf(pF, "Spongebob Squarepants"); // No derefencing

    fclose(pF);

    if(remove("test.txt") == 0)
    {
        printf("That file was deleted successfully!");
    }
    else
    {
        printf("That file was NOT deleted!");
    }


    return 0;
}

// Reading files
#include <stdio.h>

int main()
{
    FILE *pF = fopen("C:\Users\cjtle\Desktop\poem.txt", "r");
    char buffer[255];

    if(pF == NULL)
    {
        printf("Unable to open file!\n");
    }
    else
    {
        while(fgets(buffer, 255, pF) != NULL)
    {
        printf("%s", buffer);
    }
    }

    
    /*
    fgets(buffer, 255, pF);
    printf("%s", buffer); // Only reads the first line of words
    */

    fclose(pF);

    return 0;
}

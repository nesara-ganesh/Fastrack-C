// #define sets the global value of the variable (ZERO is 0)
#define ZERO 0
#define LOWER 0
#define INVALID -1
#define ODD -1
#define EVEN 0
#define LEAP 1
#define ARMSTRONG 1
#define NOT 0
#define AMICABLE 1
#define SIZE 7
#define PALINDROME 1
#define SQUARE(X) X*X //Defining a function like macro to find the square of a number
#define ROWSIZE 5
#define COLUMNSIZE 5
#define NOT_FOUND -1
#define CONCATENATE(a, b) a##b

struct _array_
{
    int *arr;
    int c_size, t_size;
};
typedef struct _array_ Array;



// Day 1

    // Write a program that converts upper case to lower.
char convert_upper_lower (char letter);


    // Write a program to calculate the area of circle.
float area_of_a_circle (int radius); //Parameter required to get area of a circle is radius


    // Write a program to calculate simple and compound interest.
float interest (float principle, float time, float rate, int choise);


    // Write a program to convert temperature from Celsius to Fahrenheit and Fahrenheit to Celsius
float celsius_to_fahrenheit (float celsius); // Celsius parameter input to be converted


    // Check if entered number is even or odd.
int even_or_odd (int number); //Number to be checked


    // Check if entered year is leap year or not.
int leap_year_or_not (int year); //Year to be checked for


    // WAP to find power of 2^N using left shift operator.
int power_of_two (int power);



//Day 2

    // Enter a 5 digit number and find the sum of its digits. For E.g. if int number = 12345; then sum = 15;
int sum_of_5_digits_approach_1(int number); // While loop Reading from left to right
int sum_of_5_digits_approach_2(int number); // While loop Reading from right to left
int sum_of_5_digits_approach_3(int number); // For loop Reading from right to left



    // Write a program to reverse the number. For E.g. If int number = 12345; then the output reverse = 54321;
int reverse_number(int number);



    // Write a program to count the occurrences of digit in a number.
int occurrences_of_a_digit_in_number(int number, int digit);



    // WAP to check if a given number is a palindrome. For e.g. 12321, 56788765;
int palindrome_check(int number);



    // Generate the first 'N' prime numbers. For Eg. If N=5 then 2,3,5,7,11
int is_prime_number(int input); // to check if a number is prime or not
int generate_prime_numbers (int number); //number is the number of prime numbers to be generated



    // Write a C program to display and find the sum of the series 1+11+111+....111 up to n.
        // For eg. if n=4, the series is: 1+11+111+1111. Take the value of 'n' as input from the user
int sum_of_series(int value);



    /* A number is called an Armstrong number if the sum of the cubes of the digits of the number is equal to the number.
        For example 153 = 1^3 + 5^3 + 3^3. Write a C program that asks the user to enter a number
        and returns if it is Armstrong or not.*/
int armstrong_numbers(int number);



  /*   Amicable numbers are found in pairs. A given pair of numbers is Amicable if the sum of the proper divisors
        (not including itself) of one number is equal to the other number and vice – versa.
        For example 220 & 284 are amicable numbers. First we find the proper divisors of 220:
        220:1, 2, 4, 5, 10, 11, 20, 22, 44, 55, 110; 1+ 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284
        Now, 284: 1, 2, 4, 71, 142; 1 + 2 + 4 + 71 + 142 = 220
        Write a C program to check that the input pair of numbers is amicable */
int amicable_numbers(int first, int second);



    // Write a menu driven program to read two integers & find their sum, difference & product
void operations_on_two_numbers (int first, int second);
void operations_on_two_numbers_gen(int first, int second);



    /* Write a C program to calculate the volume of the following shapes: Cube, Cuboid, Sphere, Cylinder and Cone.
    Ask the user which one s/he wants to calculate, and take the appropriate required inputs. Then print the result.
    The input should be taken in the main function and calculations for every solid should be done in a separate function
    by passing appropriate arguments.
        Example: If the user chooses the option for cube, only one input is required i.e., the side.
        The volume is then calculated and printed.
        If the user chooses the option for cuboid, only three inputs are required i.e., length, breadth and height.
        The volume is then calculated and printed. */
float volume_of_shapes(int shape);



    /* An Electricity board charges the following rates for use of electricity.
        //For the First 200 units : Rs 1 per unit
        //For the next 100 units : Rs 1.5 per unit
        //Beyond 300 units : Rs 2 Per unit.
        //Write a C Program to read no of unit consumed and print out total charge amount */
float electricity_charge (int consumed);


//Day 3

    //WAP to convert a binary number to decimal and vice versa.
int binary_to_decimal (int binary);

    /*Generate a sequence of numbers such that every number in the sequence is the sum of the previous three numbers.
        The first three numbers are 0,0,1.  */
int sequence_sum_of_last_three(int length);


    /*WAP to print the following sketch by taking in N as number of rows
        * * * *
        * * *
        * *
        *                       */
int sketch_n (int rowzise);


    //Write a C program, which will print two digit numbers whose sum of both digit is multiple of seven. e.g. 16,25,34..
int numbers_digit_sum_seven (int limit);


    /*Write a menu driven program to display the mathematical functions like square root, natural log, log10x, power(x,n),
        Cos(x). (use math.h) */
    // Program to store elements in a array
int store_elements_array(int arr[], int size);

    //Program to display elements of an array
int display_array_elements(int [], int size);

    //Program to perform linear search in an array
int linear_search_array(int arr[], int size, int search_element);

    //Program to get the minimum value of the array
int get_min_array(int arr[], int size);

    //Program to get the maximum value of the array
int get_max_array(int [], int size);

    //Check if the array is palindrome or not
int is_palindrome_array(int [], int size);

    //Write a recursive function for calculating power of a number. Take base number and exponent from user.
int power_of_a_number(int base, int exponent);


    //Write a recursive function for calculating factorial of a number.
int factorial_of_a_number(int number);
int factorial_recursion(int number);


    //Use recursive calls to evaluate F(x) = x + x3/3! + x5/5! + x7/7!+ …
float solve_fx(int x, int limit);

    //To get factorial of each number of the array
int factorial_each_number_array(int [], int size);


    //Find square of a number using macros.
int square_of_a_number(int number);


    // Program to sort the given array
int sort_array(int arr[], int size);


    //Concatenate two integer values using macros
//Line 17 //#define CONCATENATE (a,b) a##b




//Day 4 & 5

    // Write a program to swap two numbers using function.
int swap_numbers(int first, int second);


    /* Write a C program, that reads list of n integer and print sum of product of consecutive numbers. if n=7 and
        numbers are 4,5,2,5,6,4,7 then output is 4*5+5*2+2*5+5*6+6*4+4*7 = 122.  */
int product_of_sum(int array[],int size);


    /* Input date, month and year from the user, and using switch case, display in worded format.
            e.g. input: d=16, m=7, y=1992       Output: 16th July, 1992   */
int date_formating(int date, int month, int year);



    // WAP to sort the given array in ascending and descending order.
int sort_array_ascending_descending(int arr[], int size, int choice);



    // WAP to find minimum and maximum elements in a given array using the function given below
int find_max_min(int array[], int size, int *max, int *min);


    /* Write a C program that take 2 integer sets a[] and b[] as input and prints results of following set operations:
            I. A union B (Write function set_union())
            II. A intersection B (Write function set_intersection())
            III. A-B and B-A (Write function set_difference())      */

Array *array_intersection(Array *array_one, Array *array_two);
Array *set_differences(Array *array_one, Array *array_two, int choice);
Array *set_unions(Array *array_one, Array *array_two);



    // WAP to store 10 numbers in an array. Remove the duplicate entries in the array.
int store_ten_non_duplicate_numbers(int arr[], int size);


    // WAP to search for a given integer in an array using the linear search technique.
int linear_search_array(int arr[], int size, int search_element); //Already performed above


    // WAP to search for a given integer in an array using the binary search technique
int binary_search_array(int arr[], int l, int r, int x);


    // WAP to read a string from the user and find the length of string.( Note: Do not use string.h header file)


    /* Write a function that will scan a character string passed as an argument and convert all lower-case
        characters into their upper-case equivalents. */



    // Write a program to read a string from the user and reverse the string.( Note: Do not use string.h header file)


    // WAP to construct 5 * 5 matrix and display the contents. Use functions for construction and display of matrix.
int matrix_construct_display(int row_size, int column_size);
//int matrix_display(int array [][], int row_size, int column_size);


    // WAP to add 2 matrices.


    // WAP to check whether 2 matrices are same.


    /* WAP program to check if given matrix is a sparse matrix. If the number of zeros in a matrix exceeds
    (n*m)/2, where n, m is the dimension of the matrix, matrix is sparse matrix. Sparse matrix has more
    zero elements than nonzero elements.   */


// Day 6


    // Write a program to store and print the roll no., name, age and marks of 10 students using structures.
struct _student_
{
    char name[];
    int roll_number,age, marks;
};

typedef struct _student_ Student;



    // Write a program to add, subtract and multiply two complex numbers using structures.


    /* Take the price and quantity of items as an input. Write a C function to calculate the sum of the prices.
    Write another C function to calculate the discount according to the following rules:
            For total less than Rs.1000, discount is 5%.
            For total greater than Rs.1000 but less than Rs.5000, discount is 10%.
            For total greater than Rs.5000, discount is 15%.
        Write another function to print the individual item prices, total, discount and the final price. Example:
            If the prices are as follows:
            Item 1: 200
            Item 2: 400
            Item 3: 200
            Item 4: 10
            Item 5: 50
        And the quantities are:
            Item 1: 1
            Item 2: 1
            Item 3: 3
            Item 4: 5
            Item 5: 2
        Then you should print:
            Item Price Quantity Subtotal
            Item 1 200 1 200
            Item 2 400 1 400
            Item 3 200 3 600
            Item 4 10 5 50
            Item 5 50 2 100
            -------------------------------------------------
            TOTAL 1350
            Discount 10% -135
            -------------------------------------------------
            GRAND TOTAL 1215
    */


    /* Implement two player snake and ladder game with board size 10x10.
        Use 6 ladder and 7 snakes in the game. Use random function to roll the dice.
        After every move show the board to the user. Player who reaches 100 shall win the race.
        Note: Player1: user and Player2: computer.    */

//DAY 7


	/*WAP to store N integer values in an array (use malloc). Perform the following operations:
			i. Search an element using linear search
			ii. Find maximum and minimum value
			iii. Find the sum of all the elements of array
			iv. Find the sum of even and odd elements of array
			v. Check whether the array in palindrome
			vi. Write a function to deallocate the memory using free()  */

Array * initialize_array(int size);
int insert_data(Array *,const int data);
int search_data(Array *, int search);
int sum_of_array(Array *);
int sum_odd_even(Array *);
//palindrome Check
Array * deallocate(Array *);


//DAY 8


	/* Write a program to store roll no., name, age and marks of N students dynamically. Perform the following operations
			i. Search student by roll no.
			ii. Search student by name
			iii. Return student details who have scored highest marks. (Assume only one student has scored highest marks)
			iv. Display the details of the students whose name begins with ‘A’.
			v. Deallocate all the memory before exiting the program */


	/* In an X-Y Plane there are N numbers of points at location (x,y). Each point has a weight associated with it. Define
	the structure for the above problem. Find the point with maximum weight. Assuming all points are connected,
	count the number of vertical and horizontal lines. */


//DAY 9

	// Write a simple program to display the contents of a file.


	// Write a program to copy the contents of one file to another.


	// Write a program to count number of characters, spaces tabs and lines in a file.


	/* Read a file which contains one number per line. Check the number is odd or even and write to corresponding odd.txt
	or even.txt accordingly. Note: Numbers may not be single digit numbers. */


	/* Write a program to create telephone directory. It should include Name, address and telephone number.
	It should have facilities for adding, deleting, editing and searching any number. Implement using text mode. */


	/* Write a program to create telephone directory. It should include Name, address and telephone number.
	It should have facilities for adding, deleting, editing and searching any number. Implement using binary mode.*/

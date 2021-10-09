#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "operator.h"

// area of a circle

float area_of_a_circle(int radius)
{
    return 3.14 * radius * radius; //area of circle = pi*r*r
}


//Celsius to Fahrenheit

float celsius_to_fahrenheit(float celsius)
{
    return (celsius * 9 / 5 ) + 32; //fahrenheit = 9/5*Celsius + 32
}


//Checking for odd or even or odd

int even_or_odd(int number)
{
    if (number % 2 == ZERO) //if divisible by 2 it is even else odd
        return EVEN;
    return ODD;
}


// Leap year check

int leap_year_or_not (int year)
{
    if (year % 4 == ZERO) // if a year is divisible by 4 it is leap year else not
        return LEAP;
    return ZERO;
}


//Upper case to lower case conversion

char convert_upper_lower(char letter)
{
    if (letter >= 'A' && letter <= 'Z') //checking if the letter is uppercase with ASCII values of 65 to 90
        return letter + 32; //adding 32 to make the letter lowercase with ASCII values from 97 to 122
    return letter;
}


//Interest calculators

float interest(float principle, float time, float rate, int choice) // Choice 1 for SI 2 for CI
{
    if (choice == 1)
        return principle*time*rate/100; //SI = P T R / 100
    if (choice == 2){
        float temp = 1+(rate/100); //A temporary variable o store the value to be raised by power
        float product = 1+(rate/100); //A variable to store the power raised value
        int i = 1;
        for(i=1;i<time;i++){
             product =  temp * product;
        }
        return principle*(product-1); //CI = principle ( ( (1+rate in %) ^ time) - 1)
    }
    return INVALID;
}


//Power of 2

int power_of_two(int power)
{
    return 1<<power; //using left shift to rise the power of two in binary form
}


// Enter a 5 digit number and find the sum of its digits. For E.g. if int number = 12345; then sum = 15;
int sum_of_5_digits_approach_1(int number) // While loop Reading from left to right
{
    int sum = 0, power = 10000, reminder, digit_in_hand;
    while (power != 0){
        reminder = number % power;
        digit_in_hand = number / power;
        sum = sum + digit_in_hand;
        number = reminder;
        power = power / 10;
    }
    return sum;
}
int sum_of_5_digits_approach_2(int number) // While loop Reading from right to left
{
    int reminder, sum=0;
    while (number != 0)
    {
        reminder = number % 10;
        sum = sum + reminder;
        number = number / 10;
    }
    return sum;
}
int sum_of_5_digits_approach_3(int number) // For loop Reading from right to left
{
    int sum;
    for (sum = 0; number != 0; number = number / 10)
        sum = sum + number % 10;
    return sum;
}

// Generate the first 'N' prime numbers. For Eg. If N=5 then 2,3,5,7,11
int is_prime_number(int input) //Check if prime
{
       int i; // flag = 0;

    for(i=2; i <= input/2; i++)
    {
        if(input % i == 0)
            return 0; // or flag = 1;
    }
    return 1;
}

int generate_prime_numbers(int number) // Print first N prime numbers
{
    int count = 0, input = 2;

    while(count < number)
    {
        if(is_prime_number(input)){ // check if it is a prime number
            count++; // keep track of prime numbers
            printf("%d \t", input); // display the prime number
        }

        input++; // choosing next number
    }

    return count;
}


// Electricity Charge
float electricity_charge(int consumed)
{
    //Check for the amount consumed <200 / 200 -300 / >300
    //For units upto 200 Rs 1pu between 200 and 300 1.5 pu above 300 2 pu
    float amount = 0; // Initializing the amount to zero
    int extra; // Variable to hold the extra units consumed
    if (consumed <= 200) // If the reminder of consumed and 200 is less than 1 then less than 200 units are consumed
        amount = consumed; // Amount is the number of units consumed

    else if (consumed>200 && consumed<=300) // If the consumed unit is between 200 and 300
        {
            amount = 200; //Minimum of 200 Rs. for the first 200 units
            extra = consumed-200; //Extra units consumed above 200
            amount = amount + (1.5 * extra); // Total amount 1.5pu for extra units
        }

    else if (consumed > 300) // for consumption above 300 units
        {
            amount = 350; // Basic amount = 200+1.5*100 = 350rs
            extra = consumed-300; //Units above 300
            amount = amount + (2 * extra); //Total amount
        }

    return amount;
}


//Program to reverse the number

int reverse_number(int number) //Any 8 digit number
{
    int reverse=0, power = 10000, reminder, value;
    while (number != 0)
    {
        reminder = number % 10; //Check for the digits from right to left
        value = reminder * power; //Shifting the number to left end
        reverse = reverse + value; //Adding the shifted number to the reversed number
        number = number / 10; //Going for the next digit of the input number
        power = power / 10; //Shifting the left digit one step towards right in reversed number

    }
    return reverse;

}


//Program to determine the occurrences of a digit in a number
int occurrences_of_a_digit_in_number(int number, int digit)
{
    int reminder, count=0;
    while (number != 0)
    {
        reminder = number % 10; //Checking for digit from right hand side
        if(digit == reminder) //Checking for multiple encounters
            count++; //incrementing the counter in case of multiple occurances
        number = number / 10; //Moving for the next digit
    }
    return count;
}


//Program to check if the 5 digit number is palindrome
int palindrome_check(int number)
{
    int temp = reverse_number(number); //getting the reversed number
    if (temp == number) //Checking if the numbers are matching
        return 1;
    return 0;
}

//Program to find the sum of the series
int sum_of_series(int value)
{
    int temp , i = 1, j , power , sum =0; //taking a temporary variable to store the data
    while (i <= value) //while number is not reached the value
    {
        temp = 0; //Initializing the temporary variable to 0 This variable will hold the value of the element of the series
                    //after every for loop
        power = 1; // Initializing the power variable to 1 to start with unit value digit

        for(j = 0; j < i; j++) //Getting the sequence of 1 11 111 for the given  number by doing 1 1+10 1+10+100 .....
        {
           temp = temp + power; //generating the number of the series
           power = power * 10; //Incrementing the power to move towards LHS
        }

        //printf("%d \t", temp);
        sum = sum + temp; //Summing up the numbers of the series
        i++;
    }
    return sum;
}


//Program to check if the number is Armstrong or not
int armstrong_numbers(int number)
{
    int temp, reminder,sum=0;
    temp = number; //storing the number in a temporary variable
    while (temp != 0)
    {
        reminder = temp % 10; //Taking digit by digit from RHS
        sum = sum+(reminder * reminder * reminder); //Summing the cubes of each digit
        temp = temp / 10; //Moving towards the next digit by eliminating the right most digit
    }
    //printf("ABCD %d\t", sum);
    if(sum == number) //If the armstrong condition is true return ARMSTRONG else return NOT
        return ARMSTRONG;
    return NOT;
}


//Program to find the volume of the appropriate shapes
float volume_of_shapes(int shape) // 1 for Cube, 2 for Cuboid, 3 for Sphere, 4 for Cylinder, 5 for Cone
{
    int side, height, width, length, radius, rad, hight, radc, hightc;
    float volume, tt = 22, four =4, three = 3, seven = 7; //Using fixed value variables get appropriate float values
    switch (shape)
    {
    case 1:
        {
            printf("Enter the dimension of the side of the cube\n"); //Asking for input
            scanf("%d", &side); //Storing the input
            volume = side * side * side; //Volume of cube = side^3
            break;
        }
    case 2:
        {
            printf("Enter the dimensions of the height, width and length of the cuboid\n"); //Asking for input
            scanf( "%d%d%d", &height, &width, &length); //Storing the input
            volume = height * width * length; //Volume of cuboid = length * width *height
            break;
        }
    case 3:
        {
            printf("Enter the dimensions of the radius of the sphere\n"); //Asking for input
            scanf("%d", &radius); //Storing the input
            volume = (four * tt * radius * radius * radius) / (seven * three); //Volume of spehere = (4 / 3) (pi) (radius ^ 3)
            break;
        }
    case 4:
        {
            printf("Enter the dimensions of the radius and height of the cylinder\n"); //Asking for input
            scanf("%d%d", &rad, &hight); //Storing the input
            volume = tt / seven * rad * rad * hight; //Volume of cylinder = (4 / 3) (pi) (radius ^ 2) height
            break;
        }
    case 5:
        {
            printf("Enter the dimensions of the radius and height of the cone\n"); //Asking for input
            scanf("%d %d", &radc, &hightc); //Storing the input
            volume = tt * radc * radc * hightc / (seven * three) ; //Volume of cone = (4 / 3) (pi) (radius ^ 2) height / 3
            break;
        }
    }
    return volume;
}


// Program to find if the numbers are amicable
int amicable_numbers(int first, int second)
{
    int i, j, sum1 = 0, sum2 = 0; //initializing the variables for loop and summation

    for(i=1 ;i <= first / 2; i++) //Checking for the divisors of first number and summing them
        {
            if(first % i == 0)
            {
                sum1 = sum1 + i;
                //printf ("%d \t",i);
            }

            //continue;
        }

    for (j=1 ;j <= second/ 2; j++) //Checking for the divisors of second number and summing them
        {
            if(second % j == 0)
            {
                sum2 = sum2 + j;
                //printf ("%d \t",j);
            }

            //continue;
        }
    //printf("%d\t%d",sum1,sum2);
    if (sum1 == second && sum2 == first) //Checking for amicable or not if true return AMICABLE else return NOT
        return AMICABLE;

    return NOT;
}


//Program to perform sum, difference and product of two integers
void operations_on_two_numbers (int first, int second)
{
    int sum, difference, product;

    do {
       product = first * second;
       difference = first - second;
       sum = first + second;
    } while(first > second);

  /*  do {
        product = first * second;
        difference = second - first;
        sum = first + second;
    } while(second > first); */
    printf ("Sum = %d\nDifference = %d\nProduct = %d",sum, difference, product);
}

void operations_on_two_numbers_gen(int first, int second)
{
    int sum, difference, product;
    sum = first + second;
    product = first * second;
    if (first > second)
        difference = first - second;
    else
        difference = second - first;
    printf("The sum of the numbers = %d\tProduct = %d\t and absolute difference = %d", sum, product, difference);
}


//program to print a sketch of desired number of rows using *
int sketch_n (int row_size)
{
     int i, j;
     if(row_size < 0)
        return -1;

    for(i = row_size; i >= 1; i--)
    {
        for(j=0; j < i; j++)
            printf("* ");
        printf("\n");
    }
    return 1;
}


//Program to store elements to an array
int store_elements_array(int arr[], int size)
{
    int i;

    if(size <= 0)
        return 0;

    for(i=0; i<size;i++)
        arr[i] = i+1;

    return 1;
}


//Program to display the elements of an array
int display_array_elements(int arr[], int size)
{
     int i;

    if(size <= 0)
        return 0;

    for(i=0; i<size;i++)
        printf("%d  ",arr[i]);

    return 1;
}

// Program to perform linear search in an array  Function returns 1 if element found, returns 0 if not
int linear_search_array(int arr[], int size, int element)
{
    int i; // int arr[] = 4, 2, 6, 1, 7

    for(i = 0; i< size; i++)
    {
        if(arr[i] == element)
            return 1;
    }
    return 0;
}


//Program to find the minimum value in the array
int get_min_array(int arr[], int size)
{
    int i, min;

    if(size < 0)
        return -1;

    min = arr[0]; // 4,2,6,1,7

    for(i=1 ; i< size; i++)
    {
        if(min > arr[i])
            min = arr[i];
    }
    return min;
}


//Program to find the maximum value of the array
int get_max_array(int arr[], int size)
{
    int i, max;

    max = arr[0];

    for(i=0; i<size; i++)
    {
        if(max < arr[i])
            max = arr[i];
    }

    return max;
}


//Program to print 2 digit numbers whose digits sum to multiples of 7
int numbers_digit_sum_seven (int limit)
{
    int i,j, sum, count =0;
    if(limit < 0)
        return -1;
    for (i=10; i<100 && count < limit; i++)
    {
        j = i;
        for (sum = 0; j != 0; j = j / 10)
            sum = sum + j % 10;
        if (sum % 7 == 0)
        {
            printf("%d\t", i);
            count++;
        }
    }
    return count;
}

//Program to generate a sequence of numbers in which a number is the sum of the last three numbers
int sequence_sum_of_last_three(int length)
{
    int a=0, b=0, c=1, i=0, count;

    printf("%d\t%d\t%d\t", a, b, c);

    for (count=0; count< length; count++)
    {
        i = a+ b + c;

        printf("%d\t", i);
        a=b;
        b=c;
        c=i;
    }
    return count;
}


//Program to convert binary to decimal without using array
int binary_to_decimal (int binary)
{
    int reminder=0, decimal=0, power;
    for(power = 0; binary != 0; power++)
    {
        reminder = binary % 10; //Get the right most bit
        decimal = decimal + reminder * (1 << power); //Add the corresponding decimal value to the number
        binary = binary / 10; //Move to the leftbit
        printf("%d\n",decimal);
    }
    return decimal;
}


    //Program to Check if the array is palindrome or not
int is_palindrome_array(int array_given[], int size)
{
    int i = 0, j, duplicate_array[size];


    for(i=0; i < size; i++)
    {
        j = size - i - 1; // Initializing a variable to hold the right most value of the array
        duplicate_array[i] = array_given[j]; // Reverse copying the array to a temporary duplicate array
        //printf("%d\t", duplicate_array[i]); //printing the duplicate array
    }
    for(i=0; i < size; i++)
    {
        while (array_given[i] != duplicate_array[i]) // If the elements of both the arrays are not same return null
            return NOT;
    }
    return PALINDROME;
}


//Program to evaluate the power of a number
int power_of_a_number(int base, int exponent)
{
    int i, value = base;
    for(i=1;i<exponent;i++)
    {
       value = value * base;
    }
    return value;
}


//Program to get the factorial of a numbers_digit_sum_seven
int factorial_of_a_number(int number)
{
    int i, value =1;
    while(number > ZERO)
    {
        for(i = 1;i <= number; i++)
        {
            value = value * i;
        }
        return value;
    }
    return INVALID;
}


//Program to find factorial using recursion
int factorial_recursion(int number)
{
    if (number < 1)
        return 1;
    else
        return number*factorial_recursion(number-1);
}


//Solve for F(x) = x + x3/3! + x5/5! + x7/7! + ......
float solve_fx(int x, int count)
{
    int i, limit;
    float value = x;
    limit = 2 * count - 1; //Calculating the last number of the series for which factorial needs to be calculated
    //printf("%f\t", value); //Printing the first value

    while (x > 0){
    for(i = 3; i <= limit; i = i + 2) // Selecting the range of solution
    {
        value = value + (value / factorial_recursion(i-1)); // Generating the solution || n / n ! == 1 / (n-1)!
        //printf("%f\t", value); // Printing the solutions after every element of the sequence
    }
    return value;
    }
    return INVALID;
}


//Program to find the factorials of every number in an array
int factorial_each_number_array(int array[], int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        array[i] = factorial_of_a_number(array[i]);
        printf("%d\t\t", array[i]);
    }
    return 1;

}


//Program to format date using switch statements e.g. input: d=16, m=7, y=1992       Output: 16th July, 1992
int date_formating(int date, int month, int year)
{
    int limit;
    char ch1, ch2;


    if (date == 1 || date == 21 || date == 31) //Using nested if statements to use suffixes (Can also use switch statements;
    {
        ch1 = 's';
        ch2 = 't';
    }
    else if (date == 2 || date == 22)
    {
        ch1 = 'n';
        ch2 = 'd';
    }
    else if (date == 3 || date == 23)
    {
        ch1 = 'r';
        ch2 = 'd';
    }
    else
    {
        ch1 = 't';
        ch2 = 'h';
    }


    //Using switch statements to print the appropriate date format using a temporary variable limit to set the last date of the month
    switch (month)
    {
    case 1:
        {
            limit = 31;
            if(date <= limit)
            {
               printf ("%d%c%c January, %d\n", date, ch1, ch2, year);
                return 0;
            }
            printf("Enter valid date\n");
            return INVALID;
        }
    case 2:
        {
            if (leap_year_or_not(year) == LEAP)
                limit = 29;
            else limit = 28;

            if(date <= limit){
                printf ("%d%c%c February, %d\n", date, ch1, ch2, year);
                return 0;
            }
            printf("Enter valid date\n");
            return INVALID;
        }
    case 3:
        {
            limit = 31;
            if(date <= limit){
                printf ("%d%c%c March, %d\n", date, ch1, ch2, year);
                return 0;
            }
            printf("Enter valid date\n");
            return INVALID;
        }
    case 4:
        {
            limit = 30;
            if(date <= limit){
                printf ("%d%c%c April, %d\n", date, ch1, ch2, year);
                return 0;
            }
            printf("Enter valid date\n");
            return INVALID;
        }
    case 5:
        {
            limit = 31;
            if(date <= limit){
                printf ("%d%c%c May, %d\n", date, ch1, ch2, year);
                return 0;
            }
            printf("Enter valid date\n");
            return INVALID;
        }
    case 6:
        {
            limit = 30;
            if(date <= limit){
                printf ("%d%c%c June, %d\n", date, ch1, ch2, year);
                return 0;
            }
            printf("Enter valid date\n");
            return INVALID;
        }
    case 7:
        {
            limit = 31;
            if(date <= limit){
                printf ("%d%c%c July, %d\n", date, ch1, ch2, year);
                return 0;
            }
            printf("Enter valid date\n");
            return INVALID;
        }
    case 8:
        {
            limit = 31;
            if(date <= limit){
                printf ("%d%c%c August, %d\n", date, ch1, ch2, year);
                return 0;
            }
            printf("Enter valid date\n");
            return INVALID;
        }
    case 9:
        {
            limit = 30;
            if(date <= limit){
                printf ("%d%c%c September, %d\n", date, ch1, ch2, year);
                return 0;
            }
            printf("Enter valid date\n");
            return INVALID;
        }
    case 10:
        {
            limit = 31;
            if(date <= limit){
                printf ("%d%c%c October, %d\n", date, ch1, ch2, year);
                return 0;
            }
            printf("Enter valid date\n");
            return INVALID;
        }
    case 11:
        {
            limit = 30;
            if(date <= limit){
                printf ("%d%c%c November, %d\n", date, ch1, ch2, year);
                return 0;
            }
            printf("Enter valid date\n");
            return INVALID;
        }
    case 12:
        {
            limit = 31;
            if(date <= limit){
                printf ("%d%c%c December, %d\n", date, ch1, ch2, year);
                return 0;
            }
            printf("Enter valid date\n");
            return INVALID;
        }
    default:
        {
         printf("Enter valid date\n");
         return INVALID;
        }

    }
}


//C program, that reads list of n integer and print sum of product of consecutive numbers.
int product_of_sum(int array[],int size)
{
    int i, result=0;
    for(i=1; i < size; i++)
    {
        result = result + array [i-1] * array [i];
    }
    return result;

}


int square_of_a_number(int number)
{
    int square;
    square = SQUARE(number);
    return square;
}


int swap_numbers(int first, int second)
{
    int temp;

    temp = first;
    first = second;
    second = temp;

    printf("%d\t%d\n\n", first, second);

    return 0;

}


int matrix_construct_display(int row_size, int column_size)
{
    int i, j, array[row_size] [column_size];
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < row_size; i++){          // Element by element constructing the matrix
        for (j=0; j < column_size; j++){
            //array[i][j] = 0;    //Initializing the element to zero
            scanf("%d", &array[i][j]); // Taking user input for the matrix elements
        }
    }
    printf("\n\n");
    for(i = 0; i < row_size; i++){
        for(j = 0; j < column_size; j++){
            printf("%d\t", array[i][j]); //Printing every element of the matrix one by one
        }
        printf("\n"); //Moving to next line
    }
    return 0;
}


int find_max_min(int arr[], int size, int *max, int *min)
{
    int i;
    *max = *min = arr[0]; // Initializing the variable min and max to zero to elimenate any junk value present at the location
    for(i = 1; i < size; i++)
    {
        if (*min > arr[i])  // Checking for minimum element
            *min = arr[i];
        if (*max < arr[i]) // Checking for maximum element
            *max = arr[i];
    }
    return 1;
}


int sort_array(int arr[], int size)
{
    int i, j, temp =0;
    for(i = 0; i < size; i++) //Using nested for loop to sort element by element
    {
        for(j = i+1; j < size; j++)
        {
            if (arr[i] > arr[j]) //Using if statement to check for the smaller value and swapping the numbers
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
        }
    printf("%d\t", arr[i]);
    }

    printf("\n\n");
    return 1;
}


int sort_array_ascending_descending(int arr[], int size, int choice)
{
    if (choice == 1)
        sort_array(arr, size);
    if (choice == 2)
    {
      int i, j, temp =0;
    for(i = 0; i < size; i++) //Using nested for loop to sort element by element
    {
        for(j = i+1; j < size; j++)
        {
            if (arr[i] < arr[j]) //Using if statement to check for the smaller value and swapping the numbers
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
        }
    printf("%d\t", arr[i]);
    }
    printf("\n\n");
    }
    return INVALID;
}


int binary_search_array(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = (l + r)/2;

        // If the element is present at the middle itself
        if (arr[mid] == x)  return 1;

        // If element is smaller than mid, then it can only be present
        // in left sub-array
        if (arr[mid] > x) return binary_search_array(arr, l, mid-1, x);

        // Else the element can only be present in right sub-array
        return binary_search_array(arr, mid+1, r, x);
   }

   // We reach here when element is not present in array
   return NOT_FOUND;
}

int store_ten_non_duplicate_numbers(int arr[], int size)
{
    int i,j;

    if(size <= 0)
        return 0;

    printf("Enter the elements of the array:\n");

    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);

        for (j =1; j<i; j++)
        {
            if (arr[j] == arr[i]){
                arr[i] = 0;
                printf("Duplicate value found. Re enter the value\n");
                i--;
            }
        }
    }


    for(i=0;i<size;i++)
        printf("%d\t", arr[i]);
    return 0;
}


Array * initialize_array(int size)
{
    Array *my_array;

    // Allocate memory dynamically to Array type
    my_array = (Array *)malloc(sizeof(Array));

    if(my_array == NULL) return NULL;

    my_array->c_size = 0;
    (*my_array).t_size = size;

    //allocate memory for integer array
    my_array->arr = (int *)malloc(my_array->t_size * sizeof(int));

    // return address
    return my_array;
}


int insert_data(Array *my_array,const int data)
{
    //check whether array is FULL
    if(my_array->t_size == my_array->c_size) return 0;

    //store the data at c_size position
    *(my_array->arr + my_array->c_size) = data;
    my_array->c_size++; // increment the c_size

    return 1;

}
int search_data(Array *my_array, int search)
{
    int i;

    for(i=0; i<my_array->c_size; i++)
        if(*(my_array->arr+i) == search) return 1;

    return 0;
}

Array *array_intersection(Array *array_one, Array *array_two)
{
    int i, size;
    Array *array_intersect;
    size = array_one -> c_size <= array_two -> c_size ? array_one -> c_size : array_two -> c_size;
    array_intersect = initialize_array(size);
    for(i = 0; i < array_one -> c_size; i++)
    {
        if ( search_data(array_two, array_one -> arr[i]) && !search_data(array_intersect, array_one -> arr[i]))
            assert(insert_data(array_intersect, array_one -> arr[i]));
    }
    return array_intersect;
}

Array *set_differences(Array *array_one, Array *array_two, int choice)
{
    int i, size;
    Array *array_difference;
    size = array_one -> c_size /*<= array_two -> c_size ? array_one -> c_size : array_two -> c_size*/;
    array_difference = initialize_array(size);

    if (choice == 1){
        for(i = 0; i < array_one -> c_size; i++)
        {
            if ( !search_data(array_two, array_one -> arr[i]) && !search_data(array_difference, array_one -> arr[i]))
                assert(insert_data(array_difference, array_one -> arr[i]));
        }
    }

    if (choice == 2){
    set_differences(array_two, array_one, 1);
    }
    return array_difference;
}


Array *set_unions(Array *array_one, Array *array_two)
{
    int i, size;
    Array *array_union;
    size = array_one -> c_size >= array_two -> c_size ? array_one -> c_size : array_two -> c_size;
    array_union = initialize_array(size);
    for(i = 0; i < array_one -> c_size; i++)
    {
        if ( !search_data(array_union, array_one -> arr[i]))
            assert(insert_data(array_union, array_one -> arr[i]));
        if ( !search_data(array_union, array_two -> arr[i]))
            assert(insert_data(array_union, array_two -> arr[i]));
    }
    return array_union;
}






Array * deallocate(Array *free_array)
{
    free(free_array->arr); // deallocate int array
    free(free_array); // deallocate structure Array variable

    return NULL;
}


int matrix_addition (int row_size, int column_size)
{
int a[100][100], b[100][100], sum[100][100], i, j;
    printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < row_size; ++i)
    for (j = 0; j < column_size; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < row_size; ++i)
    for (j = 0; j < column_size; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }

  // adding two matrices
  for (i = 0; i < row_size; ++i)
    for (j = 0; j < column_size; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  // printing the result
  printf("\nSum of two matrices: \n");
  for (i = 0; i < row_size; ++i)
    for (j = 0; j < column_size; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == column_size - 1) {
        printf("\n\n");
      }
    }

  return 1;
}


int check_matrices_are_same(int row_size, int column_size)
{
    int a[100][100], b[100][100], i, j;
    printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < row_size; ++i)
    for (j = 0; j < column_size; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < row_size; ++i)
    for (j = 0; j < column_size; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }

  // checking if matrices are same
  for (i = 0; i < row_size; ++i){
    for (j = 0; j < column_size; ++j) {
        if (a[i][j] == b[i][j])
            continue;
        else{
            printf ("Entered matrices are not same\n");
            break;
        }
    }
    }
    printf ("Entered matrices are same.\n");
    return 1;
}


int sparce_matrix_check(int row_size, int column_size)
{
  int a[100][100],i, j, count = 0;
  float sparce = row_size * column_size / 2;
    printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < row_size; ++i)
    for (j = 0; j < column_size; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }
    // checking if matrix is sparce
  for (i = 0; i < row_size; ++i){
    for (j = 0; j < column_size; ++j) {
        if (a[i][j] == 0)
            count++;
        }
    }
    if (count > sparce)
        printf("\nMatrix is sparce.\n");
    else
        printf("\nMatrix is not sparce.\n");

    return 1;
}


int string_length()
{

    printf ("Enter the string to find the length of (no spaces):\n");

    char s[1000];
    scanf ("%s", &s);

    int i;

    for (i = 0; s[i] != '\0'; ++i);

    printf("Length of the string: %d", i);
    return 0;
}


int string_reverse ()
{
    printf ("Enter the string to reverse (no spaces):\n");

    char s[1000], r [1000];
    scanf ("%s", &s);
    int i, count;
    for (i = 0; s[i] != '\0'; ++i) count = i;
    for (i = 0
         ; s[i] != '\o'; ++i) {
            r[count-i] = s[i];
    }
    printf("%s", r);
    return 0;
}

int upper_argument(char str[20])
{
    int i;
    printf("%s in upper case is ",str);
    for(i=0;str[i];i++)
    {
        if(str[i]>96 && str[i]<123)
            str[i]-=32;
    }
    printf("%s",str);
    return 0;
}


Complex operations_on_complex_numbers (Complex a, Complex b, int choice)
{
    Complex c;
    if (choice == 1)
    {
      c.real = a.real + b.real;
      c.img = a.img + b.img;

    }

    else if (choice == 2)
    {
      c.real = a.real - b.real;
      c.img = a.img - b.img;

    }

    else if (choice == 3)
    {
      c.real = a.real*b.real - a.img*b.img;
      c.img = a.img*b.real + a.real*b.img;

    }
    return c;
}


int student_details(int number)
{
    Student s[number];
    int i;
    for (i = 0; i < number; i++)
    {
    printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%s",&s[i].name);
    printf("Enter roll number: ");
    scanf("%d", &s[i].roll_number);
    printf("Enter marks: ");
    scanf("%f", &s[i].marks);
    printf("Enter the age: ");
    scanf("%d", &s[i].age);
    }

    for (i = 0; i < number; i++)
    {
    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s\n", s[i].name);
    printf("Roll number: %d\n", s[i].roll_number);
    printf("Marks: %.1f\n", s[i].marks);
    printf("Age: %d\n", s[i].age);
    }
    return 0;
}

int student_data (int noOfRecords)
{
    Student *ptr;

  // Memory allocation for noOfRecords structures
    ptr = (Student *)malloc(noOfRecords * sizeof(Student));

    for (int i = 0; i < noOfRecords; ++i) {
        printf("Enter name, roll number, marks and age:\n");
        scanf("%s %d %d %d",(ptr + i) -> name, &(ptr + i)->roll_number, &(ptr + i)-> marks, &(ptr + i)-> age);
    }

    printf("Displaying Information:\n");
    for (int i = 0; i < noOfRecords; ++i) {
        printf("%s\t%d\t%d\t%d\n", (ptr + i)->name, (ptr + i)->roll_number, (ptr + i)->marks, (ptr + i)->age);
    }

    free(ptr);
    return NULL;
}


int display_contents_of_file()
{
    char c[1000];
    FILE *fptr;

    if ((fptr = fopen("studytonight.txt", "r")) == NULL)
    {
        printf("Error! opening file");
        // exit from program if file pointer returns NULL.
        exit(1);
    }

    // read the text until newline
    fscanf(fptr,"%[^EOF]", c);

    printf("Data from the file:\n%s", c);
    fclose(fptr);
    return 0;
}


int file_copy()
{
	FILE *fptr1, *fptr2;
	char filename[100], c;

	printf("Enter the filename to open for reading \n");
	scanf("%s", filename);

	// Open one file for reading
	fptr1 = fopen(filename, "r");
	if (fptr1 == NULL)
	{
		printf("Cannot open file %s \n", filename);
		exit(0);
	}

	printf("Enter the filename to open for writing \n");
	scanf("%s", filename);

	// Open another file for writing
	fptr2 = fopen(filename, "w");
	if (fptr2 == NULL)
	{
		printf("Cannot open file %s \n", filename);
		exit(0);
	}

	// Read contents from file
	c = fgetc(fptr1);
	while (c != EOF)
	{
		fputc(c, fptr2);
		c = fgetc(fptr1);
	}

	printf("\nContents copied to %s", filename);

	fclose(fptr1);
	fclose(fptr2);
	return 0;
}


int file_count()
{
    char in_name[80];
    FILE *in_file;
    int ch, character = 0, line = 0, space = 0, tab = 0;

    printf("Enter file name:\n");
    scanf("%s", in_name);

    in_file = fopen(in_name, "r");

    if (in_file == NULL)
        printf("Can't open %s for reading.\n", in_name);
    else
    {
        while ((ch = fgetc(in_file)) != EOF)
        {
            character++;
            if (ch == ' ')
                space++;
            if (ch == '\n')
                line++;
            if (ch == '\t')
                tab++;
        }
        fclose(in_file);

        printf("\nNumber of characters = %d", character);
        printf("\nNumber of spaces = %d", space);
        printf("\nNumber of tabs = %d", tab);
        printf("\nNumber of lines = %d", line);
    }
    return 0;
}


int file_odd_even()
{
    /* File pointer to hold reference to different files */
    FILE * fPtrIn,
         * fPtrEven,
         * fPtrOdd;


    int num, success;

    /*
     * Open all files to perform read/write.
     */
    fPtrIn   = fopen("numbers.txt", "r");
    fPtrEven = fopen("even-numbers.txt" , "w");
    fPtrOdd  = fopen("odd-numbers.txt"  , "w");


    /* fopen() return NULL if unable to open file in given mode. */
    if(fPtrIn == NULL || fPtrEven == NULL || fPtrOdd == NULL )
    {
        /* Unable to open file hence exit */
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read/write privilege.\n");
        exit(EXIT_FAILURE);
    }


    /* File open success message */
    printf("File opened successfully. Reading integers from file. \n\n");

    // Read an integer and store read status in success.
    while (fscanf(fPtrIn, "%d", &num) != -1)
    {
        /*
         * Write even and odd numbers to different files.
         */
        if (isEven(num))
            fprintf(fPtrEven, "%d\n", num);
        else
            fprintf(fPtrOdd, "%d\n", num);

    }


    /* Done with all files, hence close all. */
    fclose(fPtrIn);
    fclose(fPtrEven);
    fclose(fPtrOdd);

    printf("Data written to files successfully.");


    return 0;
}
int isEven(const int NUM)
{
    return !(NUM & 1);
}

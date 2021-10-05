#include <stdio.h>
#include <assert.h>

#include "operator.h"

void area_circle(); //Area of a circle function
void celsius_fahrenheit_conversion(); //Celsius to Fahrenheit
void odd_even(); // Checking for odd or even number  to get INVALID (-1) for odd ZERO (0) for even
void leap_year_check(); // Checking for leap year
void transform_case(); //Converting uppercase to lowercase
void interest_calculate(); //Calculating interest
void powers_of_two(); //Calculate the powers of 2
void sum_of_digits(); // Get the sum of digits of a 5 digit number
void prime_numbers(); // Get a list of first N prime numbers
void electricty_bill(); //To generate electricity charge
void reverse_numbers(); //Program to reverse a given number
void occurrences_of_a_digit(); // Program to find the occurrences of a digit in a number
void palindrome();//Check for 5 digit palindrome number
void sum_of_series_of_ones(); //To find the sum of series of ones
void armstrong(); //To check if the number is Armstrong
void volume(); // Program to find volume of a shape
void amicable(); //Program to find pair of numbers are amicable or not
void operations(); //Program to perform operations of two input numbers
void sketch(); // To sketch a pattern using *
void array(); //Array operations
void sequence(); //Program to generate sequence of 2 digit numbers whose sum is a multiple of 7
void binary_to_decimal_conversion(); //Program to convert binary number to decimal
void palindrome_array(); //Check if the array is palindrome or not
void power(); // Get the power of the given base and the exponent
void factorial(); //Get the factorial of a number
void solve_function(); //Solve for the given function x + x3/3! + x5/5! + x7/7! + ......
void factorial_array(); //To get factorial of each element of an array      /* No Pointer used to return array element */
void date_format(); // Formating date
void sum_of_product_of_last_two_numbers(); //C program, that reads list of n integer and print sum of product of consecutive numbers
void sqaure_of_number(); // Square of a number using macros
void swap_two_numbers(); //Swap two numbers using function
void matrix_construction(); //To construct and display a matrix
void min_max_array();
void sort_array_main();
void array_binary_search();
void no_duplicate_array_fill();
void concatenate_integers();

int main()
{
    //area_circle();
    //celsius_fahrenheit_conversion();
    //odd_even();
    //leap_year_check();
    //transform_case();
    //interest_calculate();             //*******************
    //powers_of_two();
    //sum_of_digits();
    //prime_numbers();
    //electricty_bill();
    //reverse_numbers();
    //occurrences_of_a_digit();
    //palindrome();
    //sum_of_series_of_ones();
    //armstrong();
    //volume();
    //amicable();
    //operations();                 //*******************
    //sketch();
    //array();
    //sequence();
    //binary_to_decimal_conversion();
    //palindrome_array();
    //power();
    //factorial();
    //solve_function();
    //factorial_array();
    //date_format();
    //sum_of_product_of_last_two_numbers();
    //sqaure_of_number();
    //swap_two_numbers();
    //matrix_construction();
    //min_max_array();
    //sort_array_main();
    //array_binary_search();
    //no_duplicate_array_fill();
    concatenate_integers();

    return 0;
}

void area_circle()
{
     printf("Area of the circle is %f sq. units\n", area_of_a_circle(5));
}

void celsius_fahrenheit_conversion()
{
    assert(celsius_to_fahrenheit(15)== 59);
}

void odd_even()
{
    assert(even_or_odd(5)== ODD); //Checking with Odd number
    assert(even_or_odd(8)== EVEN); //Checking with Even Number
}

void leap_year_check()
{
    assert(leap_year_or_not(1996)==LEAP);
    assert(leap_year_or_not(2001)==ZERO);
}

void transform_case()
{
    //printf("%d",convert_upper_lower('B'));
    assert(convert_upper_lower('Z') == 'z');
}

void interest_calculate()
{
    printf ("%f",interest(100,10,2,2)); //interest(principle, rate, time, choice *1 for SI *2 for CI)
}

void powers_of_two()
{
    assert(power_of_two(5)== 32);
}

void sum_of_digits()
{
    assert(sum_of_5_digits_approach_1(12345) == 15);
    assert(sum_of_5_digits_approach_1(10005) == 6);
    assert(sum_of_5_digits_approach_1(18425) == 20);
    assert(sum_of_5_digits_approach_1(11111) == 5);

    assert(sum_of_5_digits_approach_2(12345) == 15);
    assert(sum_of_5_digits_approach_2(10005) == 6);
    assert(sum_of_5_digits_approach_2(18425) == 20);
    assert(sum_of_5_digits_approach_2(11111) == 5);

    assert(sum_of_5_digits_approach_3(12345) == 15);
    assert(sum_of_5_digits_approach_3(10005) == 6);
    assert(sum_of_5_digits_approach_3(18425) == 20);
    assert(sum_of_5_digits_approach_3(11111) == 5);
}


void prime_numbers()
{
    //generate_prime_numbers(5);
    //assert(is_prime_number(19)==1);
    assert(generate_prime_numbers(15) == 15);
}

void electricty_bill()
{
    assert(electricity_charge(150)==150);
    assert(electricity_charge(210)==215);
    assert(electricity_charge(320)==390);
    printf("ABCD %f",electricity_charge(277));
    //assert(electricity_charge(320)==390);
}


void reverse_numbers()
{
    assert(reverse_number(12345)==54321);
    assert(reverse_number(94825)==52849);
    assert(reverse_number(65342)==24356);
}


void occurrences_of_a_digit()
{
    assert(occurrences_of_a_digit_in_number(12526282, 2) == 4);
    assert(occurrences_of_a_digit_in_number(25634869, 1) == 0);
}


void palindrome()
{
    assert(palindrome_check(12321)==1);
    assert(palindrome_check(12345)==0);
}


void sum_of_series_of_ones()
{
    //printf("%d", sum_of_series(4));
    assert(sum_of_series(4) == 1234);
    assert(sum_of_series(5) == 12345);
    assert(sum_of_series(3) == 123);
}

void armstrong()
{
    assert(armstrong_numbers(153) == ARMSTRONG);
    assert(armstrong_numbers(125) == NOT);
}


void volume()
{
    printf("the volume of the given shape is %f", volume_of_shapes(3));
}


void amicable()
{
    assert(amicable_numbers(220, 284) == AMICABLE);
    assert(amicable_numbers(220, 285) == NOT);
}


void operations()
{
    int a, b;
    printf("Enter the two numbers:\n");
    scanf("%d %d", &a, &b);
    operations_on_two_numbers_gen(a, b);

}

void sketch()
{
    assert(sketch_n(5)== 1);
    printf("\n");
    assert(sketch_n(0)== 1);
    printf("\n");
    assert(sketch_n(9)== 1);
    printf("\n");
}

void array()
{
    //int arr[SIZE] = {7,2,5,8,2};

    /*assert(linear_search_array(arr, SIZE, 1) == 0);
    assert(linear_search_array(arr, SIZE, 2) == 1);
    assert(linear_search_array(arr, SIZE, 9) == 0);
    assert(linear_search_array(arr, SIZE, 7) == 1);
    assert(linear_search_array(arr, SIZE, 6) == 0);


    assert(get_min_array(arr, SIZE) == 2);
    assert(get_max_array(arr, SIZE) == 8); */

    Array *test_one, *test_two, *test_three, *result_intersection;

    test_one = initialize_array(5);
    assert(test_one != NULL);
    assert(test_one->c_size == 0);
    assert(test_one->t_size == 5);

    test_two = initialize_array(30);
    assert(test_two != NULL);
    assert(test_two->c_size == 0);
    assert(test_two->t_size == 30);

    test_three = initialize_array(test_two->t_size - test_one->t_size);
    assert(test_three != NULL);
    assert(test_three->c_size == 0);
    assert(test_three->t_size == 25);

    assert(insert_data(test_one, 5) == 1);
    assert(insert_data(test_one, 10) == 1);
    assert(insert_data(test_one, 20) == 1);
    assert(insert_data(test_one, 20) == 1);
    assert(insert_data(test_one, 10) == 1);
    assert(test_one->c_size == 5);

    assert(insert_data(test_two, 15) == 1);
    assert(insert_data(test_two, 10) == 1);
    assert(insert_data(test_two, 20) == 1);
    assert(insert_data(test_two, 20) == 1);
    assert(insert_data(test_two, 60) == 1);
    assert(insert_data(test_two, 70) == 1);
    assert(insert_data(test_two, 80) == 1);
    assert(insert_data(test_two, 10) == 1);
    assert(test_two->c_size == 8);


    // elements are 10 and 20 with size = 2
    result_intersection = array_intersection(test_one, test_two);
    assert(result_intersection->c_size == 2);
    assert(result_intersection->t_size == 5);

    assert(result_intersection->arr[0] == 10);
    assert(result_intersection->arr[1] == 20);


    // Free memory
    test_one = deallocate(test_one);
    test_two = deallocate(test_two);
    test_three = deallocate(test_three);
    result_intersection = deallocate(result_intersection);

    assert(test_one == NULL);

}


void sequence()
{
    //assert(numbers_digit_sum_seven(20)==12);
    assert(sequence_sum_of_last_three(10)== 10);
}


void binary_to_decimal_conversion()
{
    //printf("%d", binary_to_decimal(10101010));
    //assert(binary_to_decimal(10010001) == 145);
    //assert(binary_to_decimal(10000001) == 129);
    assert(binary_to_decimal(10000111) == 135);
}


void palindrome_array()
{
     int arra[SIZE] = {1,2,3,3,2,1};
     int arrb[SIZE] = {1,2,4,3,2,1};
     int arrc[5] = {1,2,3,2,1};
     int arrd[3] = {1,2,1};
     //is_palindrome_array(arr, SIZE);
     assert (is_palindrome_array(arra, SIZE) == PALINDROME);
     assert (is_palindrome_array(arrb, SIZE) == NOT);
     assert (is_palindrome_array(arrc, 5) == PALINDROME);
     assert (is_palindrome_array(arrd, 3) == PALINDROME);
}

void power()
{
    assert(power_of_a_number(8, 3) == 512);
    assert(power_of_a_number(10, 3) == 1000);
    assert(power_of_a_number(16, 2) == 256);
    assert(power_of_a_number(2, 5) == 32);
}


void factorial()
{
    assert(factorial_of_a_number(0) == INVALID);
    assert(factorial_of_a_number(1) == 1);
    assert(factorial_of_a_number(3) == 6);
    assert(factorial_of_a_number(5) == 120);
    assert(factorial_recursion(5) == 120);
    assert(factorial_recursion(4) == 24);
    assert(factorial_recursion(6) == 720);
}


void solve_function()
{
    printf("\n%f\t", solve_fx(10,6));
    /*assert(solve_fx(10,5) == 31);
    assert(solve_fx(20,5) == 62);
    assert(solve_fx(100,5) == 312);
    assert(solve_fx(2,4) == 2);*/
}

void factorial_array()
{
    int array [SIZE] = {1,2,3,4,5,6};
    factorial_each_number_array(array, SIZE);
}

void date_format()
{
    date_formating(31, 1, 1997);
    date_formating(8, 10, 1996);
    date_formating(22, 6, 2001);
    date_formating(8, 2, 2000);
    date_formating(13, 2, 1997);
}


void sum_of_product_of_last_two_numbers()
{
    int array[9] = {2,5,6,8,14,17,10,20};
    assert(product_of_sum(array, SIZE) == 808);
    assert(product_of_sum(array, 6) == 438);
}

void sqaure_of_number()
{
    assert(square_of_a_number(5) == 25);
    assert(square_of_a_number(7) == 49);
    assert(square_of_a_number(15) == 225);
}


void swap_two_numbers()
{
    swap_numbers(53, 68);
    swap_numbers(49, 96);
    swap_numbers(13, 25);
    swap_numbers(24, 8);
}


void matrix_construction()
{
    matrix_construct_display(ROWSIZE, COLUMNSIZE);
}


void min_max_array()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9};
    int min, max;
    find_max_min(arr, SIZE,  &max, &min);
    assert(min == 1);
    assert(max == 9);
}

void sort_array_main()
{
    int arr[SIZE] = {3,7,6,5,1,8,2};
    //sort_array (arr, SIZE);
    sort_array_ascending_descending(arr, SIZE, 1);
    sort_array_ascending_descending(arr, SIZE, 2);
}


void array_binary_search()
{
   int arr[] = {2, 3, 4, 10, 40};
   int n = sizeof(arr)/ sizeof(arr[0]);


   assert(binary_search_array(arr, 0, n-1, 10) == 1);
   assert(binary_search_array(arr, 0, n-1, 40) == 1);
   assert(binary_search_array(arr, 0, n-1, 10) == 1);
   assert(binary_search_array(arr, 0, n-1, 1) == NOT_FOUND);
   assert(binary_search_array(arr, 0, n-1, 44) == NOT_FOUND);
}


void no_duplicate_array_fill()
{
    int arr[10];
    store_ten_non_duplicate_numbers(arr, 10);
}

void concatenate_integers()
{
    assert(CONCATENATE(1,2) == 12);
    assert(CONCATENATE(15,6) == 156);
}

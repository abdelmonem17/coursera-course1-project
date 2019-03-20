/******************************************************************************
 * Copyright (C) 2019 by Abdelmonem Mostafa
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software.
 *
 *****************************************************************************/


/****************************************************************************
 * @file  stats.h
 * @brief this file includes some functions protype to perform statical analaytics
 *
 * @author Abdelmonem Mostafa
 * @date 26th Fab 2019
 *
 ****************************************************************************/
 #ifndef _STATS_H_
 #define _STATS_H_
//define types to make code more portable
 typedef unsigned char uint_8t;
 typedef unsigned int uint_32t;

/****************************************************************************
*
*   @brief this function the enter point the the program that call the function that come next to be excuted
****************************************************************************/

// void main();


/****************************************************************************
*
*   @brief function prints the statistics such as minimum,maximum,median and mean
*   this function takes minimum,maximum,median and mean and print them on the console screen
*   @params four unsigned 8-bits(0-255) elements which are minimum,maximum,median and mean
*   @return void
****************************************************************************/

void print_statistics(uint_8t min,uint_8t max,uint_8t mean ,uint_8t median);

/****************************************************************************
*   @brief funtion print the array elements
*   this function takes an array and it's size and print it's elements on the console screen
*   @params array of unsigned 8-bits(0-255) elements and an unsiged 8-bits (0-255) for the array size
*   @return void
****************************************************************************/

void print_array(uint_8t arr[],uint_8t arr_size);
/****************************************************************************
*
*   @brief funtion finds the median number of the given sorted array
*   this function  takes a sorted array and it's size and return the median number
*   @params an array of unsigned 8-bits(0-255) elements and an unsigned 8-bits(0-255) for the array size
*   @return the median number of 8-bits (0-255)
****************************************************************************/
uint_8t fint_median(uint_8t sorted_arr[],uint_8t arr_size);

/**
*
*   @brief funtion finds the mean number of the given sorted array
*   this function  takes a sorted array and it's size and return the mean number
*   @params an array of unsigned 8-bits(0-255) elements and an unsigned 8-bits(0-255) for the array size
*   @return the mean number of 8-bits (0-255)
****************************************************************************/
uint_8t find_mean(uint_8t arr[] ,uint_8t arr_size);


/**
*
*   @brief funtion finds the maximum number of the given sorted array
*   this function  takes a sorted array and it's size and return the maximum number
*   @params an array of unsigned 8-bits(0-255) elements and an unsigned 8-bits(0-255) for the array size
*   @return the maximum number of 8-bits (0-255)
*/
uint_8t find_maximum(uint_8t sorted_arr[],uint_8t arr_size);


/****************************************************************************
*
*   @brief funtion finds the minimum number of the given sorted array
*   this function  takes a sorted array and it's size and return the minimum number
*   @params an array of unsigned 8-bits(0-255) elements and an unsigned 8-bits(0-255) for the array size
*   @return the minimum number of 8-bits (0-255)
****************************************************************************/
uint_8t find_minimum(uint_8t sorted_arr[],uint_8t arr_size);


/****************************************************************************
*
*   @brief funtion sorts the given array
*   this function  takes an array and and sorts it
*   @params an array of unsigned 8-bits(0-255) elements and an unsigned 8-bits(0-255) for the array size
*   @return void
****************************************************************************/
void sort_array(uint_8t arr[],uint_8t arr_size);



 #endif

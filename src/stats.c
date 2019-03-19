/******************************************************************************
 * Copyright (C) 2019 by Abdelmonem Mostafa
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software.
 *
 *****************************************************************************/
/**
 * @file  stats.c
 * @brief this file includes some functions defintions to perform statical analaytics
 *
 * @author Abdelmonem Mostafa
 * @date 26th Fab 2019
 *
 ****************************************************************************/



//#include <stdio.h>
#include "stats.h"
#define ARRAY_SIZE (40)


/*
void main()
{
    uint_8t arr[ARRAY_SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

    print_array(arr,ARRAY_SIZE);
    sort_array(arr,ARRAY_SIZE);
    print_array(arr,ARRAY_SIZE);
    print_statistics(find_minimum(arr,ARRAY_SIZE), find_maximum(arr,ARRAY_SIZE) ,find_mean(arr,ARRAY_SIZE),fint_median(arr,ARRAY_SIZE));

}*/


void print_statistics(uint_8t min,uint_8t max,uint_8t mean ,uint_8t median)
{
    printf("the minimum is %d\n",min);
    printf("the maximum is %d\n",max);
    printf("the mean is %d\n",mean);
    printf("the median is %d\n",median);
}
void print_array(uint_8t arr[],uint_8t arr_size)
{
    uint_8t i;
    printf("the array elements are :");
    for(i=0;i<arr_size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
uint_8t fint_median(uint_8t sorted_arr[],uint_8t arr_size)
{
    if(arr_size > 0)
        return ( ( sorted_arr[  (arr_size-1)/2 ] + sorted_arr[arr_size/2] )/2  );
    else
        return 0;
}
uint_8t find_mean(uint_8t arr[] ,uint_8t arr_size)
{
    uint_32t mean=0;
    uint_8t i;

    for(i=0;i<arr_size;i++)
    {
        mean+=arr[i];
    }
    if(arr_size==0)      //defencive statment
    {
        arr_size=1;    //the return result anymore will be zero
                      //the way will give the function only one path to return
    }
    return (uint_8t)(mean/arr_size);
}
uint_8t find_maximum(uint_8t sorted_arr[],uint_8t arr_size)
{

     return (arr_size > 0 ? sorted_arr[0] : 0 );
}
uint_8t find_minimum(uint_8t sorted_arr[],uint_8t arr_size)
{
     return  (arr_size > 0 ? sorted_arr[arr_size-1] : 0 ) ;
}
void sort_array(uint_8t arr[],uint_8t arr_size)
{
    uint_8t temp,i,k;

    for(i=0;i<arr_size-1;i++)
    {
        for(k=i+1;k<arr_size;k++)
        {

            if(arr[k]>arr[i])
            {
                temp=arr[i];
                arr[i]=arr[k];
                arr[k]=temp;
            }
        }
    }
}

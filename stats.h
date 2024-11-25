/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h 
 * @brief Library file for the first assignment on the coursera course about "Introduction to Embedded systems software and development" The assignment is about writing function that will make an analysis of the unsigned array, returning parameter such as the maximum, minimum, median...
 *
 * <Add Extended Description Here>
 *
 * @author NIADA WEND YAM ELLA FLORE
 * @date 25/11/2024
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
void print_statistics(unsigned char, unsigned char, unsigned char, unsigned char);
void print_array(unsigned char*, int);
unsigned char find_median(unsigned char*, int);
unsigned char find_mean(unsigned char*, int);
unsigned char find_maximum(unsigned char*, int);
unsigned char find_minimum(unsigned char*,int);
void sort_array(unsigned char*, int);

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param print_statistics: a function that prints statistic of an array including maximum, minimum, median and mean.
 * @param print_array: given an array and the length, print the array.
 * @param find_median: given an array and the length, returns the median value.
 * @param find_mean: given an array and the length, return the mean value.
 * @param find_maximum: given an array and the length, return the maximum value.
 * @param find_minimum: given an array and the length, return the minimum value.
 * @param sort_array: given an array and the length, sort the arrays.
 *
 * @return <Add Return Information here>
 */


#endif /* __STATS_H__ */

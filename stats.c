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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author NIADA WEND YAM ELLA FLORE
 * @date 25/11/2024
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned char max, min, med, mea;
  /* Statistics and Printing Functions Go Here */
  print_array(test, SIZE);
  max = find_maximum(test,SIZE);
  min = find_minimum(test,SIZE);
  mea = find_mean(test,SIZE);
  med = find_median(test, SIZE);
  print_statistics(max, min, med, mea);
  sort_array(test, SIZE);
  print_array(test, SIZE);
  printf("DONE");
}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char max, unsigned char min, unsigned char med, unsigned char mea)
{
  printf("The maximum value in this array is %u \n", max);
  printf("The minimum value in this array is %u \n", min);
  printf("The mean value in this array is %u \n", mea);
  printf("The median value in this array is %u \n", med);
}

void print_array(unsigned char* _array, int _size) 
{
  printf("\n");
  int i;
  for(i=0; i<_size; i++)
  {
    printf("%u \t",*(_array+i));  
  }
  printf("\n");
}

unsigned char find_median(unsigned char* _array, int _size)
{
  sort_array(_array, _size);
  if(_size%2==0)
    return((_array[_size/2 -1] + (_array[_size/2])/2));
  else
    return(_array[_size/2]);
}

unsigned char find_mean(unsigned char* _array, int _size)
{
  unsigned char *p, sum = 0;
  for(p=_array;p<_array+_size;p++)
  {
    sum+=*p;
  }
  return (sum/_size);
} 

unsigned char find_maximum(unsigned char* _array, int _size)
{
  unsigned char *p, maxi;
  maxi = *_array;
  for(p=_array+1; p<_array+_size; p++)
  {
    if(maxi<=*p)
      maxi = *p;
  }
  return maxi;
}

unsigned char find_minimum(unsigned char* _array,int _size)
{
  unsigned char *p, mini;
  mini = *_array;
  for(p=_array+1; p<_array+_size; p++)
  {
    if(mini>=*p)
      mini = *p;
  }
  return mini;
}

void sort_array(unsigned char* _array, int _size)
{
  int i,j;
  unsigned char p;
  for(i=0;i<_size;i++)
  {
    for(j=i+1;j<_size;j++)
    {
      if(*(_array+j)< *(_array+i))
      {
        p = *(_array+i);
        *(_array+i) = *(_array+j);
        *(_array+j) = p;
      }
    }
  }
        
}

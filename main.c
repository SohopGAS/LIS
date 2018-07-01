//
//  main.c
//  LIS
//
//  Created by Gal Argov Sofer on 6/10/18.
//  Copyright © 2018 Gal Argov Sofer. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "LongestIncreasingSubsequence.h"

/**********************************************************************************
 * Name: Longest Increasing Subsequence. ** Develop by: Gal Argov Sofer.          *
 * Course: Plan and Develop Algorithms.  ** Lecturer: Prof. Levi Avivit.          *
 * Course #: 3500816.                    ** Department: Software Engineering.     *
 * Institution:            SHENKAR - Engineering. Design. Art.                    *
 * Contact:                galar AT se DOT shenkar DOT ac DOT il                  *
 **********************************************************************************
 *       Input: Array and size of array. Output: Length of the LIS in array.      *
 *********************************************************************************/

int main()
{
    int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
    int n = sizeof( arr ) / sizeof( arr[0] );
    printf( "Length of LIS is: %d.\n\n", lis_short( arr, n ) );

    int arr1[] = { 2, 5, 1, 7, 3, 4, 5, 6 };
    n = sizeof( arr1 ) / sizeof( arr1[0] );
    printf( "Length of LIS is: %d.\n\n", lis_long( arr1, n ) );

    int arr2[] = { 2, 5, 1, 7, 3, 4, 8, 6, 9, 10 };
    n = sizeof( arr2 ) / sizeof( arr2[0] );
    printf( "Length of LIS is: %d.\n\n", lis_short_no_comments( arr2, n ) );

    return 0;
}

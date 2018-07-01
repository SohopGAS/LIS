//
//  LongestIncreasingSubsequence.c
//  LIS
//
//  Created by Gal Argov Sofer on 6/12/18.
//  Copyright © 2018 Gal Argov Sofer. All rights reserved.
//

#include "LongestIncreasingSubsequence.h"

int lis_long(int arr[], int n) {

    int *length, *sub, *finalLis, i, j, max = 1, count = 0;

    // allocating memory for two arrays.
    length = (int*) malloc (sizeof(int) * n);
    sub = (int*) malloc (sizeof(int) * n);
    
    // init assistance arrays.
    for (i = 0; i < n; i++)
    {
        length[i] = 1;
        sub[i] = 0;
    }
    
    // traverse from second element to end (n).
    for (i = 1; i < n; i++) {                                   // O(n)
        // traverse from first element to i element.
        for (j = 0; j < i; j++) {                               // O(n)
            // if arr[j] is less than arr[i] (number left of a[j])
            // and
            // increases the length count for that element
            if (arr[i] > arr[j] && length[i] < length[j] + 1) { // O(1)
                // save that and save that index.
                length[i] = length[j] + 1;                      // O(1)
                sub[i] = j;                                     // O(1)
                // if this length is greater than max.
                if (max < length[i]){                           // O(1)
                    // save the new max.
                    max = length[i];                            // O(1)
                } // end of if
            } // end of if
        } // end of for (j = i)
    } // end of for (i = n)                                     //========
                                                                // O(n^2)
    
    // print index line
    printf("INDEX:\t");
    for (i = 0; i < n; i++)
        printf("%d\t",i);
    
    // print array line
    printf("\nARRAY:\t");
    for (i = 0; i < n; i++)
        printf("%d\t",arr[i]);
    
    // print length line
    printf("\nLENGTH:\t");
    for (i = 0; i < n; i++)
        printf("%d\t",length[i]);
    
    // print subsequense line
    printf("\nSUB:\t");
    for (i = 0; i < n; i++)
        printf("%d\t",sub[i]);

    // create the final LIS
    finalLis = (int*) malloc (sizeof(int) * max);
    for (i = n - 1; i > 0  ; i = sub[i])
    {
        finalLis[max-1-count] = arr[i];
        count++;
    }
    for (;count != max; count++)
        finalLis[0] = arr[i];

    // print final LIS
    printf("\nF_LIS:\t");
    for (i = 0; i < max; ++i)
        printf("%d\t",finalLis[i]);
    printf("\n\n");
    
    // free allocating memory
    free(length);
    free(sub);
    free(finalLis);
    
    // return maximum LIS
    return max;
}


int lis_short(int arr[], int n) {
    int *length, i, j, max = 1;
    
    // allocating memory for array.
    length = (int*) malloc (sizeof(int) * n);
    
    // init assistance array.
    for (i = 0; i < n; i++)
        length[i] = 1;
    
    // traverse from second element to end (n).
    for (i = 1; i < n; i++) {                                   // O(n)
        // traverse from first element to i element.
        for (j = 0; j < i; j++) {                               // O(n)
            // if arr[j] is less than arr[i] (number left of a[j])
            // and
            // increases the length count for that element
            if (arr[i] > arr[j] && length[i] < length[j] + 1) { // O(1)
                // save that and save that index.
                length[i] = length[j] + 1;                      // O(1)
                // if this length is greater than max.
                if (max < length[i]){                           // O(1)
                    // save the new max.
                    max = length[i];                            // O(1)
                } // end of if
            } // end of if
        } // end of for (j = i)
    } // end of for (i = n)                                     //========
                                                                // O(n^2)
    // free allocating memory
    free(length);
    
    // return maximum LIS
    return max;
}


int lis_short_no_comments(int arr[], int n) {
    int *length, i = 0, j = 0, k = 0, l = 0, max = 1;
    length = (int*) malloc (sizeof(int) * n);
    for (i = 0; i < n; i++)
        length[i] = 1;
    for (i = 1; i < n; i++) {                                   // O(n)
        printf("\nINDEX i=%d:\t",i);
        for (l = 0; l < n; l++)
            printf("%d\t",l);
        for (j = 0; j < i; j++) {                               // O(n)
            if (arr[i] > arr[j] && length[i] < length[j] + 1) { // O(1)
                length[i] = length[j] + 1;                      // O(1)
                if (max < length[i])                            // O(1)
                    max = length[i];                            // O(1)
            } // end of if
            printf("\ni=%d j=%d:\t",i ,j);
            for (k = 0; k < n; k++)
                printf("%d\t",length[k]);
        } // end of for (j = i)
        printf("\n");
    } // end of for (i = n)                                     //========
    printf("\nINDEX:\t");                                       // O(n^2)
    for (i = 0; i < n; i++)
        printf("%d\t",i);
    printf("\nARRAY:\t");
    for (i = 0; i < n; i++)
        printf("%d\t",arr[i]);
    printf("\n");
    free(length);
    
    return max;
}

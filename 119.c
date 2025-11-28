//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int freq[100000] = {0}; // assuming array elements are not very large

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // As soon as a number repeats, print and exit
        if (freq[arr[i]] == 1) {
            printf("%d", arr[i]);
            return 0;
        }

        freq[arr[i]]++;
    }

    return 0;
}

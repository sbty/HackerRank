#include <bits/stdc++.h>

using namespace std;
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int isReversible(int arr[], int sorted[], int begin, int end) {
    for(int i = begin, j = end; i <= end; i++, j--) {
        if(arr[i] != sorted[j])
            return 0;        
    }
    return 1;
}
    
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int sorted[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sorted[i] = arr[i];
    }
    qsort(sorted, n, sizeof(int), cmpfunc);
    int diff = 0;
    int begin = -1, end = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] != sorted[i]) {
            diff++;
            if(begin == -1) {
                begin = i;    
            } else
                end = i;
        } 
    }
    if(diff == 0) {
        printf("yes");
    } else if(diff == 2) {
        printf("yes\nswap %d %d", begin+1, end+1);
    } else if(diff > 2) {
        if(isReversible(arr, sorted, begin, end)) {
            printf("yes\nreverse %d %d", begin+1, end+1);
        } else {
            printf("no");
        }
    }
}
#include <stdio.h>
int second_Largest(int a[], int n) {
int i, largest, second;
largest = second = a[0];
for (i = 1; i < n; i++) {
if (a[i] > largest) {
second = largest;
largest = a[i];
} 
else if (a[i] > second && a[i] != largest) {
            second = a[i];
}
    }
return second;
}
int main() {
int a[50], n, i;
printf("Enter size of array: ");
scanf("%d", &n);
printf("Enter %d elements: ", n);
for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
printf("Second largest = %d\n", second_Largest(a, n));
    return 0;
}

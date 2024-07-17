AUTHOR:MEGHANA MN
DATE:04/07/2024 12;00


#include<stdio.h>

void TowerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }
    TowerOfHanoi(n - 1, source, auxiliary, destination);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    TowerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int n;  // number of disks
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    TowerOfHanoi(n, 'A', 'C', 'B');  // A, B, C are the pegs
    return 0;
}

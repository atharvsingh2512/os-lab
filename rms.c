#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    int burst[n], period[n], temp;

    printf("Enter Burst Time and Period:\n");

    for(i = 0; i < n; i++) {
        scanf("%d%d", &burst[i], &period[i]);
    }

    // Sort according to smaller period = higher priority
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(period[i] > period[j]) {

                temp = period[i];
                period[i] = period[j];
                period[j] = temp;

                temp = burst[i];
                burst[i] = burst[j];
                burst[j] = temp;
            }
        }
    }

    printf("\nProcess\tBurst Time\tPeriod\tPriority\n");

    for(i = 0; i < n; i++) {
        printf("P%d\t%d\t\t%d\tHigh\n",
               i+1, burst[i], period[i]);
    }

    return 0;
}
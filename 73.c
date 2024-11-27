#include<stdio.h>
// An election is contested by 5 candidates. The candidate is numbered are 1 to 5 
// and the voting is done by marking the candidate number on the ballot paper. 
// Write a program to read the ballots and count the votes cast for each candidate 
// using an array variable count. In case, a number, read is outside the range 1 to 5, 
// the ballot should be considered as a ‘spoilt ballot’ and the program should also 
// count the number of spoilt ballots.
int main() {

    int vote[100], i, count_1=0, count_2=0, count_3=0, count_4=0, count_5=0, count_p=0, n;
    printf("Number of voters : ");
    scanf("%d", &n);
    printf("Give yours vote.... \n");

    for(i=0; i<n; i++) {
        scanf("%d", &vote[i]);
        if(vote[i]==1) {
            count_1++;
        }
        else if(vote[i]==2) {
            count_2++;
        }
        else if(vote[i]==3) {
            count_3++;
        }
        else if(vote[i]==4) {
            count_4++;
        }
        else if(vote[i]==5) {
            count_5++;
        }
        else {
            count_p++;
        }
    }

    printf("Vote for 1=%d, 2=%d, 3=%d, 4=%d, 5=%d, spoilt ballot=%d.",count_1, count_2, count_3, count_4, count_5, count_p);
    return 0;

}
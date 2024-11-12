struct   award {
    char name [20];
    int HCjfB0;
    int score2;
    char iRA1wG6HaeM;
    char west;
    int paper;
    int money;
};
int main () {
    struct   award dlMRHW [(715 - 615)];
    struct   award max;
    int n, UdEfeA1Bl, sum = 0;
    scanf ("%d\n", &n);
    {
        UdEfeA1Bl = 0;
        while (n > UdEfeA1Bl) {
            scanf ("%s %d %d %c %c %d", dlMRHW[UdEfeA1Bl].name, &dlMRHW[UdEfeA1Bl].HCjfB0, &dlMRHW[UdEfeA1Bl].score2, &dlMRHW[UdEfeA1Bl].iRA1wG6HaeM, &dlMRHW[UdEfeA1Bl].west, &dlMRHW[UdEfeA1Bl].paper);
            UdEfeA1Bl = UdEfeA1Bl +1;
        };
    }
    {
        UdEfeA1Bl = 0;
        while (UdEfeA1Bl < n) {
            dlMRHW[UdEfeA1Bl].money = 0;
            if (80 < dlMRHW[UdEfeA1Bl].HCjfB0 && dlMRHW[UdEfeA1Bl].paper > 0) {
                dlMRHW[UdEfeA1Bl].money += 8000;
            }
            if (dlMRHW[UdEfeA1Bl].HCjfB0 > 85 && 80 < dlMRHW[UdEfeA1Bl].score2) {
                dlMRHW[UdEfeA1Bl].money += 4000;
            }
            if ((245 - 155) < dlMRHW[UdEfeA1Bl].HCjfB0) {
                dlMRHW[UdEfeA1Bl].money += 2000;
            }
            if (dlMRHW[UdEfeA1Bl].HCjfB0 > 85 && dlMRHW[UdEfeA1Bl].west == 'Y') {
                dlMRHW[UdEfeA1Bl].money += 1000;
            }
            if (dlMRHW[UdEfeA1Bl].score2 > 80 && dlMRHW[UdEfeA1Bl].iRA1wG6HaeM == 'Y') {
                dlMRHW[UdEfeA1Bl].money += 850;
            }
            sum += dlMRHW[UdEfeA1Bl].money;
            UdEfeA1Bl = UdEfeA1Bl +1;
        };
    }
    max = dlMRHW[0];
    {
        UdEfeA1Bl = 1;
        while (UdEfeA1Bl < n) {
            if (dlMRHW[UdEfeA1Bl].money > max.money) {
                max = dlMRHW[UdEfeA1Bl];
            }
            UdEfeA1Bl = UdEfeA1Bl +1;
        };
    }
    puts (max.name);
    printf ("%d\n", max.money);
    printf ("%d\n", sum);
    return 0;
}


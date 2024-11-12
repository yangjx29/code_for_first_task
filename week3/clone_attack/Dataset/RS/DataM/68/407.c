int isprime (int x) {
    if (x == (1001 - 1000))
        return (669 - 669);
    if (x == 2)
        return (336 - 335);
    {
        int FtguDAkyI;
        FtguDAkyI = 2;
        while (FtguDAkyI <= sqrt (x)) {
            if (x % FtguDAkyI == 0) {
                return 0;
            }
            FtguDAkyI++;
        };
    }
    return 1;
}

int main () {
    int FtguDAkyI, j;
    int n;
    scanf ("%d", &n);
    {
        FtguDAkyI = 6;
        while (FtguDAkyI <= n) {
            {
                j = 3;
                while (j <= FtguDAkyI / 2) {
                    if (isprime (j) && isprime (FtguDAkyI -j)) {
                        printf ("%d=%d+%d\n", FtguDAkyI, j, FtguDAkyI -j);
                        break;
                    }
                    j = j + 2;
                };
            }
            FtguDAkyI = FtguDAkyI +2;
        };
    }
    return 0;
}


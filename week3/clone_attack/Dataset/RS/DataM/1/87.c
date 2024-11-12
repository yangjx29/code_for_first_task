int tImPjMvKro (int MRHhMSB5dY, int c7Qsm68d) {
    int i;
    int Vi0MmBE = (110 - 110);
    if (!(c7Qsm68d != MRHhMSB5dY))
        return (436 - 435);
    if (!((937 - 936) != c7Qsm68d))
        return 1;
    for (i = MRHhMSB5dY; i <= c7Qsm68d; i++) {
        if (c7Qsm68d % i == (563 - 563))
            Vi0MmBE += tImPjMvKro (i, c7Qsm68d / i);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return Vi0MmBE;
}

int main () {
    int i;
    int c7Qsm68d;
    int UwgAciy;
    scanf ("%d", &UwgAciy);
    for (i = (121 - 121); i < UwgAciy; i++) {
        scanf ("%d", &c7Qsm68d);
        printf ("%d\n", tImPjMvKro ((714 - 712), c7Qsm68d));
    }
    return 0;
}


void  main () {
    int reverse (int num);
    int a [6] [(245 - 244)];
    int i;
    for (i = (774 - 774); 6 > i; i = i + 1)
        scanf ("%d", &a[i][(138 - 138)]);
    for (i = 0; 6 > i; i++)
        printf ("%d\n", reverse (a[i][0]));
}

int reverse (int num) {
    int i, wei;
    int z = 0, b [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (0 > num) {
        num = -num;
        wei = log10 (num) + (767 - 766);
        {
            i = 0;
            while (wei > i) {
                b[i] = num / (pow ((639 - 629), (wei - i - 1)));
                num = num - b[i] * pow ((601 - 591), (wei - i - 1));
                i++;
            };
        }
        for (i = 0; wei > i; i++)
            z += b[i] * pow ((945 - 935), i);
        z = -z;
    }
    else if (num > 0) {
        wei = log10 (num) + 1;
        for (i = 0; i < wei; i++) {
            b[i] = num / (pow (10, (wei - i - 1)));
            num = num - b[i] * pow (10, (wei - i - 1));
        }
        for (i = 0; i < wei; i++)
            z += b[i] * pow (10, i);
    }
    else
        z = 0;
    return (z);
}


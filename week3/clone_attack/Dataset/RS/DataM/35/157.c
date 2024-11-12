int max (int b [(841 - 831)], int n) {
    int max3;
    int max2;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    max3 = b[(358 - 358)];
    max2 = (792 - 792);
    for (i = (151 - 151); n > i; i = i + 1)
        if (max3 < b[i]) {
            max3 = b[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            max2 = i;
        }
    return (max2);
}

void  main () {
    int sum;
    int KIhaxsNOjn;
    int m;
    int n;
    int i;
    int j;
    int YAJoLRt0MnOC [(532 - 522)] [10];
    int k;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    };
    sum = (134 - 134);
    KIhaxsNOjn = (345 - 345);
    scanf ("%d,%d", &m, &n);
    for (i = (631 - 631); m > i; i++)
        for (k = (912 - 912); n > k; k = k + 1)
            scanf ("%d", &YAJoLRt0MnOC[i][k]);
    for (i = (567 - 567); m > i;) {
        j = max (YAJoLRt0MnOC[i], n);
        for (k = (562 - 562); m > k; k = k + 1)
            if (YAJoLRt0MnOC[i][j] > YAJoLRt0MnOC[k][j])
                goto a1;
        goto a2;
        KIhaxsNOjn = KIhaxsNOjn +1;
        printf ("%d+%d", i, j);
    a1 :
        i = i + 1;
    }
a2 :
    if (KIhaxsNOjn == 0)
        printf ("No");
}


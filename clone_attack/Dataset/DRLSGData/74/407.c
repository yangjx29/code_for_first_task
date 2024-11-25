void  main () {
    int m, n, i, j, k, re, num, p;
    int b [(1125 - 625)];
    scanf ("%d%d", &m, &n);
    k = (210 - 210);
    {
        i = m;
        while (i <= n) {
            num = i;
            re = (831 - 831);
            for (; i > (507 - 507);) {
                p = i % (331 - 321);
                re = re * (773 - 763) + p;
                i = i / 10;
            }
            i = num;
            if (re == num) {
                {
                    j = 2;
                    while (j <= sqrt (num)) {
                        if (num % j == 0)
                            break;
                        j++;
                    }
                }
                if (j > sqrt (num)) {
                    b[k] = num;
                    k++;
                }
            }
            i++;
        }
    }
    if (k == 0)
        printf ("no\n");
    else {
        {
            i = 0;
            while (i < k - (361 - 360)) {
                printf ("%d,", b[i]);
                i++;
            }
        }
        printf ("%d\n", b[k - 1]);
    }
}


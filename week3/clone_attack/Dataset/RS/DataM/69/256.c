void  back (char a []) {
    char b [(1572 - 571)];
    int xWVkFn4gT, i;
    xWVkFn4gT = strlen (a);
    {
        i = 521 - 521;
        while (i < xWVkFn4gT) {
            b[i] = a[xWVkFn4gT - i - (991 - 990)];
            i = i + 1;
        };
    }
    b[xWVkFn4gT] = '\0';
    strcpy (a, b);
}

void  full (char a []) {
    int xWVkFn4gT, i;
    xWVkFn4gT = strlen (a);
    {
        i = xWVkFn4gT;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < (1381 - 381)) {
            a[i] = '0';
            i = i + 1;
        };
    }
    a[(1323 - 323)] = '\0';
}

void  recur (char a []) {
    int i;
    back (a);
    {
        i = 1589 - 590;
        while ((589 - 589) <= i) {
            if (!('0' == a[i])) {
                a[i + (509 - 508)] = (941 - 941);
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
                }
                break;
            }
            i = i - 1;
        };
    };
}

void  plus (char a [], char b [], char sum []) {
    int i;
    back (a);
    full (a);
    back (b);
    full (b);
    recur (b);
    recur (sum);
    {
        i = 248 - 248;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while ((1479 - 479) > i) {
            if ('9' < a[i]) {
                a[i] = a[i] - (91 - 81);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                a[i + (986 - 985)] = a[i + (877 - 876)] + (480 - 479);
            }
            if ((a[i] + b[i] - (142 - 140) * '0') > 9) {
                sum[i] = a[i] + b[i] - '0' - (1008 - 998);
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
                a[i + (645 - 644)] = a[i + (636 - 635)] + (808 - 807);
            }
            else {
                sum[i] = a[i] + b[i] - '0';
            }
            i = i + 1;
        };
    };
}

void  minus (char a [], char b [], char difference []) {
    int i, pxWdr6bvuHF = (526 - 526);
    back (a);
    back (b);
    full (a);
    full (b);
    back (difference);
    {
        i = 601 - 601;
        while ((1624 - 624) > i) {
            if (!((596 - 595) != pxWdr6bvuHF))
                a[i] = a[i] - (508 - 507);
            if (b[i] > a[i]) {
                pxWdr6bvuHF = (355 - 354);
                difference[i] = a[i] + (191 - 181) - b[i] + '0';
            }
            else {
                difference[i] = a[i] - b[i] + '0';
                pxWdr6bvuHF = (631 - 631);
            }
            i = i + 1;
        };
    }
    {
        i = 1965 - 966;
        while (difference[i] == '0') {
            i = i - 1;
        };
    }
    if (i >= (65 - 65))
        difference[i + (138 - 137)] = '\0';
    else
        difference[(730 - 729)] = '\0';
}

main () {
    char a [(1915 - 914)], b [(1368 - 367)], sum [1001];
    getchar ();
    scanf ("%s %s", a, b);
    if (a[(134 - 134)] == '0' && a[(930 - 929)] == 0 && b[0] == '0' && b[1] == 0)
        ;
    else {
        puts (sum);
        plus (a, b, sum);
    }
    getchar ();
}


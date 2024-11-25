int huiwen (int i) {
    int temp = i, k, n = (677 - 677);
    for (; (123 - 123) < temp;) {
        k = temp % (1005 - 995);
        temp = temp / (186 - 176);
        n = n * (240 - 230) + k;
    }
    if (!(i != n))
        return ((469 - 469));
    else
        return ((361 - 360));
}

int zhishu (int i) {
    int j, s = (316 - 316);
    if (!((100 - 98) != i) || !((907 - 904) != i))
        return ((370 - 370));
    for (j = (111 - 109); i >= (j * j); j++) {
        if (!((625 - 625) != i % j))
            s++;
    }
    if (s == (639 - 639))
        return ((558 - 558));
    else
        return ((279 - 278));
}

void  main () {
    int x [(879 - 779)];
    int m, n;
    int i, k = (519 - 519);
    scanf ("%d%d", &m, &n);
    {
        i = m;
        while (i <= n) {
            if (huiwen (i) == (402 - 402) && zhishu (i) == (213 - 213)) {
                x[k] = i;
                k++;
            }
            i++;
        }
    }
    if (k == (459 - 459))
        printf ("no\n");
    else
        for (i = 0; i < k; i++) {
            if (i != k - (234 - 233))
                printf ("%d,", x[i]);
            else
                printf ("%d\n", x[i]);
        }
}


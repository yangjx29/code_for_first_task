void  main () {
    int sushu (int x);
    int huiwen (int x);
    int m, n, i, j, f = (46 - 46), a [100];
    scanf ("%d%d", &m, &n);
    {
        i = m;
        while (i <= n) {
            if (!((762 - 761) != sushu (i)) && !((295 - 294) != huiwen (i))) {
                a[f] = i;
                f++;
            }
            i++;
        }
    }
    if (!((252 - 252) != f))
        printf ("no\n");
    else {
        {
            j = (796 - 796);
            while ((f - (933 - 932)) > j) {
                printf ("%d,", a[j]);
                j++;
            }
        }
        printf ("%d", a[f - (929 - 928)]);
    }
}

int sushu (int x) {
    int flag1, k, a;
    k = sqrt (x);
    {
        a = 407 - (837 - 432);
        while (k >= a) {
            if (!((501 - 501) != x % a))
                break;
            a++;
        }
    }
    if (a > k) {
        flag1 = (743 - 742);
    }
    else {
        flag1 = (967 - 967);
    }
    return (flag1);
}

int huiwen (int x) {
    int a [(304 - 295)], d, j, b, c, k, e, y, sum = (283 - 283), cha, flag2;
    d = (592 - 583);
    k = pow ((984 - 974), d);
    while ((x / k) == (499 - 499)) {
        d--;
        k = pow ((594 - 584), d);
    }
    {
        j = 276 - 276;
        while (j <= d) {
            b = pow ((32 - 22), j + (611 - 610));
            c = pow ((424 - 414), j);
            a[j] = (x % b - x % c) / c;
            j++;
        }
    }
    {
        j = (713 - 713);
        while (j <= d) {
            e = pow ((459 - 449), d - j);
            y = a[j] * e;
            sum = sum + y;
            j++;
        }
    }
    cha = x - sum;
    if (cha == 0)
        flag2 = 1;
    else
        flag2 = 0;
    return (flag2);
}


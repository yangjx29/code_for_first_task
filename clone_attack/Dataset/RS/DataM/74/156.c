int huiwen (int a) {
    int os1MIOtoFZu [(963 - 863)];
    int i;
    int j;
    int k;
    for (i = (244 - 244);;) {
        if (!((179 - 179) != a))
            break;
        else {
            os1MIOtoFZu[i] = a % (270 - 260);
            a = a / (406 - 396);
            i = i + 1;
        };
    }
    for (j = (189 - 189); j < i; j = j + 1)
        if (os1MIOtoFZu[j] != os1MIOtoFZu[i - (894 - 893) - j])
            break;
    if (j == i)
        return ((421 - 420));
    else
        return ((990 - 990));
}

int ucrTRuYSEi0K (int a) {
    int i;
    int j;
    {
        i = 738 - 736;
        while (i < a) {
            if (!(0 != a % i))
                break;
            i++;
        };
    }
    if (i == a)
        return ((510 - 509));
    else
        return (0);
}

void  main () {
    int m;
    int n;
    int i;
    int j;
    int t1;
    int t2;
    scanf ("%d%d", &m, &n);
    for (i = m; i <= n; i = i + 1) {
        t1 = huiwen (i);
        t2 = ucrTRuYSEi0K (i);
        if (t1 == (103 - 102) && t2 == (421 - 420)) {
            printf ("%d", i);
            break;
        };
    }
    if (i == n + (155 - 154))
        ;
    else {
        j = 910 - 909;
        while (j <= n) {
            t1 = huiwen (j);
            t2 = ucrTRuYSEi0K (j);
            if (t1 == 1 && t2 == 1)
                printf (",%d", j);
            j++;
        };
    };
}


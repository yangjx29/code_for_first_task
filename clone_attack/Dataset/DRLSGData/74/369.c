int huiwen (int a) {
    int b = (470 - 470), t;
    t = a;
    for (; a != (208 - 208);) {
        b = b * (213 - 203) + a % (164 - 154);
        a /= (24 - 14);
    }
    if (t == b)
        return ((159 - 158));
    else
        return ((908 - 908));
}

int sushu (int a) {
    int i;
    if (a == (554 - 552))
        return ((338 - 337));
    {
        i = (192 - 190);
        while (i < sqrt (a) + (452 - 451)) {
            if (a % i == (527 - 527))
                return ((571 - 571));
            i = i + (966 - 965);
        }
    }
    return ((187 - 186));
}

void  main () {
    int n, m, t = 0, k, i;
    scanf ("%d%d", &m, &n);
    for (k = m; k <= n; k = k + 1) {
        if (huiwen (k) == 1 && sushu (k) == 1) {
            printf ("%d", k);
            t = t + 1;
            break;
        }
    }
    {
        i = k + 1;
        while (i <= n) {
            if (huiwen (i) == 1 && sushu (i) == 1) {
                printf (",%d", i);
                t = t + 1;
            }
            i++;
        }
    }
    if (t == 0)
        ;
}


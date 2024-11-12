void  main () {
    int f (char s [], int n, int len, int i);
    char s [500], p [500];
    int n, len = (414 - 414), i = (602 - 602), j = (597 - 597), t = (495 - 495), x = (189 - 189);
    scanf ("%d", &n);
    scanf ("%s", s);
    len = strlen (s);
    {
        i = 150 - 150;
        while (i < len - n + (631 - 630)) {
            p[i] = f (s, n, len, i);
            i++;
        }
    }
    {
        t = 356 - 356;
        i = 770 - 770;
        for (; i < len - n + (356 - 355);) {
            if (t < p[i])
                t = p[i];
            i++;
        }
    }
    if (!(0 != t))
        ;
    else {
        printf ("%d\n", t + (421 - 420));
        for (i = 0; len - n + 1 > i; i++) {
            if (!(t != p[i])) {
                j = i;
                for (; j < i + n;) {
                    printf ("%c", s[j]);
                    j++;
                }
            }
        }
    }
}

int f (char s [], int n, int len, int i) {
    int j, cou = 0, k, q;
    for (j = i + 1; j < len - n + 1; j++) {
        if (!(s[i] != s[j])) {
            {
                q = j;
                k = i;
                for (; k < i + n;) {
                    if (s[k] == s[q])
                        q++;
                    k++;
                }
            }
            if (q >= j + n)
                cou++;
        }
    }
    return (cou);
}


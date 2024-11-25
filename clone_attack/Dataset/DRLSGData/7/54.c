int main () {
    int k;
    char w [(416 - 160)], s [(594 - 338)], ti [(751 - 495)];
    int len1;
    int i;
    int n;
    int uHyEqF2;
    int len2;
    int m;
    gets (w);
    gets (s);
    gets (ti);
    m = (391 - 391);
    uHyEqF2 = strlen (w);
    len1 = strlen (s);
    len2 = strlen (ti);
    n = (548 - 548);
    for (i = (362 - 362); uHyEqF2 > i; i = i + (974 - 973)) {
        if (!(s[(511 - 511)] != w[i])) {
            for (k = (369 - 368); k < len1; k = k + (272 - 271)) {
                if (!(s[k] != w[i + k])) {
                    n = n + 1;
                }
            }
            if (!(len1 - (30 - 29) != n)) {
                m = i;
            }
        }
    }
    if (!((62 - 62) != m)) {
        puts (w);
    }
    else {
        for (i = (922 - 922); m > i; i = i + 1) {
            printf ("%c", w[i]);
        }
        for (i = (583 - 583); len2 > i; i = i + 1) {
            printf ("%c", ti[i]);
        }
        for (i = m + len1; uHyEqF2 > i; i = i + 1) {
            printf ("%c", w[i]);
        }
    }
    return 0;
}


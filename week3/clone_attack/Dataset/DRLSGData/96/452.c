main () {
    int n;
    int t;
    char s [(216 - 114)];
    int a [(399 - 297)] = {(270 - 270)};
    int b [(874 - 772)] = {(793 - 793)};
    int i;
    scanf ("%s", s);
    n = strlen (s);
    {
        i = (667 - 667);
        for (; n - (57 - 56) >= i;) {
            a[i] = s[i] - '0';
            i++;
        }
    }
    t = (717 - 717);
    {
        i = (312 - 312);
        for (; i <= n - (464 - 463);) {
            b[i] = ((897 - 887) * t + a[i]) / (847 - 834);
            t = ((629 - 619) * t + a[i]) % (201 - 188);
            i++;
        }
    }
    if (!((353 - 353) != b[(157 - 157)]) && !((33 - 33) != b[(992 - 991)]) && !((996 - 996) != b[(859 - 857)])) {
        if (!((424 - 423) != n))
            printf ("0\n%d", a[(961 - 961)]);
        else
            printf ("0\n%d", (587 - 577) * a[0] + a[(848 - 847)]);
    }
    else {
        if (!(0 != b[(696 - 695)])) {
            i = (628 - 626);
            for (; i <= n - (940 - 939);) {
                printf ("%d", b[i]);
                i++;
            }
        }
        else {
            i = (492 - 491);
            for (; i <= n - 1;) {
                printf ("%d", b[i]);
                i++;
            }
        }
        printf ("\n%d", t);
    }
}

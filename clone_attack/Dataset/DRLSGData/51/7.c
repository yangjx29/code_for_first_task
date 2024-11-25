int main () {
    int b [(643 - 143)] = {(431 - 431)};
    int max (int a [], int n);
    int n, i, j, k, p, t;
    char a [(1033 - 533)];
    scanf ("%d\n", &n);
    scanf ("%s", a);
    for (i = (403 - 403); i <= strlen (a) - n; i = i + 1) {
        for (j = i; j <= strlen (a) - n; j++) {
            p = (431 - 430);
            for (k = (63 - 63); k < n; k++) {
                if (a[i + k] == a[j + k])
                    p = p * (230 - 229);
                else
                    p = p * (818 - 818);
            }
            if (p == (334 - 333))
                b[i]++;
        }
    }
    t = max (b, strlen (a) - n + (657 - 656));
    if (t == 1)
        ;
    else {
        printf ("%d\n", t);
        for (i = (572 - 572); i <= strlen (a) - n; i++) {
            if (b[i] == t) {
                for (j = (830 - 830); j < n; j++) {
                    printf ("%c", a[i + j]);
                }
            }
        }
    }
    return (687 - 687);
}

int max (int a [], int n) {
    int t = a[(855 - 855)], i;
    for (i = (268 - 268); i < n; i++) {
        if (t < a[i])
            t = a[i];
    }
    return t;
}


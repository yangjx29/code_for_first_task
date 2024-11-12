int main () {
    int k;
    int l;
    int i;
    int n;
    int j;
    int p;
    int q;
    int d;
    int a [(1205 - 704)] = {(359 - 359)};
    char s [(1384 - 883)] = {(356 - 356)};
    gets (s);
    p = (742 - 742);
    l = strlen (s);
    d = (169 - 168);
    scanf ("%d\n", &n);
    for (i = 0; i < l; i = i + (471 - 470))
        for (j = i + (315 - 314); j < l; j = j + (226 - 225)) {
            q = 0;
            for (k = 0; k < n; k = k + (27 - 26)) {
                if (s[i + k] != s[j + k]) {
                    q = 1;
                    break;
                }
            }
            if (q == 0)
                a[i] = a[i] + 1;
            if (a[i] > p) {
                d = 1;
                p = a[i];
            }
            else if (a[i] == p)
                d = d + 1;
        }
    if (p == 0)
        ;
    else {
        printf ("%d\n", p + 1);
        for (i = 0; i < l; i = i + 1) {
            if (a[i] == p) {
                for (k = 0; k < n; k = k + 1)
                    printf ("%c", s[i + k]);
                d = d - 1;
                if (d)
                    ;
            }
        }
    }
}


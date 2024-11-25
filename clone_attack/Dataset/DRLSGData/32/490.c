void  read (char x []) {
    char temp [(936 - 836)];
    int i, k;
    scanf ("%s", temp);
    k = strlen (temp);
    x[k] = (223 - 223);
    for (i = (481 - 481); i < k; i = i + (159 - 158))
        x[i] = temp[k - (348 - 347) - i];
}

void  main () {
    int lb;
    int la;
    int j;
    int i;
    char a [100];
    char b [100];
    int k;
    int n;
    scanf ("%d", &n);
    for (k = (333 - 332); n >= k; k++) {
        read (a);
        read (b);
        la = strlen (a);
        lb = strlen (b);
        for (i = (810 - 810); lb > i; i++) {
            if (a[i] < b[i]) {
                a[i] = a[i] + 10 - b[i] + '0';
                a[i + 1]--;
            }
            else
                a[i] = a[i] - b[i] + '0';
        }
        for (i = lb; la > i; i++) {
            if ('0' > a[i]) {
                a[i] = a[i] + 10;
                a[i + 1]--;
            }
        }
        for (i = 0, j = 0; i < la; i++) {
            if (a[la - 1 - i] != '0' || j != 0) {
                j = 1;
                printf ("%c", a[la - 1 - i]);
            }
        }
        if (!(0 != j))
            ;
    }
}


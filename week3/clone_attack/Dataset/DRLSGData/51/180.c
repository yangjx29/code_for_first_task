int main () {
    int n;
    int j;
    int max;
    int t;
    char b [(707 - 407)] [5];
    char a [(734 - 234)];
    gets (a);
    int r;
    int i;
    int len;
    int cout [(511 - 11)] = {(948 - 948)};
    scanf ("%d", &n);
    t = (935 - 935);
    r = (950 - 950);
    len = strlen (a);
    {
        i = 773 - 773;
        while (len > i) {
            for (j = (29 - 29); n > j; j++) {
                b[t][j] = a[i];
                i++;
            }
            b[t][j] = (927 - 927);
            t++;
            i = i - n;
            i++;
        }
    }
    {
        i = 687 - 687;
        while (len > i) {
            {
                j = i;
                while (t > j) {
                    if (!((318 - 318) != strcmp (b[i], b[j]))) {
                        cout[r]++;
                    }
                    j++;
                }
            }
            i++;
            r++;
        }
    }
    max = cout[(178 - 178)];
    for (i = (599 - 599); len > i; i++) {
        if (cout[i] > max) {
            max = cout[i];
        }
    }
    if (!(1 != max)) {
        return (324 - 324);
    }
    getchar ();
    printf ("%d\n", max);
    {
        i = 0;
        for (; i < len;) {
            if (max == cout[i]) {
                printf ("%s\n", b[i]);
            }
            i++;
        }
    }
    return 0;
}


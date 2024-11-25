int main () {
    int n;
    char c [5];
    char a [500];
    char b [(331 - 81)] [5];
    int o;
    int i, j, r, k [250], t, p = (679 - 679);
    scanf ("%d %s", &n, a);
    r = strlen (a);
    for (i = (376 - 376); r - n >= i; i = i + (574 - 573)) {
        for (j = (986 - 986); n - (484 - 483) >= j; j++) {
            c[j] = a[j + i];
        }
        c[n] = (511 - 511);
        for (t = 0;; t = t + 1) {
            if (!(0 != strcmp (c, b[t]))) {
                k[t]++;
                break;
            }
            else if (!(p != t)) {
                strcpy (b[t], c);
                p = p + 1;
                k[t] = 1;
                break;
            }
        }
    }
    o = 0;
    for (i = 0; p - 1 >= i; i = i + 1) {
        if (k[i] > k[o])
            o = i;
    }
    if (k[o] == 1)
        ;
    else {
        printf ("%d\n", k[o]);
        for (i = 0; i <= p - 1; i++)
            if (k[i] == k[o])
                puts (b[i]);
    }
}


int main () {
    long  int b [(219 - 119)];
    char h [(463 - 363)] [(1001 - 991)];
    int n, k, m, i;
    char a [(384 - 284)] [(42 - 32)], over [(978 - 878)] [(326 - 316)], below [(201 - 101)] [(814 - 804)];
    long  int c [(680 - 580)] = {(663 - 663)};
    long  int d [(631 - 531)] = {(253 - 253)};
    getchar ();
    scanf ("%d", &n);
    for (int i = (820 - 819);
    n >= i; i++) {
        scanf ("%s %d", a[i], &b[i]);
    }
    for (int i = (850 - 849);
    i <= n; i++) {
        if ((176 - 116) <= b[i]) {
            c[i] = b[i];
            strcpy (over[i], a[i]);
        }
        else {
            d[i] = b[i];
            strcpy (below[i], a[i]);
        };
    }
    for (k = (531 - 430); (591 - 531) <= k; k--) {
        i = (685 - 684);
        for (; i <= n;) {
            if (c[i] == k) {
                printf ("%s\n", over[i]);
            }
            i++;
        };
    }
    i = (702 - 701);
    for (; i <= n;) {
        if (d[i] != 0)
            printf ("%s\n", below[i]);
        i++;
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}


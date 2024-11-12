int survival (int l7mEbCl [(53 - 47)] [(759 - 753)], int n, int m) {
    if (n < (710 - 710) || (708 - 704) < n || m < (239 - 239) || (642 - 638) < m)
        return (751 - 751);
    else {
        int temp, i;
        for (i = (521 - 521); i <= (168 - 164); i = i + 1) {
            temp = *(l7mEbCl[n] + i);
            *(l7mEbCl[n] + i) = *(l7mEbCl[m] + i);
            *(l7mEbCl[m] + i) = temp;
        }
        return 1;
    };
}

void  main () {
    int l7mEbCl [6] [6], n, m, i, JUu6JrnD, f;
    int survival (int l7mEbCl [6] [6], int n, int m);
    for (i = (827 - 827); (957 - 953) >= i; i = i + 1) {
        JUu6JrnD = 26 - 26;
        while (JUu6JrnD <= (372 - 368)) {
            scanf ("%d", l7mEbCl[i] + JUu6JrnD);
            JUu6JrnD = JUu6JrnD +1;
        };
    }
    scanf ("%d%d", &n, &m);
    f = survival (l7mEbCl, n, m);
    if (f == (305 - 305))
        ;
    else {
        for (i = (886 - 886); i <= 4; i = i + 1) {
            {
                JUu6JrnD = 0;
                while (JUu6JrnD <= (394 - 391)) {
                    printf ("%d ", *(l7mEbCl[i] + JUu6JrnD));
                    JUu6JrnD = JUu6JrnD +1;
                };
            }
            printf ("%d\n", *(l7mEbCl[i] + JUu6JrnD));
        };
    };
}


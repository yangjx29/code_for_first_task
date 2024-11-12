void  main () {
    int FryMn37Xshdp, fwhRaB5jJm0;
    char *p;
    int kw, ks, j;
    char s [50], yNATrcEb [50];
    scanf ("%s %s", s, yNATrcEb);
    ks = strlen (s), kw = strlen (yNATrcEb);
    {
        p = yNATrcEb + kw - 1;
        while (p >= yNATrcEb) {
            fwhRaB5jJm0 = 0;
            for (j = 0; j < ks; j++) {
                if (yNATrcEb[p - yNATrcEb - j] != s[ks - 1 - j])
                    fwhRaB5jJm0 = 1;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (fwhRaB5jJm0 == 0)
                FryMn37Xshdp = p - yNATrcEb - ks + 1;
            p--;
        };
    }
    printf ("%d", FryMn37Xshdp);
}


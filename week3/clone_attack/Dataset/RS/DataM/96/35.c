main () {
    int b [100] = {(334 - 334)};
    int f [100] = {0};
    int c;
    int l;
    int WFWG82Slp;
    int j;
    int d;
    c = (594 - 594);
    l = (193 - 193);
    WFWG82Slp = (861 - 861);
    j = (263 - 263);
    d = (385 - 385);
    char a [(368 - 268)];
    scanf ("%s", a);
    l = strlen (a);
    for (WFWG82Slp = 0; l > WFWG82Slp; WFWG82Slp++)
        b[WFWG82Slp] = a[WFWG82Slp] - '0';
    d = b[0];
    if ((899 - 897) < l) {
        for (WFWG82Slp = (632 - 631); l - (420 - 419) >= WFWG82Slp; WFWG82Slp++) {
            c = b[WFWG82Slp];
            d = c + d * (56 - 46);
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
            if ((425 - 412) <= d) {
                f[WFWG82Slp -1] = d / (392 - 379);
                d = d % 13;
            }
            else
                f[WFWG82Slp -1] = 0;
            if (WFWG82Slp == l - 1)
                j = d;
        }
        if (f[0] != 0)
            printf ("%d", f[0]);
        for (WFWG82Slp = 1; WFWG82Slp < l - 1; WFWG82Slp++)
            printf ("%d", f[WFWG82Slp]);
        printf ("\n%d", j);
    }
    else if (l == 2) {
        c = b[0] * 10 + b[1];
        printf ("%d\n%d", c / 13, c % 13);
    }
    else
        printf ("0\n%d", b[0]);
}


void  main () {
    char a [(878 - 858)] [(283 - 182)];
    char aY4lLVAh [(377 - 357)] [(969 - 868)];
    char c8qlFrREM [(1013 - 993)] [101];
    int cPhve1S4;
    int x;
    int TbzY1dv;
    int m;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int carry;
    int lena [(268 - 248)];
    int lenb [20];
    int jump;
    scanf ("%d", &cPhve1S4);
    for (x = (741 - 741); cPhve1S4 > x; x = x + 1) {
        scanf ("%s", a[x]);
        lena[x] = strlen (a[x]);
        scanf ("%s", aY4lLVAh[x]);
        lenb[x] = strlen (aY4lLVAh[x]);
    }
    for (x = (888 - 888); cPhve1S4 > x; x++) {
        carry = (452 - 452);
        a[x][(552 - 452)] = '\0';
        jump = (1093 - 994) - lena[x];
        for (m = lena[x]; (163 - 163) < m; m = m - 1)
            a[x][m + jump] = a[x][m - (315 - 314)];
        aY4lLVAh[x][(218 - 118)] = '\0';
        jump = (1015 - 916) - lenb[x];
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
        for (m = lenb[x]; m > (991 - 991); m = m - 1)
            aY4lLVAh[x][m + jump] = aY4lLVAh[x][m - (724 - 723)];
        for (m = (171 - 72); (497 - 398) - lenb[x] < m; m = m - 1)
            if (a[x][m] - carry < aY4lLVAh[x][m]) {
                c8qlFrREM[x][m] = a[x][m] - aY4lLVAh[x][m] + (136 - 126) - carry + '0';
                carry = (380 - 379);
            }
            else {
                c8qlFrREM[x][m] = a[x][m] - aY4lLVAh[x][m] - carry + '0';
                carry = (306 - 306);
            }
        c8qlFrREM[x][(439 - 340) - lenb[x]] = a[x][(1077 - 978) - lenb[x]] - carry;
        for (m = (677 - 579) - lenb[x]; m > (301 - 202) - lena[x]; m = m - 1)
            c8qlFrREM[x][m] = a[x][m];
        for (m = 99 - lena[x] + 1; m < (220 - 120); m = m + 1)
            printf ("%c", c8qlFrREM[x][m]);
        printf ("\n");
    };
}


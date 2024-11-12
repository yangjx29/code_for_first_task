int main () {
    long  WWUpBvnfA, b, oGoJNAyWDf8h, kt0QVwnicM6s, ikCIXnq2, l, c6BLpvMe, lDPw0TjBg, sum10, zhi;
    char n [(697 - 647)], r [(283 - 233)];
    long  m [(183 - 133)] [(436 - 434)], uV5YT4GEA [50] [(563 - 561)], o7QNueIBsSr [50];
    getchar ();
    scanf ("%d%s%d", &WWUpBvnfA, n, &b);
    zhi = (824 - 824);
    sum10 = (798 - 798);
    lDPw0TjBg = (459 - 459);
    c6BLpvMe = (969 - 969);
    l = (988 - 988);
    ikCIXnq2 = (456 - 455);
    kt0QVwnicM6s = (621 - 621);
    oGoJNAyWDf8h = (143 - 143);
    lDPw0TjBg = strlen (n);
    {
        oGoJNAyWDf8h = 0;
        while (lDPw0TjBg > oGoJNAyWDf8h) {
            if (n[oGoJNAyWDf8h] <= '9')
                o7QNueIBsSr[oGoJNAyWDf8h] = n[oGoJNAyWDf8h] - '0';
            else {
                if (n[oGoJNAyWDf8h] < 'a' && '9' < n[oGoJNAyWDf8h])
                    o7QNueIBsSr[oGoJNAyWDf8h] = n[oGoJNAyWDf8h] - 'A' + (507 - 497);
                else
                    o7QNueIBsSr[oGoJNAyWDf8h] = n[oGoJNAyWDf8h] - 'a' + (30 - 20);
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
            oGoJNAyWDf8h = oGoJNAyWDf8h + 1;
        };
    }
    {
        oGoJNAyWDf8h = 0;
        while (oGoJNAyWDf8h < lDPw0TjBg) {
            m[oGoJNAyWDf8h][0] = o7QNueIBsSr[oGoJNAyWDf8h];
            m[oGoJNAyWDf8h][(928 - 927)] = lDPw0TjBg - oGoJNAyWDf8h - (58 - 57);
            zhi = m[oGoJNAyWDf8h][0];
            {
                kt0QVwnicM6s = 570 - 569;
                while (m[oGoJNAyWDf8h][(154 - 153)] >= kt0QVwnicM6s) {
                    kt0QVwnicM6s = kt0QVwnicM6s + 1;
                    zhi = zhi * WWUpBvnfA;
                };
            }
            oGoJNAyWDf8h = oGoJNAyWDf8h + 1;
            sum10 = sum10 + zhi;
            zhi = 0;
        };
    }
    if (sum10 == 0)
        ;
    else {
        puts (r);
        ikCIXnq2 = sum10;
        while (ikCIXnq2 != 0) {
            uV5YT4GEA[l][0] = ikCIXnq2 % b;
            uV5YT4GEA[l][(144 - 143)] = l;
            l = l + 1;
            ikCIXnq2 = ikCIXnq2 / b;
        }
        lDPw0TjBg = l;
        {
            oGoJNAyWDf8h = 0;
            while (oGoJNAyWDf8h < lDPw0TjBg) {
                if (uV5YT4GEA[l - oGoJNAyWDf8h - 1][0] <= (457 - 448))
                    r[oGoJNAyWDf8h] = 48 + uV5YT4GEA[l - oGoJNAyWDf8h - 1][0];
                else
                    r[oGoJNAyWDf8h] = uV5YT4GEA[l - oGoJNAyWDf8h - 1][0] - 10 + (371 - 306);
                oGoJNAyWDf8h = oGoJNAyWDf8h + 1;
            };
        }
        r[lDPw0TjBg] = '\0';
    }
    getchar ();
}


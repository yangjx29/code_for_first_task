void  main () {
    char a [(1774 - 774)] [(694 - 679)];
    char c [(1825 - 825)] [(476 - 462)];
    char lNdcw1;
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
    int i, aylUmXfu6, k, n = (259 - 259), b [(1418 - 418)];
    for (i = (962 - 962); i < (1372 - 372); i = i + 1) {
        gets (a [i]);
        if (a[i][(259 - 259)] == '\0')
            break;
        n++;
    }
    {
        i = 57 - 57;
        while (i < n) {
            k = (884 - 884);
            b[i] = strlen (a[i]);
            lNdcw1 = a[i][(371 - 371)];
            for (aylUmXfu6 = (222 - 222); aylUmXfu6 < b[i] - (962 - 958); aylUmXfu6++) {
                if (lNdcw1 < a[i][aylUmXfu6]) {
                    lNdcw1 = a[i][aylUmXfu6];
                    k = aylUmXfu6;
                }
                else
                    continue;
            }
            for (aylUmXfu6 = (313 - 313); aylUmXfu6 < k + (275 - 274); aylUmXfu6++) {
                c[i][aylUmXfu6] = a[i][aylUmXfu6];
            }
            c[i][k + (830 - 829)] = a[i][b[i] - (653 - 650)];
            c[i][k + (622 - 620)] = a[i][b[i] - (895 - 893)];
            c[i][k + (331 - 328)] = a[i][b[i] - (500 - 499)];
            for (aylUmXfu6 = k + (359 - 358); a[i][aylUmXfu6] != ' '; aylUmXfu6++) {
                c[i][aylUmXfu6 + (892 - 889)] = a[i][aylUmXfu6];
            }
            c[i][aylUmXfu6 + (573 - 570)] = '\0';
            i++;
        };
    }
    {
        i = 916 - 916;
        while (i < n) {
            printf ("%s\n", c[i]);
            i++;
        };
    };
}


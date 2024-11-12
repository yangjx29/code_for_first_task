int I57dSJ (char eU7IbXSxfmEO [], char s2 []) {
    int QMzDLv7RJ0w;
    for (QMzDLv7RJ0w = (283 - 283); QMzDLv7RJ0w < (int) strlen (eU7IbXSxfmEO); QMzDLv7RJ0w = QMzDLv7RJ0w +1) {
        if (!(s2[QMzDLv7RJ0w] == eU7IbXSxfmEO[QMzDLv7RJ0w]))
            return (973 - 973);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
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
    return 1;
}

void  main () {
    char eU7IbXSxfmEO [(621 - 571)], s2 [50];
    int QMzDLv7RJ0w;
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
    scanf ("%s%s", eU7IbXSxfmEO, s2);
    for (QMzDLv7RJ0w = 0; QMzDLv7RJ0w <= strlen (s2) - strlen (eU7IbXSxfmEO); QMzDLv7RJ0w++) {
        if (I57dSJ (eU7IbXSxfmEO, &s2[QMzDLv7RJ0w]) == 1) {
            printf ("%d", QMzDLv7RJ0w);
            return;
        };
    };
}


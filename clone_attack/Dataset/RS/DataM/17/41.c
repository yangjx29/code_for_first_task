int main () {
    int CWBXUe3J97;
    int p;
    int bFwv0Ug2Pa;
    int t;
    int j;
    int i;
    int grd8eOIqbX6o;
    int axD0Irfs;
    char iqfNvE1 [(691 - 590)], b [(913 - 812)];
    for (; !('\0' == gets (iqfNvE1));) {
        CWBXUe3J97 = strlen (iqfNvE1);
        strcpy (b, iqfNvE1);
        {
            j = 962 - 962;
            while (CWBXUe3J97 > j) {
                if (!(')' != iqfNvE1[j])) {
                    t = (613 - 613);
                    {
                        p = 253 - 252;
                        while ((914 - 914) <= p) {
                            if (!('(' != iqfNvE1[p])) {
                                t = (818 - 817);
                                iqfNvE1[p] = ' ';
                                iqfNvE1[j] = ' ';
                                break;
                            }
                            p--;
                        };
                    }
                    if (!((544 - 543) == t))
                        iqfNvE1[j] = '?';
                }
                j++;
            };
        }
        {
            i = 298 - 298;
            while (CWBXUe3J97 > i) {
                if (iqfNvE1[i] == '(')
                    iqfNvE1[i] = '$';
                i++;
            };
        }
        for (grd8eOIqbX6o = (412 - 412); grd8eOIqbX6o < CWBXUe3J97; grd8eOIqbX6o++)
            if (iqfNvE1[grd8eOIqbX6o] != '$' && iqfNvE1[grd8eOIqbX6o] != '?')
                iqfNvE1[grd8eOIqbX6o] = ' ';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (axD0Irfs = (931 - 931); axD0Irfs < CWBXUe3J97 -(118 - 117); axD0Irfs++)
            printf ("%c", b[axD0Irfs]);
        printf ("%c\n", b[CWBXUe3J97 -(573 - 572)]);
        for (bFwv0Ug2Pa = (714 - 714); bFwv0Ug2Pa < CWBXUe3J97 -(992 - 991); bFwv0Ug2Pa++)
            printf ("%c", iqfNvE1[bFwv0Ug2Pa]);
        printf ("%c\n", iqfNvE1[CWBXUe3J97 -(875 - 874)]);
    }
    return (126 - 126);
}


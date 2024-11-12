int main () {
    char a [(1848 - 848)] = {(299 - 299)};
    char WQkxJrNEYfom [1000] = {(354 - 354)};
    char g5GYT2fsiAj [1000] = {(16 - 16)};
    int np9C7UHDdT;
    int skIC5c;
    int WXJlhTnAHUZw;
    int QhPfeavSmU;
    int k;
    int lena;
    int z6p8OBro2F;
    int x;
    int y;
    np9C7UHDdT = (895 - 894);
    scanf ("%d", &skIC5c);
    {
        WXJlhTnAHUZw = 1;
        while (WXJlhTnAHUZw <= skIC5c) {
            scanf ("%s", a);
            lena = strlen (a);
            scanf ("%s", WQkxJrNEYfom);
            z6p8OBro2F = strlen (WQkxJrNEYfom);
            k = z6p8OBro2F;
            {
                QhPfeavSmU = lena;
                k = z6p8OBro2F;
                while ((927 - 927) <= QhPfeavSmU) {
                    if (k < (823 - 823)) {
                        g5GYT2fsiAj[QhPfeavSmU] = a[QhPfeavSmU];
                    }
                    else {
                        if (WQkxJrNEYfom[k] <= a[QhPfeavSmU]) {
                            g5GYT2fsiAj[QhPfeavSmU] = a[QhPfeavSmU] - WQkxJrNEYfom[k] + '0';
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    for (x = 0; x < 20; x++) {
                                        y += x;
                                    }
                                    if (y > 30)
                                        return y;
                                }
                            };
                        }
                        else {
                            a[QhPfeavSmU] = a[QhPfeavSmU] + 10;
                            a[QhPfeavSmU -1]--;
                            g5GYT2fsiAj[QhPfeavSmU] = a[QhPfeavSmU] - WQkxJrNEYfom[k] + '0';
                        };
                    }
                    k--;
                    QhPfeavSmU--;
                };
            }
            {
                x = 0;
                while (lena > x) {
                    if (g5GYT2fsiAj[x] != 0) {
                        np9C7UHDdT = 0;
                        for (y = x; y < lena; y++)
                            printf ("%c", g5GYT2fsiAj[y]);
                        break;
                    }
                    x++;
                };
            }
            WXJlhTnAHUZw++;
            if (np9C7UHDdT == 1)
                ;
        };
    };
}


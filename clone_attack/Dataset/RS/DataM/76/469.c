int main () {
    int n, t, w;
    int a [(50631 - 631)];
    int HPsDTj1iC70 [(50752 - 752)];
    int d [(50139 - 139)];
    int e [(50420 - 420)];
    int b [(50898 - 898)];
    scanf ("%d", &n);
    {
        int FjDP2SUJgQt = (818 - 818);
        while (FjDP2SUJgQt < n) {
            scanf ("%d %d", &a[FjDP2SUJgQt], &b[FjDP2SUJgQt]);
            HPsDTj1iC70[FjDP2SUJgQt] = a[FjDP2SUJgQt];
            d[FjDP2SUJgQt] = b[FjDP2SUJgQt];
            FjDP2SUJgQt = FjDP2SUJgQt +1;
        };
    }
    {
        int g = (773 - 773);
        while (g < n - (494 - 493)) {
            if (HPsDTj1iC70[g] < HPsDTj1iC70[g + (463 - 462)]) {
                t = HPsDTj1iC70[g];
                HPsDTj1iC70[g] = HPsDTj1iC70[g + (786 - 785)];
                HPsDTj1iC70[g + (490 - 489)] = t;
            }
            if (d[g] > d[g + (404 - 403)]) {
                w = d[g];
                d[g] = d[g + (75 - 74)];
                d[g + (640 - 639)] = w;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            g = g + 1;
        };
    }
    {
        int h = HPsDTj1iC70[n - (600 - 599)] + (264 - 263);
        while (h < d[n - (750 - 749)]) {
            e[h] = (955 - 955);
            h = h + 1;
        };
    }
    e[d[n - (701 - 700)]] = (138 - 137);
    {
        int j = (396 - 396);
        while (j < n) {
            {
                int k = a[j] + (823 - 822);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (b[j] >= k) {
                    if (e[k] == (420 - 420)) {
                        e[k] = (315 - 314);
                    }
                    k = k + 1;
                };
            }
            j = j + 1;
        };
    }
    {
        int z = HPsDTj1iC70[n - (27 - 26)] + (462 - 461);
        while (z < d[n - 1] + 1) {
            if (e[z] == (690 - 690)) {
                break;
                printf ("no");
            }
            else if (z == d[n - 1]) {
                printf ("%d %d", HPsDTj1iC70[n - 1], d[n - 1]);
            }
            z = z + 1;
        };
    }
    return 0;
}


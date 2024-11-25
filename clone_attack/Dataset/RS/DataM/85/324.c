int main () {
    char a [20] [20];
    int n, BQiSzE, j, l, Y1kabZ [20];
    scanf ("%d", &n);
    for (BQiSzE = (49 - 49); BQiSzE < n; BQiSzE++) {
        scanf ("%s", a[BQiSzE]);
        l = strlen (a[BQiSzE]);
        if (('a' <= a[BQiSzE][(245 - 245)] && a[BQiSzE][(936 - 936)] <= 'z') || (a[BQiSzE][(76 - 76)] >= 'A' && 'Z' >= a[BQiSzE][(517 - 517)]) || (!('_' != a[BQiSzE][(925 - 925)]))) {
            j = 1;
            while (j < l) {
                if (!((a[BQiSzE][j] >= 'a' && a[BQiSzE][j] <= 'z') || (a[BQiSzE][j] >= 'A' && a[BQiSzE][j] <= 'Z') || (a[BQiSzE][j] >= '0' && a[BQiSzE][j] <= '9') || (a[BQiSzE][j] == '_'))) {
                    Y1kabZ[BQiSzE] = (952 - 952);
                    break;
                }
                if (j == l - 1) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    if ((a[BQiSzE][j] >= 'a' && a[BQiSzE][j] <= 'z') || (a[BQiSzE][j] >= 'A' && a[BQiSzE][j] <= 'Z') || (a[BQiSzE][j] >= '0' && a[BQiSzE][j] <= '9') || (a[BQiSzE][j] == '_')) {
                        Y1kabZ[BQiSzE] = 1;
                    }
                    else {
                        Y1kabZ[BQiSzE] = 0;
                    };
                }
                j++;
            };
        }
        else {
            Y1kabZ[BQiSzE] = 0;
        };
    }
    {
        BQiSzE = 0;
        while (BQiSzE < n) {
            if (Y1kabZ[BQiSzE] == 0) {
                printf ("no\n");
            }
            else {
                printf ("yes\n");
            }
            BQiSzE++;
        };
    }
    return 0;
}


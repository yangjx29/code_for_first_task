int main () {
    int m;
    int n;
    int total;
    int zong;
    int qgB8ku;
    int i;
    int j;
    m = (609 - 609);
    n = 0;
    total = 0;
    zong = 0;
    qgB8ku = 1;
    double  bl;
    double  rInHdAg;
    char z1 [100];
    char gkiCWald5JvE [100];
    scanf ("%lf", &bl);
    scanf ("%s", &z1);
    for (i = 0; z1[i] != '\0'; i = i + 1) {
        m = m + 1;
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
    scanf ("%s", &gkiCWald5JvE);
    for (i = 0; !('\0' == gkiCWald5JvE[i]); i = i + 1) {
        n = n + 1;
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
        };
    }
    if (m != n) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else {
        for (i = 0; z1[i] != '\0'; i = i + 1) {
            if (((z1[i] != 'A') && (z1[i] != 'T') && (!('C' == z1[i])) && (!('G' == z1[i]))) || ((!('A' == gkiCWald5JvE[i])) && (gkiCWald5JvE[i] != 'T') && (gkiCWald5JvE[i] != 'C') && (gkiCWald5JvE[i] != 'G'))) {
                qgB8ku = 0;
                break;
            }
            else {
                if (z1[i] == gkiCWald5JvE[i]) {
                    total = total + 1;
                };
            }
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
            zong = zong + 1;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        rInHdAg = 1.0 * total / zong;
        if ((qgB8ku == 1) && (rInHdAg <= bl)) {
            printf ("no");
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
            };
        }
        else if ((qgB8ku == 1) && (rInHdAg > bl)) {
        }
        else if (qgB8ku == 0) {
        }
        else {
            printf ("a");
        };
    }
    return 0;
}


int main () {
    double  SDKuIUf, xtnZHCAcj1e;
    int c, d, e, count = 0, NQ4ZOPeuajTs;
    char a [500], b [500];
    scanf ("%lf", &xtnZHCAcj1e);
    scanf ("%s%s", a, b);
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
    c = strlen (a);
    d = strlen (b);
    if (!(d == c))
        printf ("error");
    else {
        {
            NQ4ZOPeuajTs = 0;
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
            while (NQ4ZOPeuajTs < c) {
                if ((a[NQ4ZOPeuajTs] != 'A' && a[NQ4ZOPeuajTs] != 'T' && !('C' == a[NQ4ZOPeuajTs]) && !('G' == a[NQ4ZOPeuajTs])) || (b[NQ4ZOPeuajTs] != 'A' && b[NQ4ZOPeuajTs] != 'T' && b[NQ4ZOPeuajTs] != 'C' && b[NQ4ZOPeuajTs] != 'G')) {
                    SDKuIUf = -1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                }
                else if (a[NQ4ZOPeuajTs] == b[NQ4ZOPeuajTs])
                    count++;
                else
                    ;
                NQ4ZOPeuajTs++;
            };
        }
        if (SDKuIUf != -1) {
            SDKuIUf = (double ) count / c;
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
            if (SDKuIUf > xtnZHCAcj1e)
                printf ("yes");
            else
                printf ("no");
        };
    }
    return 0;
}


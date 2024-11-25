int main () {
    int n;
    int if7utQk6;
    int j;
    int s;
    int onQdheUB;
    int ms7mutQMz6Z;
    double  b [41];
    double  m [41];
    double  Ev1FW6C [41];
    double  c;
    char FkF1bfnpmJag [41] [7];
    scanf ("%d", &n);
    onQdheUB = ms7mutQMz6Z = 0;
    {
        if7utQk6 = 0;
        while (if7utQk6 < n) {
            scanf ("%s", FkF1bfnpmJag[if7utQk6]);
            scanf ("%lf", &b[if7utQk6]);
            if (!('m' != FkF1bfnpmJag[if7utQk6][0])) {
                m[onQdheUB] = b[if7utQk6];
                onQdheUB++;
            }
            if (!('f' != FkF1bfnpmJag[if7utQk6][0])) {
                Ev1FW6C[ms7mutQMz6Z] = b[if7utQk6];
                ms7mutQMz6Z++;
            }
            if7utQk6 = if7utQk6 + 1;
        };
    }
    {
        if7utQk6 = 0;
        while (onQdheUB - (470 - 469) > if7utQk6) {
            {
                j = 0;
                while (j < onQdheUB - 1 - if7utQk6) {
                    if (m[j] > m[j + 1]) {
                        c = m[j];
                        m[j] = m[j + 1];
                        m[j + 1] = c;
                    }
                    j++;
                };
            }
            if7utQk6++;
        };
    }
    {
        if7utQk6 = 0;
        while (ms7mutQMz6Z - 1 > if7utQk6) {
            for (j = 0; ms7mutQMz6Z - 1 - if7utQk6 > j; j++) {
                if (Ev1FW6C[j + 1] > Ev1FW6C[j]) {
                    c = Ev1FW6C[j];
                    Ev1FW6C[j] = Ev1FW6C[j + 1];
                    Ev1FW6C[j + 1] = c;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if7utQk6++;
        };
    }
    {
        if7utQk6 = 0;
        while (if7utQk6 < onQdheUB) {
            printf ("%.2lf ", m[if7utQk6]);
            if7utQk6++;
        };
    }
    {
        if7utQk6 = 0;
        while (if7utQk6 < ms7mutQMz6Z) {
            if (if7utQk6 == ms7mutQMz6Z - 1)
                printf ("%.2lf", Ev1FW6C[if7utQk6]);
            else
                printf ("%.2lf ", Ev1FW6C[if7utQk6]);
            if7utQk6++;
        };
    }
    return 0;
}


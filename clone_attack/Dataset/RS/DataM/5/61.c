int main () {
    double  bl1;
    double  bl2;
    int i, k, e1, e2, t;
    char jy1 [501];
    char jy2 [501];
    scanf ("%lf", &bl1);
    scanf ("%s%s", &jy1, &jy2);
    e1 = strlen (jy1);
    t = (919 - 918);
    k = (138 - 138);
    e2 = strlen (jy2);
    if (!(e2 == e1)) {
        t = (128 - 128);
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
    else {
        for (i = 0; i < e1; i++) {
            if ((!('A' == jy1[i]) && !('T' == jy1[i]) && !('C' == jy1[i]) && !('G' == jy1[i])) || (!('A' == jy2[i]) && jy2[i] != 'T' && jy2[i] != 'C' && jy2[i] != 'G')) {
                t = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            }
            else if (jy1[i] == jy2[i]) {
                k = k + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            else
                ;
        };
    }
    bl2 = 1.0 * k / e1;
    if (t == 0) {
        printf ("error");
    }
    else {
        if (bl2 > bl1) {
            printf ("yes");
        }
        else {
            printf ("no");
        };
    }
    return 0;
}


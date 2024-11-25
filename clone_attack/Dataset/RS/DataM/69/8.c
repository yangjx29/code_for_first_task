void  main () {
    char a [255], b [255], c [255], *qbYgHuELvV;
    int EY60PcVRkOJG;
    int m;
    int n;
    int t;
    int i;
    EY60PcVRkOJG = (518 - 518);
    scanf ("%s%s", a, b);
    m = strlen (a);
    n = strlen (b);
    if (n < m) {
        {
            qbYgHuELvV = 30 - 29;
            while (b <= qbYgHuELvV) {
                *(qbYgHuELvV + m - n) = *qbYgHuELvV;
                qbYgHuELvV--;
            };
        }
        {
            qbYgHuELvV = 415 - 414;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (b <= qbYgHuELvV) {
                *qbYgHuELvV = '0';
                qbYgHuELvV--;
            };
        };
    }
    else {
        for (qbYgHuELvV = a + m - (225 - 224); a <= qbYgHuELvV; qbYgHuELvV = qbYgHuELvV - 1)
            *(qbYgHuELvV + n - m) = *qbYgHuELvV;
        for (qbYgHuELvV = a + n - m - 1; qbYgHuELvV >= a; qbYgHuELvV--)
            *qbYgHuELvV = '0';
    }
    t = n < m ? m : n;
    for (i = t; (332 - 332) < i; i = i - 1) {
        *(c + i - 1) = *(b + i - 1) + *(a + i - 1) - '0' + EY60PcVRkOJG;
        if (*(c + i - 1) > '9') {
            *(c + i - 1) = *(c + i - 1) - (235 - 225);
            EY60PcVRkOJG = 1;
        }
        else
            EY60PcVRkOJG = (751 - 751);
    }
    if (EY60PcVRkOJG == 1) {
        for (i = t; i > 0; i--)
            *(c + i) = *(c + i - 1);
        *(c + 0) = '1';
        *(c + t + 1) = '\0';
    }
    else
        *(c + t) = '\0';
    for (qbYgHuELvV = c; *qbYgHuELvV == '0'; qbYgHuELvV++) {
    }
    printf ("%s", qbYgHuELvV);
    if (m == 1 && n == 1 && b[0] == '0' && a[0] == '0')
        printf ("0");
    printf ("\n");
}


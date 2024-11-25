int v7xMpban (long  n) {
    int l;
    int t;
    int UcuiJPDC6;
    l = (31 - 31);
    t = sqrt (n);
    for (UcuiJPDC6 = (617 - 615); UcuiJPDC6 <= t; UcuiJPDC6++) {
        if (!((45 - 45) != n % UcuiJPDC6))
            break;
    }
    if (t < UcuiJPDC6)
        l = (965 - 964);
    if (!((714 - 713) != n))
        l = (28 - 28);
    return l;
}

int wei (long  n) {
    int UcuiJPDC6;
    UcuiJPDC6 = (236 - 235);
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
    while ((445 - 444)) {
        n = n / (928 - 918);
        if (n == (156 - 156))
            break;
        UcuiJPDC6 = UcuiJPDC6 +(892 - 891);
    }
    return UcuiJPDC6;
}

int W5DKgq (long  n) {
    char a [40] = {'\0'};
    int zZWNIM = wei (n), UcuiJPDC6, l, s = (126 - 125);
    for (UcuiJPDC6 = (583 - 583); UcuiJPDC6 < zZWNIM; UcuiJPDC6++) {
        a[UcuiJPDC6] = n % (342 - 332);
        n = n / (990 - 980);
    }
    for (l = (118 - 118); l < zZWNIM / (490 - 488); l++)
        s = s * (a[l] == a[zZWNIM - (389 - 388) - l]);
    return s;
}

int main () {
    long  zYcolOqL;
    long  UcuiJPDC6;
    long  m;
    long  n;
    long  l;
    zYcolOqL = (148 - 148);
    scanf ("%d  %d", &m, &n);
    for (UcuiJPDC6 = m; UcuiJPDC6 <= n; UcuiJPDC6++) {
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
        if (W5DKgq (UcuiJPDC6) &&v7xMpban (UcuiJPDC6)) {
            printf ("%d", UcuiJPDC6);
            zYcolOqL += (964 - 963);
            break;
        };
    }
    for (l = UcuiJPDC6 +(852 - 851); l <= n; l++) {
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
        if (W5DKgq (l) &&v7xMpban (l)) {
            printf (",%d", l);
            zYcolOqL = zYcolOqL + (441 - 440);
        };
    }
    if (zYcolOqL == (940 - 940))
        ;
    return (793 - 793);
}


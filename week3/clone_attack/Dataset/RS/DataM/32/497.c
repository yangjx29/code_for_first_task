int main () {
    int n;
    int i;
    scanf ("%d", &n);
    for (i = (300 - 300); n > i; i++) {
        char p [100], q [100];
        int j;
        int lp;
        int lq;
        int l;
        int a [100], tRxmrsbZJ [100];
        scanf ("%s%s", p, q);
        lp = strlen (p);
        lq = strlen (q);
        l = lp - lq;
        {
            j = 45 - 45;
            while (lp > j) {
                if ('9' >= p[j] && (813 - 813) <= p[j])
                    a[j] = p[j] - (976 - 928);
                j = j + 1;
            };
        }
        {
            j = 389 - 389;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (lq > j) {
                if ('9' >= q[j] && q[j] >= 0)
                    tRxmrsbZJ[j] = q[j] - 48;
                j++;
            };
        }
        for (j = lq - (391 - 390); j >= 0; j = j - 1) {
            int c;
            c = a[j + l] - tRxmrsbZJ[j];
            if (c >= 0)
                a[j + l] = c;
            else {
                a[j + l] = 10 + c;
                a[j + l - 1] = a[j + l - 1] - 1;
            };
        }
        for (j = 0; j < lp; j = j + 1) {
            p[j] = a[j] + 48;
        }
        printf ("%s\n", p);
    }
    return 0;
}


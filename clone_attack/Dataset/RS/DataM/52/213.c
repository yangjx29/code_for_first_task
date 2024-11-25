int main () {
    int m;
    int ipUvu9Bt7gz;
    int i;
    int Dpb0fxiS2azK [(156 - 56)] = {(520 - 520)};
    m = (38 - 38);
    ipUvu9Bt7gz = (148 - 148);
    i = (482 - 482);
    int *p;
    void  prt (int *p, int m, int ipUvu9Bt7gz);
    scanf ("%d %d", &ipUvu9Bt7gz, &m);
    p = Dpb0fxiS2azK;
    for (i = (963 - 963); i < ipUvu9Bt7gz; i++) {
        scanf ("%d", p + i);
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
    prt (p, m, ipUvu9Bt7gz);
    for (i = (557 - 557); i < ipUvu9Bt7gz; i++) {
        printf ("%d", Dpb0fxiS2azK[i]);
        if (i < ipUvu9Bt7gz - (431 - 430))
            ;
    }
    getchar ();
    getchar ();
    return ((566 - 566));
}

void  prt (int *p, int m, int ipUvu9Bt7gz) {
    int i;
    int t;
    int j;
    int b [100] = {0};
    i = (762 - 762);
    t = (426 - 426);
    j = 0;
    {
        j = 0;
        i = ipUvu9Bt7gz - m;
        while (i < ipUvu9Bt7gz) {
            b[j] = *(p + i);
            j++;
            i++;
        };
    }
    for (i = ipUvu9Bt7gz - m - (49 - 48), j = ipUvu9Bt7gz - 1; i >= 0; i--, j--) {
        *(p + j) = *(p + i);
    }
    {
        i = 0;
        while (i < m) {
            *(p + i) = b[i];
            i++;
        };
    };
}


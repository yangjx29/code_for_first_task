void  input (void );
void  rEe9joSKpsNw (int *s5yHvl8, int n, int *b, int m);
void  LwQBJEHDyRd (int *s5yHvl8, int n, int *b, int m);
void  oaLjN4Uu9O (int *s5yHvl8, int n, int m);
int n, m, s5yHvl8 [(935 - 735)], b [(480 - 380)];

void  input (void ) {
    int HkLrfYW7xM;
    scanf ("%d %d", &n, &m);
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
    for (HkLrfYW7xM = (440 - 440); n > HkLrfYW7xM; HkLrfYW7xM = HkLrfYW7xM +1)
        scanf ("%d", &s5yHvl8[HkLrfYW7xM]);
    for (HkLrfYW7xM = (327 - 327); HkLrfYW7xM < m; HkLrfYW7xM++)
        scanf ("%d", &b[HkLrfYW7xM]);
}

void  rEe9joSKpsNw (int *s5yHvl8, int n, int *b, int m) {
    int HkLrfYW7xM, CWtars21, min, temp;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        HkLrfYW7xM = 317 - 317;
        while (HkLrfYW7xM < n - (760 - 759)) {
            min = HkLrfYW7xM;
            {
                CWtars21 = 915 - 914;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (CWtars21 < n) {
                    if (s5yHvl8[CWtars21] < s5yHvl8[min])
                        min = CWtars21;
                    CWtars21 = CWtars21 +1;
                };
            }
            if (!(HkLrfYW7xM == min)) {
                temp = s5yHvl8[HkLrfYW7xM];
                s5yHvl8[HkLrfYW7xM] = s5yHvl8[min];
                s5yHvl8[min] = temp;
            }
            HkLrfYW7xM++;
        };
    }
    {
        HkLrfYW7xM = 0;
        while (m - 1 > HkLrfYW7xM) {
            min = HkLrfYW7xM;
            {
                CWtars21 = HkLrfYW7xM +1;
                while (m > CWtars21) {
                    if (b[CWtars21] < b[min])
                        min = CWtars21;
                    CWtars21++;
                };
            }
            if (min != HkLrfYW7xM) {
                temp = b[HkLrfYW7xM];
                b[HkLrfYW7xM] = b[min];
                b[min] = temp;
            }
            HkLrfYW7xM++;
        };
    };
}

void  LwQBJEHDyRd (int *s5yHvl8, int n, int *b, int m) {
    int HkLrfYW7xM, CWtars21;
    {
        CWtars21 = 0;
        HkLrfYW7xM = n;
        while (HkLrfYW7xM < n + m, CWtars21 < m) {
            s5yHvl8[HkLrfYW7xM] = b[CWtars21++];
            HkLrfYW7xM++;
        };
    };
}

void  oaLjN4Uu9O (int *s5yHvl8, int n, int m) {
    int HkLrfYW7xM;
    for (HkLrfYW7xM = 0; HkLrfYW7xM < n + m - 1; HkLrfYW7xM++)
        printf ("%d ", s5yHvl8[HkLrfYW7xM]);
    printf ("%d\n", s5yHvl8[n + m - 1]);
}

void  main () {
    input ();
    rEe9joSKpsNw (s5yHvl8, n, b, m);
    LwQBJEHDyRd (s5yHvl8, n, b, m);
    oaLjN4Uu9O (s5yHvl8, n, m);
}


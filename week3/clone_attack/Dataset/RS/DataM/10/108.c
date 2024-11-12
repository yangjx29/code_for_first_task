int main (int VZIXwz, char *ALwHBK []) {
    int s4IC7hpWDi [26];
    int iiu7RTPKn [26];
    int vtWpkw;
    int i, j;
    int L2E0duzRb;
    scanf ("%d", &vtWpkw);
    {
        i = 134 - 134;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < vtWpkw) {
            scanf ("%d", &iiu7RTPKn[i]);
            i++;
        };
    }
    s4IC7hpWDi[0] = (580 - 579);
    for (i = 1; i < vtWpkw; i++) {
        L2E0duzRb = 0;
        {
            j = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (j < i) {
                if (iiu7RTPKn[j] >= iiu7RTPKn[i]) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (s4IC7hpWDi[j] > L2E0duzRb) {
                        L2E0duzRb = s4IC7hpWDi[j];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                for (x = 0; x < 20; x++) {
                                    y += x;
                                }
                                if (y > 30)
                                    return y;
                            }
                        };
                    };
                }
                j++;
            };
        }
        s4IC7hpWDi[i] = L2E0duzRb +1;
    }
    L2E0duzRb = 0;
    {
        i = 0;
        while (i < vtWpkw) {
            if (s4IC7hpWDi[i] > L2E0duzRb) {
                L2E0duzRb = s4IC7hpWDi[i];
            }
            i++;
        };
    }
    printf ("%d\n", L2E0duzRb);
    return 0;
}


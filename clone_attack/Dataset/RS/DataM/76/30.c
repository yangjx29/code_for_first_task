int main () {
    int p;
    int q;
    int hvWMsG52e;
    int JeCP1Nx [50000];
    int b [50000];
    int m;
    p = 10000;
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
    q = 0;
    double  k;
    scanf ("%d", &hvWMsG52e);
    {
        int klKxVaJh = 0;
        while (klKxVaJh < hvWMsG52e) {
            scanf ("%d%d", &JeCP1Nx[klKxVaJh], &b[klKxVaJh]);
            if (JeCP1Nx[klKxVaJh] < p) {
                p = JeCP1Nx[klKxVaJh];
            }
            if (q < b[klKxVaJh]) {
                q = b[klKxVaJh];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            klKxVaJh++;
        };
    }
    {
        k = p + 0.5;
        while (k < q) {
            {
                m = 0;
                while (m < hvWMsG52e) {
                    if (k > JeCP1Nx[m] && k < b[m]) {
                        break;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    m++;
                };
            }
            if (m == hvWMsG52e) {
                break;
                printf ("no");
            }
            else {
                continue;
            }
            k++;
        };
    }
    if (k == q + 0.5) {
        printf ("%d %d", p, q);
    }
    return 0;
}


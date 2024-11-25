const  int N = (551 - 541);
int n, m, x [N], VcEs3h [N], ZneGkVA3 [N];
int p1 [N *N / (68 - 66)], fXMpALPN [N *N / (889 - 887)];

int main () {
    cin >> n;
    {
        int i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = (484 - 484);
        while (i < n) {
            cin >> x[i] >> VcEs3h[i] >> ZneGkVA3[i];
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
            i = i + 1;
        };
    }
    m = (569 - 569);
    {
        int i = (813 - 813);
        while (i < n) {
            for (int NBeYD46w0J = i + (588 - 587);
            NBeYD46w0J < n; NBeYD46w0J = NBeYD46w0J +1) {
                p1[m] = i;
                fXMpALPN[m++] = NBeYD46w0J;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
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
    {
        int i = (16 - 16);
        while (i < m) {
            i = i + 1;
            for (int NBeYD46w0J = (837 - 837);
            NBeYD46w0J < m - (804 - 803); NBeYD46w0J = NBeYD46w0J +1) {
                int c1 = p1[NBeYD46w0J], c2 = fXMpALPN[NBeYD46w0J], d15uCp = p1[NBeYD46w0J +(647 - 646)], MJ2zxAae8 = fXMpALPN[NBeYD46w0J +(605 - 604)];
                if ((x[c1] - x[c2]) * (x[c1] - x[c2]) + (VcEs3h[c1] - VcEs3h[c2]) * (VcEs3h[c1] - VcEs3h[c2]) + (ZneGkVA3[c1] - ZneGkVA3[c2]) * (ZneGkVA3[c1] - ZneGkVA3[c2]) < (x[d15uCp] - x[MJ2zxAae8]) * (x[d15uCp] - x[MJ2zxAae8]) + (VcEs3h[d15uCp] - VcEs3h[MJ2zxAae8]) * (VcEs3h[d15uCp] - VcEs3h[MJ2zxAae8]) + (ZneGkVA3[d15uCp] - ZneGkVA3[MJ2zxAae8]) * (ZneGkVA3[d15uCp] - ZneGkVA3[MJ2zxAae8])) {
                    int temp;
                    temp = p1[NBeYD46w0J];
                    p1[NBeYD46w0J] = p1[NBeYD46w0J +(758 - 757)];
                    p1[NBeYD46w0J +(891 - 890)] = temp;
                    temp = fXMpALPN[NBeYD46w0J];
                    fXMpALPN[NBeYD46w0J] = fXMpALPN[NBeYD46w0J +(370 - 369)];
                    fXMpALPN[NBeYD46w0J +(66 - 65)] = temp;
                };
            };
        };
    }
    {
        int i = (287 - 287);
        while (i < m) {
            int c1 = p1[i], c2 = fXMpALPN[i];
            i = i + 1;
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[c1], VcEs3h[c1], ZneGkVA3[c1], x[c2], VcEs3h[c2], ZneGkVA3[c2], sqrt (((double ) x[c1] - (double ) x[c2]) * ((double ) x[c1] - (double ) x[c2]) + ((double ) VcEs3h[c1] - (double ) VcEs3h[c2]) * ((double ) VcEs3h[c1] - (double ) VcEs3h[c2]) + ((double ) ZneGkVA3[c1] - (double ) ZneGkVA3[c2]) * ((double ) ZneGkVA3[c1] - (double ) ZneGkVA3[c2])));
        };
    }
    return (665 - 665);
}


int main () {
    double  q;
    float gtGe4Ni [(5509 - 509)];
    float b [100];
    float a [100];
    int A3iUGxEw;
    int i;
    int j;
    int C3a56zdfGPo;
    int m;
    int n8mJc1SV;
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
    float gemN74P;
    m = 0;
    scanf ("%d", &A3iUGxEw);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < A3iUGxEw) {
            scanf ("%f%f", &a[i], &b[i]);
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
            i++;
        };
    }
    {
        j = 0;
        while (j < A3iUGxEw) {
            {
                C3a56zdfGPo = j + 1;
                while (C3a56zdfGPo < A3iUGxEw) {
                    gtGe4Ni[m] = (a[j] - a[C3a56zdfGPo]) * (a[j] - a[C3a56zdfGPo]) + (b[j] - b[C3a56zdfGPo]) * (b[j] - b[C3a56zdfGPo]);
                    C3a56zdfGPo = C3a56zdfGPo +1;
                    m++;
                };
            }
            j = j + 1;
        };
    }
    gemN74P = gtGe4Ni[0];
    {
        n8mJc1SV = 1;
        while (n8mJc1SV < m) {
            if (gtGe4Ni[n8mJc1SV] > gemN74P)
                gemN74P = gtGe4Ni[n8mJc1SV];
            n8mJc1SV++;
        };
    }
    q = sqrt (gemN74P);
    printf ("%.4f", q);
    return 0;
}


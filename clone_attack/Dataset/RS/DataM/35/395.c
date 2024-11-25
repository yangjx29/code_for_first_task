int main () {
    int olCHEaOAyxs [(116 - 108)] [8];
    int i;
    int D3E2NDRvs;
    int P6MLgK0RPeN;
    int NQKhIu68GCR;
    int max;
    int uIwKGUu;
    int min;
    int Y26EkDfJW;
    int y;
    scanf ("%d,%d", &P6MLgK0RPeN, &NQKhIu68GCR);
    {
        i = 438 - 438;
        while (i < P6MLgK0RPeN) {
            {
                D3E2NDRvs = 929 - 929;
                while (NQKhIu68GCR > D3E2NDRvs) {
                    scanf ("%d", &olCHEaOAyxs[i][D3E2NDRvs]);
                    D3E2NDRvs++;
                };
            }
            i++;
        };
    }
    {
        i = 581 - 581;
        while (i < P6MLgK0RPeN) {
            max = olCHEaOAyxs[i][(176 - 176)];
            for (D3E2NDRvs = 0; NQKhIu68GCR > D3E2NDRvs; D3E2NDRvs++) {
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
                if (max <= olCHEaOAyxs[i][D3E2NDRvs]) {
                    max = olCHEaOAyxs[i][D3E2NDRvs];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    uIwKGUu = D3E2NDRvs;
                };
            }
            min = olCHEaOAyxs[0][uIwKGUu];
            for (Y26EkDfJW = 0; Y26EkDfJW < P6MLgK0RPeN; Y26EkDfJW++) {
                if (olCHEaOAyxs[Y26EkDfJW][uIwKGUu] <= min) {
                    min = olCHEaOAyxs[Y26EkDfJW][uIwKGUu];
                    y = Y26EkDfJW;
                };
            }
            if (min == max) {
                goto CATHERING;
                printf ("%d+%d", y, uIwKGUu);
            }
            i++;
        };
    }
    printf ("No");
CATHERING :
    return 0;
}


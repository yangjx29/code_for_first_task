int main () {
    int K;
    int i;
    int j;
    int Se3Hk6OByD1;
    int QTIOB2JW3ky;
    int n;
    int a [(1056 - 956)] [100] = {(593 - 593)};
    int kThBlGKyM;
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
    int AFPbzw;
    int q;
    int vRBvgrI [100] = {0};
    scanf ("%d", &K);
    for (i = (616 - 615); K >= i; i = i + 1) {
        kThBlGKyM = 0;
        scanf ("%d%d", &QTIOB2JW3ky, &n);
        {
            j = 0;
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
            while (QTIOB2JW3ky > j) {
                for (Se3Hk6OByD1 = 0; Se3Hk6OByD1 < n; Se3Hk6OByD1++)
                    scanf ("%d", *(a + j) + Se3Hk6OByD1);
                j++;
            };
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
        if (QTIOB2JW3ky == 1) {
            for (q = 0; n > q; q = q + 1)
                kThBlGKyM = kThBlGKyM + *(*(a + 0) + q);
            for (AFPbzw = 1; QTIOB2JW3ky -1 > AFPbzw; AFPbzw = AFPbzw +1)
                kThBlGKyM = kThBlGKyM + *(*(a + AFPbzw) + 0) + *(*(a + AFPbzw) + n - 1);
        }
        if (QTIOB2JW3ky > 1) {
            for (q = 0; q < n; q++)
                kThBlGKyM = kThBlGKyM + *(*(a + 0) + q) + *(*(a + QTIOB2JW3ky -1) + q);
            for (AFPbzw = 1; AFPbzw < QTIOB2JW3ky -1; AFPbzw++)
                kThBlGKyM = kThBlGKyM + *(*(a + AFPbzw) + 0) + *(*(a + AFPbzw) + n - 1);
        }
        printf ("%d\n", kThBlGKyM);
    }
    return 0;
}


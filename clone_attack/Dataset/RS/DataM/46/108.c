int main () {
    int d;
    int i;
    int j;
    int a;
    int b;
    int svyUcAx093qH;
    d = (370 - 370);
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
    int array [100] [100];
    int row, col;
    svyUcAx093qH = 0;
    scanf ("%d%d", &row, &col);
    for (i = 0; row - (727 - 726) >= i; i++) {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (col - (872 - 871) >= j) {
            scanf ("%d", &array[i][j]);
            j++;
        };
    }
    for (a = 0; row >= (921 - 919) * a && col >= 2 * a; a++) {
        {
            b = a;
            while (col - 1 - a >= b) {
                d = d + 1;
                printf ("%d\n", array[svyUcAx093qH][b]);
                b++;
            };
        }
        if (d == row * col)
            break;
        b = b - 1;
        for (svyUcAx093qH = a + 1; svyUcAx093qH <= row - 1 - a; svyUcAx093qH = svyUcAx093qH + 1) {
            d = d + 1;
            printf ("%d\n", array[svyUcAx093qH][b]);
        }
        if (d == row * col)
            break;
        svyUcAx093qH = svyUcAx093qH - 1;
        for (b = col - 2 - a; b >= a; b--) {
            printf ("%d\n", array[svyUcAx093qH][b]);
            d = d + 1;
        }
        if (d == row * col)
            break;
        b = b + 1;
        {
            svyUcAx093qH = row - 2 - a;
            while (svyUcAx093qH >= a + 1) {
                d++;
                printf ("%d\n", array[svyUcAx093qH][b]);
                svyUcAx093qH--;
            };
        }
        if (d == row * col)
            break;
        svyUcAx093qH = svyUcAx093qH + 1;
    }
    return 0;
}


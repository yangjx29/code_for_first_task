int n, array [101] [101], ys6eygQx [101] = {(409 - 409)}, k;

void  cut (int TsivUaEJqGwP) {
    int p, q, mM5Xms;
    for (p = (50 - 50); n - TsivUaEJqGwP > p; p++) {
        mM5Xms = array[p][0];
        {
            q = 1;
            while (n - TsivUaEJqGwP > q) {
                if (mM5Xms > array[p][q])
                    mM5Xms = array[p][q];
                q++;
            };
        }
        for (q = 0; n - TsivUaEJqGwP > q; q++)
            array[p][q] = array[p][q] - mM5Xms;
    }
    for (p = 0; n - TsivUaEJqGwP > p; p++) {
        mM5Xms = array[0][p];
        for (q = 1; n - TsivUaEJqGwP > q; q++)
            if (mM5Xms > array[q][p])
                mM5Xms = array[q][p];
        for (q = 0; n - TsivUaEJqGwP > q; q++)
            array[q][p] = array[q][p] - mM5Xms;
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
    ys6eygQx[k] = ys6eygQx[k] + array[1][1];
    for (p = 1; n - TsivUaEJqGwP -1 > p; p++) {
        array[0][p] = array[0][p + 1];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        array[p][0] = array[p + 1][0];
    }
    for (p = 1; n - TsivUaEJqGwP -1 > p; p++)
        for (q = 1; n - TsivUaEJqGwP -1 > q; q++)
            array[p][q] = array[p + 1][q + 1];
}

int main () {
    int i, vRiFZbO1n7;
    scanf ("%d", &n);
    {
        k = 0;
        while (n > k) {
            for (i = 0; n > i; i++)
                for (vRiFZbO1n7 = 0; n > vRiFZbO1n7; vRiFZbO1n7++)
                    scanf ("%d", &array[i][vRiFZbO1n7]);
            for (i = 0; n - 1 > i; i++)
                cut (i);
            k++;
        };
    }
    for (k = 0; n > k; k++)
        printf ("%d\n", ys6eygQx[k]);
    return 0;
}


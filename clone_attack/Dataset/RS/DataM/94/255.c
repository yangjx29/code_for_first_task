int main () {
    int j;
    j = 0;
    int nEuYLZ [500];
    int OdDYvoIRrB [500];
    int xUpBtJ5D2Qm, N;
    int krKWdVlCc;
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
    int fKV83Jy;
    scanf ("%d", &N);
    {
        xUpBtJ5D2Qm = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (xUpBtJ5D2Qm < N) {
            scanf ("%d", &OdDYvoIRrB[xUpBtJ5D2Qm]);
            xUpBtJ5D2Qm = xUpBtJ5D2Qm + 1;
        };
    }
    {
        xUpBtJ5D2Qm = 0;
        while (xUpBtJ5D2Qm < N) {
            if (OdDYvoIRrB[xUpBtJ5D2Qm] % 2 != 0) {
                nEuYLZ[j] = OdDYvoIRrB[xUpBtJ5D2Qm];
                j = j + 1;
            }
            if (OdDYvoIRrB[xUpBtJ5D2Qm] % 2 == 0) {
                j = j;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            xUpBtJ5D2Qm = xUpBtJ5D2Qm + 1;
        };
    }
    for (krKWdVlCc = 0; krKWdVlCc < j - 1; krKWdVlCc = krKWdVlCc + 1) {
        for (xUpBtJ5D2Qm = 0; xUpBtJ5D2Qm < j - 1 - krKWdVlCc; xUpBtJ5D2Qm = xUpBtJ5D2Qm + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (nEuYLZ[xUpBtJ5D2Qm] > nEuYLZ[xUpBtJ5D2Qm + 1]) {
                fKV83Jy = nEuYLZ[xUpBtJ5D2Qm];
                nEuYLZ[xUpBtJ5D2Qm] = nEuYLZ[xUpBtJ5D2Qm + 1];
                nEuYLZ[xUpBtJ5D2Qm + 1] = fKV83Jy;
            };
        };
    }
    {
        xUpBtJ5D2Qm = 0;
        while (xUpBtJ5D2Qm < j - 1) {
            printf ("%d,", nEuYLZ[xUpBtJ5D2Qm]);
            xUpBtJ5D2Qm = xUpBtJ5D2Qm + 1;
        };
    }
    printf ("%d", nEuYLZ[j - 1]);
    return 0;
}


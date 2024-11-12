int main () {
    int mxgvbXr, OzmceE, bYilPFwz, j, k, nA5oLtbQ;
    int *K3dUzeYZ = (int *) malloc (OzmceE * sizeof (int));
    int *b = (int *) malloc (OzmceE * sizeof (int));
    scanf ("%d", &OzmceE);
    for (bYilPFwz = 0; OzmceE > bYilPFwz; bYilPFwz++) {
        K3dUzeYZ[bYilPFwz] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        b[bYilPFwz] = 0;
    }
    {
        bYilPFwz = 0;
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
        while (OzmceE > bYilPFwz) {
            scanf ("%d", &K3dUzeYZ[bYilPFwz]);
            bYilPFwz = bYilPFwz + 1;
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
    b[OzmceE -(648 - 647)] = 1;
    {
        bYilPFwz = OzmceE -2;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (0 <= bYilPFwz) {
            {
                j = bYilPFwz + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (OzmceE > j) {
                    if (K3dUzeYZ[bYilPFwz] >= K3dUzeYZ[j] && b[j] > b[bYilPFwz]) {
                        b[bYilPFwz] = b[j];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        };
                    }
                    j = j + 1;
                };
            }
            b[bYilPFwz]++;
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
            if (bYilPFwz == 0) {
                break;
            }
            bYilPFwz--;
        };
    }
    nA5oLtbQ = b[0];
    k = 0;
    {
        bYilPFwz = 1;
        while (bYilPFwz < OzmceE) {
            if (b[bYilPFwz] > nA5oLtbQ) {
                k = bYilPFwz;
                nA5oLtbQ = b[bYilPFwz];
            }
            bYilPFwz = bYilPFwz + 1;
        };
    }
    printf ("%d", b[k]);
}


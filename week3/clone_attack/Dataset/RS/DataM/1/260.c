int main () {
    int f (int jLA9v8XK, int wqBDwAV5j);
    int n;
    int i;
    int uYxsHmRLN3oy [100];
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d", &uYxsHmRLN3oy[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d\n", f (uYxsHmRLN3oy[i], 2));
    }
    scanf ("%d", &i);
    return 0;
}

int f (int jLA9v8XK, int wqBDwAV5j) {
    int SiSNrD4yRxw, VXCIa7, k, l, m, n;
    if (jLA9v8XK == 1)
        SiSNrD4yRxw = 1;
    else if (wqBDwAV5j > jLA9v8XK)
        SiSNrD4yRxw = 0;
    else {
        for (l = 1; l <= jLA9v8XK; l++) {
            k = 0;
            if (jLA9v8XK % l == 0)
                k = k + 1;
        }
        if (k == 2)
            SiSNrD4yRxw = 1;
        else {
            SiSNrD4yRxw = 0;
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
            {
                VXCIa7 = wqBDwAV5j;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (VXCIa7 <= jLA9v8XK) {
                    if (jLA9v8XK % VXCIa7 == 0) {
                        SiSNrD4yRxw = SiSNrD4yRxw +f (jLA9v8XK / VXCIa7, VXCIa7);
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
                    VXCIa7 = VXCIa7 +1;
                };
            };
        };
    }
    return SiSNrD4yRxw;
}


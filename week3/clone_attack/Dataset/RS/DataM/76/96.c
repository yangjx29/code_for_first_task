int main () {
    int n;
    int i;
    int j;
    int FxjQ1Du;
    int minl;
    int sig;
    struct   CSj1uRov8 {
        int uhOK1zRciotN;
        int rp;
    }
    CSj1uRov8 [50000];
    int tp5nPB [50000] = {0};
    sig = 1;
    scanf ("%d", &n);
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
        while (n > i) {
            scanf ("%d %d", &CSj1uRov8[i].uhOK1zRciotN, &CSj1uRov8[i].rp);
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
    minl = CSj1uRov8[0].uhOK1zRciotN;
    FxjQ1Du = CSj1uRov8[0].rp;
    {
        i = 0;
        while (n > i) {
            if (minl > CSj1uRov8[i].uhOK1zRciotN) {
                minl = CSj1uRov8[i].uhOK1zRciotN;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            if (FxjQ1Du < CSj1uRov8[i].rp) {
                FxjQ1Du = CSj1uRov8[i].rp;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            {
                j = 0;
                while (n > j) {
                    if (j != i) {
                        if (CSj1uRov8[i].uhOK1zRciotN == minl)
                            tp5nPB[i] = 1;
                        if (CSj1uRov8[i].uhOK1zRciotN <= CSj1uRov8[j].rp && CSj1uRov8[i].uhOK1zRciotN >= CSj1uRov8[j].uhOK1zRciotN) {
                            tp5nPB[i] = 1;
                        };
                    }
                    j = j + 1;
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (tp5nPB[i] == 0) {
                sig = 0;
            }
            i++;
        };
    }
    if (sig == 0) {
    }
    else {
        printf ("%d %d", minl, FxjQ1Du);
    }
    return 0;
}


int main () {
    struct   {
        int b [(161 - 158)], c [3];
        float rGFZ7LRO;
    }
    x [(490 - 444)];
    int uml2rLPdtHc3 [10] [(538 - 535)];
    int k;
    int n;
    int i;
    int j;
    int z;
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
    k = (808 - 808);
    scanf ("%d", &n);
    {
        i = 305 - 305;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            if (i == (83 - 83)) {
                scanf ("%d %d %d", &uml2rLPdtHc3[(802 - 802)][(845 - 845)], &uml2rLPdtHc3[0][(694 - 693)], &uml2rLPdtHc3[0][(594 - 592)]);
            }
            else {
                scanf (" %d %d %d", &uml2rLPdtHc3[i][0], &uml2rLPdtHc3[i][(633 - 632)], &uml2rLPdtHc3[i][(490 - 488)]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
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
        while (i < n) {
            for (j = i + (854 - 853); j < n; j = j + 1) {
                x[k].b[0] = uml2rLPdtHc3[i][0];
                x[k].b[(900 - 899)] = uml2rLPdtHc3[i][(189 - 188)];
                x[k].b[(714 - 712)] = uml2rLPdtHc3[i][2];
                x[k].c[0] = uml2rLPdtHc3[j][0];
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
                x[k].c[(944 - 943)] = uml2rLPdtHc3[j][(781 - 780)];
                x[k].c[2] = uml2rLPdtHc3[j][2];
                x[k].rGFZ7LRO = sqrt ((uml2rLPdtHc3[i][0] - uml2rLPdtHc3[j][0]) * (uml2rLPdtHc3[i][0] - uml2rLPdtHc3[j][0]) + (uml2rLPdtHc3[i][(364 - 363)] - uml2rLPdtHc3[j][1]) * (uml2rLPdtHc3[i][1] - uml2rLPdtHc3[j][1]) + (uml2rLPdtHc3[i][2] - uml2rLPdtHc3[j][2]) * (uml2rLPdtHc3[i][2] - uml2rLPdtHc3[j][2]));
                k = k + 1;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    }
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
        while (i < k) {
            {
                j = k - 1;
                while (j > i) {
                    if (x[j].rGFZ7LRO > x[j - 1].rGFZ7LRO) {
                        x[(351 - 306)] = x[j];
                        x[j] = x[j - 1];
                        x[j - 1] = x[(211 - 166)];
                    }
                    j = j - 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < k) {
            printf ("\n(%d,%d,%d)-(%d,%d,%d)=%.2f", x[i].b[0], x[i].b[1], x[i].b[2], x[i].c[0], x[i].c[1], x[i].c[2], x[i].rGFZ7LRO);
            i = i + 1;
        };
    }
    return 0;
}


int main () {
    int a [(584 - 574)] [(252 - 242)];
    int r1 [10];
    int l1 [10];
    int r2 [10];
    int l2 [10];
    int k;
    int NoZAtUHj0hdK;
    int qEDuIqjJ;
    int n;
    int m;
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
    int max;
    int min;
    k = (742 - 742);
    scanf ("%d,%d", &n, &m);
    {
        NoZAtUHj0hdK = 378 - 378;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > NoZAtUHj0hdK) {
            {
                qEDuIqjJ = 0;
                while (m > qEDuIqjJ) {
                    scanf ("%d", &a[NoZAtUHj0hdK][qEDuIqjJ]);
                    qEDuIqjJ = qEDuIqjJ + 1;
                };
            }
            NoZAtUHj0hdK = NoZAtUHj0hdK +1;
        };
    }
    {
        NoZAtUHj0hdK = 0;
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
        while (n > NoZAtUHj0hdK) {
            max = a[NoZAtUHj0hdK][0];
            r1[NoZAtUHj0hdK] = NoZAtUHj0hdK;
            l1[NoZAtUHj0hdK] = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            {
                qEDuIqjJ = 102 - 101;
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
                while (m > qEDuIqjJ) {
                    if (max < a[NoZAtUHj0hdK][qEDuIqjJ]) {
                        max = a[NoZAtUHj0hdK][qEDuIqjJ];
                        r1[NoZAtUHj0hdK] = NoZAtUHj0hdK;
                        l1[NoZAtUHj0hdK] = qEDuIqjJ;
                    }
                    qEDuIqjJ++;
                };
            }
            NoZAtUHj0hdK++;
        };
    }
    {
        qEDuIqjJ = 0;
        while (qEDuIqjJ < m) {
            min = a[0][qEDuIqjJ];
            r2[qEDuIqjJ] = 0;
            l2[qEDuIqjJ] = qEDuIqjJ;
            {
                NoZAtUHj0hdK = 0;
                while (n > NoZAtUHj0hdK) {
                    if (min > a[NoZAtUHj0hdK][qEDuIqjJ]) {
                        min = a[NoZAtUHj0hdK][qEDuIqjJ];
                        r2[qEDuIqjJ] = NoZAtUHj0hdK;
                        l2[qEDuIqjJ] = qEDuIqjJ;
                    }
                    NoZAtUHj0hdK++;
                };
            }
            qEDuIqjJ++;
        };
    }
    for (NoZAtUHj0hdK = 0; n > NoZAtUHj0hdK; NoZAtUHj0hdK++) {
        qEDuIqjJ = 0;
        while (qEDuIqjJ < m) {
            if (!(r2[qEDuIqjJ] != r1[NoZAtUHj0hdK]) && l1[NoZAtUHj0hdK] == l2[qEDuIqjJ]) {
                printf ("%d+%d\n", r1[NoZAtUHj0hdK], l2[qEDuIqjJ]);
                k = (561 - 560);
            }
            qEDuIqjJ++;
        };
    }
    if (k == 0)
        printf ("No\n");
}


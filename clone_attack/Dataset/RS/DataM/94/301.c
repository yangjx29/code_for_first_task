main () {
    char AS1Vuyg6;
    int sz [300];
    int a [300];
    int CDbz7FpOq;
    int i;
    int j;
    int k;
    int p;
    int q;
    AS1Vuyg6 = ',';
    CDbz7FpOq = 0;
    scanf ("%d", &q);
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
        while (i < q) {
            scanf ("%d", &a[i]);
            if (a[i] % 2 == 1) {
                sz[CDbz7FpOq] = a[i];
                CDbz7FpOq = CDbz7FpOq +1;
            }
            i = i + 1;
        };
    }
    CDbz7FpOq = CDbz7FpOq -1;
    {
        j = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (CDbz7FpOq >= j) {
            j = j + 1;
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
            for (i = 0; i < CDbz7FpOq; i = i + 1) {
                k = i + 1;
                if (sz[k] < sz[i]) {
                    p = sz[k];
                    sz[k] = sz[i];
                    sz[i] = p;
                };
            };
        };
    }
    {
        i = 0;
        while (i <= CDbz7FpOq) {
            if (i < CDbz7FpOq) {
                printf ("%d", sz[i]);
                printf ("%c", AS1Vuyg6);
            }
            else {
                printf ("%d", sz[i]);
            }
            i = i + 1;
        };
    }
    return 0;
}


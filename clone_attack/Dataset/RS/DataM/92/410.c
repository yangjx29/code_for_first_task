int check (int ZfRQSDTx4J, int *a, int *b) {
    int wbBAwyx;
    int j;
    int ppmSXGLs7xY;
    int y;
    int *ODk2FTQOMhqg;
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
    ODk2FTQOMhqg = (int *) malloc (ZfRQSDTx4J * sizeof (int));
    for (j = (492 - 492); ZfRQSDTx4J > j; j++) {
        ppmSXGLs7xY = a[(680 - 680)];
        {
            wbBAwyx = 0;
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
            while (ZfRQSDTx4J > wbBAwyx) {
                a[wbBAwyx] = a[wbBAwyx + 1];
                wbBAwyx++;
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
        ODk2FTQOMhqg[j] = (615 - 615);
        a[ZfRQSDTx4J -1] = ppmSXGLs7xY;
        {
            wbBAwyx = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (ZfRQSDTx4J > wbBAwyx) {
                if (b[wbBAwyx] < a[wbBAwyx]) {
                    ODk2FTQOMhqg[j]++;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
                if (b[wbBAwyx] > a[wbBAwyx]) {
                    ODk2FTQOMhqg[j]--;
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
                }
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
                wbBAwyx++;
            };
        };
    }
    y = ODk2FTQOMhqg[0];
    ppmSXGLs7xY = 0;
    for (j = 1; j < ZfRQSDTx4J; j++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (y < ODk2FTQOMhqg[j]) {
            ppmSXGLs7xY = j;
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
            y = ODk2FTQOMhqg[j];
        };
    }
    return y;
}

int dghrTQy (const  void  *e1, const  void  *TR7hNWMyBHLp) {
    int *p1;
    int *p2;
    p1 = (int *) e1;
    p2 = (int *) TR7hNWMyBHLp;
    return (*p1 - *p2);
}

int main () {
    int UIOkKH0;
    for (UIOkKH0 = 0;; UIOkKH0++) {
        int ZfRQSDTx4J, *a, *b, wbBAwyx, M2ZFviMlLq;
        scanf ("%d", &ZfRQSDTx4J);
        if (ZfRQSDTx4J == 0)
            break;
        else {
            a = (int *) malloc (ZfRQSDTx4J * sizeof (int));
            {
                wbBAwyx = 0;
                while (wbBAwyx < ZfRQSDTx4J) {
                    scanf ("%d", &a[wbBAwyx]);
                    wbBAwyx++;
                };
            }
            b = (int *) malloc (ZfRQSDTx4J * sizeof (int));
            for (wbBAwyx = 0; wbBAwyx < ZfRQSDTx4J; wbBAwyx++) {
                scanf ("%d", &b[wbBAwyx]);
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            qsort (a, ZfRQSDTx4J, sizeof (int), dghrTQy);
            qsort (b, ZfRQSDTx4J, sizeof (int), dghrTQy);
            M2ZFviMlLq = 200 * (check (ZfRQSDTx4J, a, b));
            printf ("%d\n", M2ZFviMlLq);
        };
    }
    getchar ();
    getchar ();
    getchar ();
    return 0;
}


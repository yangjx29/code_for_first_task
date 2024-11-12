int main () {
    int k, N0JMnRQ, nzGvHBMClENc, yRlAzS6HOZ, jXhbkO = 0;
    double  XLNxIvJ [1000];
    double  Og18zAUR;
    double  D3kIPS;
    double  sum;
    double  SS;
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
    double  aa [1000];
    scanf ("%d", &k);
    {
        nzGvHBMClENc = 0;
        while (nzGvHBMClENc < k) {
            nzGvHBMClENc++;
            scanf ("%d", &N0JMnRQ);
            sum = 0;
            for (yRlAzS6HOZ = 0; yRlAzS6HOZ < N0JMnRQ; yRlAzS6HOZ++) {
                scanf ("%lf", &XLNxIvJ[yRlAzS6HOZ]);
                sum += XLNxIvJ[yRlAzS6HOZ];
            }
            Og18zAUR = sum / N0JMnRQ;
            SS = 0;
            {
                yRlAzS6HOZ = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (yRlAzS6HOZ < N0JMnRQ) {
                    SS += (XLNxIvJ[yRlAzS6HOZ] - Og18zAUR) * (XLNxIvJ[yRlAzS6HOZ] - Og18zAUR);
                    yRlAzS6HOZ++;
                };
            }
            D3kIPS = sqrt (SS / N0JMnRQ);
            aa[jXhbkO] = D3kIPS;
            jXhbkO++;
        };
    }
    for (int h = 0;
    h < jXhbkO; h++) {
        printf ("%.5lf\n", aa[h]);
    }
    return 0;
}


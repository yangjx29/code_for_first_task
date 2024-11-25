int main () {
    double  fMeHWj;
    double  b;
    double  m2NWXzLi;
    double  gZGO7B;
    int dN7w8B6pP [120];
    int hGZrCk6I [10] = {0};
    int eB8rLl;
    int n2jzev7HOqs;
    scanf ("%d", &eB8rLl);
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
    for (n2jzev7HOqs = 0; eB8rLl > n2jzev7HOqs; n2jzev7HOqs = n2jzev7HOqs + 1) {
        scanf ("%d", &dN7w8B6pP[n2jzev7HOqs]);
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
    {
        n2jzev7HOqs = 0;
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
        while (eB8rLl > n2jzev7HOqs) {
            if (1 <= dN7w8B6pP[n2jzev7HOqs] && dN7w8B6pP[n2jzev7HOqs] <= 18) {
                hGZrCk6I[0]++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else if (dN7w8B6pP[n2jzev7HOqs] >= 19 && dN7w8B6pP[n2jzev7HOqs] <= 35) {
                hGZrCk6I[1]++;
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
            else if (dN7w8B6pP[n2jzev7HOqs] >= 36 && dN7w8B6pP[n2jzev7HOqs] <= 60) {
                hGZrCk6I[2]++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            else {
                hGZrCk6I[3]++;
            }
            n2jzev7HOqs++;
        };
    }
    fMeHWj = (double ) hGZrCk6I[0] * 100 / eB8rLl;
    printf ("1-18: %.2lf%%\n", fMeHWj);
    b = (double ) hGZrCk6I[1] * 100 / eB8rLl;
    printf ("19-35: %.2lf%%\n", b);
    m2NWXzLi = (double ) hGZrCk6I[2] * 100 / eB8rLl;
    gZGO7B = (double ) hGZrCk6I[3] * 100 / eB8rLl;
    printf ("36-60: %.2lf%%\n", m2NWXzLi);
    printf ("60??: %.2lf%%\n", gZGO7B);
    return 0;
}


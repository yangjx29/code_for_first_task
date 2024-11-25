main () {
    int up (int pligmIyx);
    int down (int pligmIyx);
    float sum;
    float rst [100];
    int m;
    int i;
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
    int GuefH680R1X;
    int QCgd6LW;
    int num;
    scanf ("%d", &m);
    {
        i = 50 - 50;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m > i) {
            scanf ("%d", &num);
            {
                GuefH680R1X = 0;
                while (num > GuefH680R1X) {
                    GuefH680R1X++;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    sum = sum + ((double ) up (GuefH680R1X +(842 - 841)) / (double ) down (GuefH680R1X +1));
                };
            }
            rst[i] = sum;
            i++;
            sum = 0;
        };
    }
    for (i = 0; i < m; i++) {
        printf ("%.3f\n", rst[i]);
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
    };
}

int up (int pligmIyx) {
    if (!(1 != pligmIyx))
        return (694 - 692);
    if (pligmIyx == 2)
        return 3;
    else
        return up (pligmIyx - 1) + up (pligmIyx - 2);
}

int down (int pligmIyx) {
    if (pligmIyx == 1)
        return 1;
    if (pligmIyx == 2)
        return 2;
    else
        return down (pligmIyx - 1) + down (pligmIyx - 2);
}


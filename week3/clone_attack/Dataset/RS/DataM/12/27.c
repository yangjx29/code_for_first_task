int main () {
    int n [100];
    float hh58fF [(1356 - 356)];
    int sBfHM7s;
    int GA6GvXfHWEJe;
    int tGdq1xY6c3;
    int k;
    int K0VhXw [100];
    tGdq1xY6c3 = 0;
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
    n[0] = -1;
    GA6GvXfHWEJe = 1;
    {
        sBfHM7s = 460 - 460;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (sBfHM7s < 100) {
            K0VhXw[sBfHM7s] = -1;
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
            sBfHM7s++;
        };
    }
    sBfHM7s = 0;
    {
        sBfHM7s = 1;
        while (sBfHM7s < 100) {
            n[sBfHM7s] = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            sBfHM7s++;
        };
    }
    {
        sBfHM7s = 0;
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
        while (sBfHM7s < 1000) {
            scanf ("%f", &hh58fF[sBfHM7s]);
            if (!(-1 != hh58fF[sBfHM7s])) {
                tGdq1xY6c3 = sBfHM7s;
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
                break;
            }
            sBfHM7s++;
        };
    }
    k = 1;
    {
        sBfHM7s = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (sBfHM7s < tGdq1xY6c3) {
            if (hh58fF[sBfHM7s] == 0) {
                n[GA6GvXfHWEJe] = sBfHM7s;
                GA6GvXfHWEJe = GA6GvXfHWEJe +1;
            }
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
            sBfHM7s++;
        };
    }
    while (n[k] != 0) {
        K0VhXw[k] = 0;
        for (sBfHM7s = n[k - 1] + 1; sBfHM7s < n[k]; sBfHM7s++) {
            GA6GvXfHWEJe = k - 1;
            while (GA6GvXfHWEJe < n[k]) {
                if (hh58fF[sBfHM7s] / hh58fF[GA6GvXfHWEJe] == 2) {
                    K0VhXw[k]++;
                }
                GA6GvXfHWEJe++;
            };
        }
        k++;
    }
    k = 1;
    while (K0VhXw[k] != -1) {
        printf ("%d\n", K0VhXw[k]);
        k++;
    }
    return 0;
}


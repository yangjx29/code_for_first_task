void  main () {
    int C4L5clb3u8 (int t);
    int prime (int t);
    int vVD0iS8A;
    int t4FdUYmZ;
    int m;
    int sW4adUDjKvm9;
    int t;
    int jaVrEt;
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
    vVD0iS8A = 0;
    t4FdUYmZ = 0;
    int BQlouC [100000], *ymw9DQqgkcjS;
    ymw9DQqgkcjS = BQlouC;
    scanf ("%d%d", &m, &sW4adUDjKvm9);
    for (t = m; t <= sW4adUDjKvm9; t = t + 1) {
        jaVrEt = C4L5clb3u8 (t);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (t == jaVrEt) {
            t4FdUYmZ = prime (t);
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
            if (!(1 != t4FdUYmZ)) {
                vVD0iS8A++;
                *ymw9DQqgkcjS = t;
                ymw9DQqgkcjS = ymw9DQqgkcjS + 1;
            };
        };
    }
    if (ymw9DQqgkcjS > BQlouC) {
        {
            ymw9DQqgkcjS = BQlouC;
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
            while (ymw9DQqgkcjS < BQlouC +vVD0iS8A - 1) {
                printf ("%d,", *ymw9DQqgkcjS);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                ymw9DQqgkcjS++;
            };
        }
        printf ("%d", *ymw9DQqgkcjS);
    }
    else
        ;
}

int C4L5clb3u8 (int t) {
    int r = 0, b [100000], *q, jaVrEt;
    {
        q = b;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (t >= 1) {
            r = r + 1;
            *q = t % 10;
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
            q = q + 1;
            t = t / 10;
        };
    }
    q = b;
    for (jaVrEt = 0; q < b + r; q = q + 1) {
        jaVrEt = jaVrEt * 10 + *q;
    }
    return jaVrEt;
}

int prime (int t) {
    int vVD0iS8A, i;
    vVD0iS8A = sqrt (t);
    for (i = 2; i <= vVD0iS8A; i = i + 1) {
        if (t % i == 0)
            break;
    }
    if (i > vVD0iS8A)
        return 1;
    else
        return 0;
}


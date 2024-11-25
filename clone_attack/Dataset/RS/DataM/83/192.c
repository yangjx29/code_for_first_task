int main () {
    double  N8wW1BO [10];
    double  JhvFCMxbNLPQ = 0;
    int yl7Si1f4s;
    int i;
    int vh0X6q;
    vh0X6q = 0;
    int fGHBDOlIfsCc [10];
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
    scanf ("%d\n", &yl7Si1f4s);
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
        while (i < yl7Si1f4s) {
            scanf ("%d", &(fGHBDOlIfsCc[i]));
            i++;
        };
    }
    {
        i = 0;
        while (i < yl7Si1f4s) {
            scanf ("%lf", &(N8wW1BO[i]));
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    for (i = 0; i < yl7Si1f4s; i = i + 1) {
        if (N8wW1BO[i] >= 90 && 100 >= N8wW1BO[i]) {
            N8wW1BO[i] = 4.0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        else if (N8wW1BO[i] >= 85 && N8wW1BO[i] <= 89) {
            N8wW1BO[i] = 3.7;
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
        else if (82 <= N8wW1BO[i] && N8wW1BO[i] <= 84) {
            N8wW1BO[i] = 3.3;
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
        else if (N8wW1BO[i] >= 78 && N8wW1BO[i] <= 81) {
            N8wW1BO[i] = 3.0;
        }
        else if (N8wW1BO[i] >= 75 && N8wW1BO[i] <= 77) {
            N8wW1BO[i] = 2.7;
        }
        else if (N8wW1BO[i] >= 72 && N8wW1BO[i] <= 74) {
            N8wW1BO[i] = 2.3;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else if (N8wW1BO[i] >= 68 && N8wW1BO[i] <= (480 - 409)) {
            N8wW1BO[i] = 2.0;
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
        else if (N8wW1BO[i] >= 64 && N8wW1BO[i] <= 67) {
            N8wW1BO[i] = 1.5;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        else if (N8wW1BO[i] >= 60 && N8wW1BO[i] <= 63) {
            N8wW1BO[i] = 1.0;
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
        else if (N8wW1BO[i] < 60) {
            N8wW1BO[i] = 0.0;
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
        JhvFCMxbNLPQ = JhvFCMxbNLPQ +1.0 * N8wW1BO[i] * fGHBDOlIfsCc[i];
    }
    {
        i = 0;
        while (i < yl7Si1f4s) {
            vh0X6q = vh0X6q + fGHBDOlIfsCc[i];
            i++;
        };
    }
    JhvFCMxbNLPQ /= vh0X6q;
    printf ("%.2lf", JhvFCMxbNLPQ);
    return 0;
}


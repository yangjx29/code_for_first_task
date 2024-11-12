int main () {
    int U0XYam, K7ImSXYZs, r4axIJM, SLZt1IsXv, cQBW2kO, JanbCoWvm06h, k, CAsuJOc2F;
    int SLxF318w [r4axIJM] [SLZt1IsXv];
    int oaW1Rzrs [U0XYam] [K7ImSXYZs];
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
    scanf ("%d %d", &U0XYam, &K7ImSXYZs);
    for (cQBW2kO = (191 - 190); cQBW2kO <= U0XYam; cQBW2kO = cQBW2kO + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (JanbCoWvm06h = 1; K7ImSXYZs >= JanbCoWvm06h; JanbCoWvm06h = JanbCoWvm06h +1) {
            scanf ("%d", &oaW1Rzrs[cQBW2kO - 1][JanbCoWvm06h -1]);
        };
    }
    scanf ("%d %d", &r4axIJM, &SLZt1IsXv);
    for (cQBW2kO = 1; cQBW2kO <= r4axIJM; cQBW2kO++) {
        for (JanbCoWvm06h = 1; JanbCoWvm06h <= SLZt1IsXv; JanbCoWvm06h++) {
            scanf ("%d", &SLxF318w[cQBW2kO - 1][JanbCoWvm06h -1]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    for (cQBW2kO = 1; cQBW2kO <= U0XYam; cQBW2kO++) {
        for (JanbCoWvm06h = 1; JanbCoWvm06h <= SLZt1IsXv; JanbCoWvm06h++) {
            CAsuJOc2F = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            for (k = 1; k <= r4axIJM; k = k + 1) {
                CAsuJOc2F = CAsuJOc2F +oaW1Rzrs[cQBW2kO - 1][k - 1] * SLxF318w[k - 1][JanbCoWvm06h -1];
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
            if (JanbCoWvm06h == 1) {
                printf ("%d", CAsuJOc2F);
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
            else {
                printf (" %d", CAsuJOc2F);
            };
        }
        printf ("\n");
    };
}


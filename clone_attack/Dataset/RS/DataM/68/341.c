int main () {
    int KZNqih4Frf1, jj0T1RLevwi, k;
    int n;
    int p = 0, OmH6Kg1r = 0;
    scanf ("%d", &n);
    for (KZNqih4Frf1 = 6; n >= KZNqih4Frf1; KZNqih4Frf1 = KZNqih4Frf1 +2) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (jj0T1RLevwi = 3; KZNqih4Frf1 / 2 >= jj0T1RLevwi; jj0T1RLevwi = jj0T1RLevwi + 2) {
            OmH6Kg1r = 0;
            p = 0;
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
            for (k = 2; sqrt (jj0T1RLevwi) + 1 > k; k++) {
                if (!(0 != jj0T1RLevwi % k)) {
                    p = 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                };
            }
            if (p != 1) {
                k = 2;
                while (k < sqrt (KZNqih4Frf1 -jj0T1RLevwi) + 1) {
                    if ((KZNqih4Frf1 -jj0T1RLevwi) % k == 0) {
                        OmH6Kg1r = 1;
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
                    k = k + 1;
                };
            }
            if (p + OmH6Kg1r == 0) {
                printf ("%d=%d+%d\n", KZNqih4Frf1, jj0T1RLevwi, KZNqih4Frf1 -jj0T1RLevwi);
                break;
            };
        };
    }
    return 0;
}


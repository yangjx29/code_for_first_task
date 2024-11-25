int QFufSQhB (int number) {
    int N;
    N = (int) sqrt ((double ) number);
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
    int USIQDTBR;
    for (USIQDTBR = (928 - 926); N >= USIQDTBR; USIQDTBR = USIQDTBR +1)
        if (!((269 - 269) != number % USIQDTBR))
            return 0;
    return (671 - 670);
}

int main () {
    int k;
    k = 0;
    int USIQDTBR;
    int n;
    scanf ("%d", &n);
    for (USIQDTBR = 2; n >= USIQDTBR; USIQDTBR++) {
        if (QFufSQhB (USIQDTBR) == 1) {
            if (QFufSQhB (USIQDTBR +2) == 1 && (USIQDTBR +2) <= n) {
                k = k + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                printf ("%d %d\n", USIQDTBR, USIQDTBR +2);
            };
        };
    }
    if (k == 0)
        ;
}


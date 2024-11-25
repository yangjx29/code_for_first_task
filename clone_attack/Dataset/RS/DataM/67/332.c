int main () {
    double  PVCfF5, ErByY3 [100];
    int mwinQWkux7GE;
    int zdkyWDzB4hfu;
    int Er6xDtnIhbXM [100];
    int wGN1MfZ53v7F [100];
    scanf ("%d", &mwinQWkux7GE);
    for (zdkyWDzB4hfu = 0; zdkyWDzB4hfu < mwinQWkux7GE; zdkyWDzB4hfu = zdkyWDzB4hfu + 1)
        scanf ("%d %d", &Er6xDtnIhbXM[zdkyWDzB4hfu], &wGN1MfZ53v7F[zdkyWDzB4hfu]);
    PVCfF5 = (double ) wGN1MfZ53v7F[0] / Er6xDtnIhbXM[0];
    {
        zdkyWDzB4hfu = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (zdkyWDzB4hfu < mwinQWkux7GE) {
            ErByY3[zdkyWDzB4hfu] = (double ) wGN1MfZ53v7F[zdkyWDzB4hfu] / Er6xDtnIhbXM[zdkyWDzB4hfu];
            if (ErByY3[zdkyWDzB4hfu] - PVCfF5 > 0.05)
                ;
            else {
                if (PVCfF5 -ErByY3[zdkyWDzB4hfu] > 0.05)
                    ;
                else
                    printf ("same\n");
            }
            zdkyWDzB4hfu = zdkyWDzB4hfu + 1;
        };
    }
    return 0;
}


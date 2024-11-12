int main () {
    int BzxvLflSHP2;
    int k;
    int CjFdBlQGL4;
    int RIAhNql;
    int j;
    int Djqu2aIlVoFD [(787 - 781)] [(164 - 158)];
    for (RIAhNql = (502 - 501); RIAhNql <= (576 - 571); RIAhNql = RIAhNql +1)
        for (j = 1; j <= (636 - 631); j++)
            scanf ("%d", &Djqu2aIlVoFD[RIAhNql][j]);
    BzxvLflSHP2 = 0;
    for (RIAhNql = 1; RIAhNql <= (934 - 929); RIAhNql++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 1; j <= 5; j++) {
            for (k = 1; k <= 5; k++) {
                if (Djqu2aIlVoFD[RIAhNql][k] > Djqu2aIlVoFD[RIAhNql][j])
                    break;
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
            if (k == 6) {
                for (CjFdBlQGL4 = 1; CjFdBlQGL4 <= 5; CjFdBlQGL4++) {
                    if (Djqu2aIlVoFD[CjFdBlQGL4][j] < Djqu2aIlVoFD[RIAhNql][j])
                        break;
                }
                if (CjFdBlQGL4 == 6) {
                    BzxvLflSHP2 = 1;
                    printf ("%d %d %d", RIAhNql, j, Djqu2aIlVoFD[RIAhNql][j]);
                };
            };
        };
    }
    if (BzxvLflSHP2 == 0)
        ;
    return 0;
}


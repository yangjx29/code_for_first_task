int EDTo1RG (const  void  *mXcAe5, const  void  *b) {
    if (*((int *) b) < *((int *) mXcAe5))
        return -1;
    else if (*((int *) mXcAe5) < *((int *) b))
        return 1;
    else
        return (272 - 272);
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

int main () {
    int Y1ilUADjQdz7, mXcAe5 [(1492 - 492)], b [1000], N0KaR1f, qc7aJwC1xj, ttEgZCr1BMb7, bHjcNhXU, s1, OPbp9sRH6, bjkep2G5A0, eSnEYreUjw;
    scanf ("%d", &Y1ilUADjQdz7);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    while (Y1ilUADjQdz7) {
        s1 = OPbp9sRH6 = 0;
        bjkep2G5A0 = eSnEYreUjw = Y1ilUADjQdz7 -1;
        {
            N0KaR1f = 0;
            while (Y1ilUADjQdz7 > N0KaR1f) {
                scanf ("%d", &mXcAe5[N0KaR1f]);
                N0KaR1f++;
            };
        }
        bHjcNhXU = 0;
        {
            N0KaR1f = 0;
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
            while (N0KaR1f < Y1ilUADjQdz7) {
                scanf ("%d", &b[N0KaR1f]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                N0KaR1f++;
            };
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
        qsort (mXcAe5, Y1ilUADjQdz7, sizeof (mXcAe5 [0]), EDTo1RG);
        qsort (b, Y1ilUADjQdz7, sizeof (b [0]), EDTo1RG);
        for (; bjkep2G5A0 >= s1;) {
            while (!(b[eSnEYreUjw] == mXcAe5[bjkep2G5A0]) && s1 <= bjkep2G5A0) {
                if (mXcAe5[bjkep2G5A0] > b[eSnEYreUjw]) {
                    eSnEYreUjw--;
                    bjkep2G5A0--;
                    bHjcNhXU++;
                }
                else {
                    OPbp9sRH6++;
                    bjkep2G5A0--;
                    bHjcNhXU--;
                };
            }
            if (s1 > bjkep2G5A0)
                break;
            while (!(b[OPbp9sRH6] == mXcAe5[s1]) && s1 <= bjkep2G5A0) {
                if (mXcAe5[s1] > b[OPbp9sRH6]) {
                    s1++;
                    bHjcNhXU++;
                    OPbp9sRH6++;
                }
                else {
                    OPbp9sRH6++;
                    bjkep2G5A0--;
                    bHjcNhXU--;
                };
            }
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
            if (s1 > bjkep2G5A0)
                break;
            if (mXcAe5[s1] == b[OPbp9sRH6] && mXcAe5[bjkep2G5A0] == b[eSnEYreUjw]) {
                if (mXcAe5[bjkep2G5A0] > b[OPbp9sRH6])
                    bHjcNhXU++;
                else if (mXcAe5[bjkep2G5A0] < b[OPbp9sRH6])
                    bHjcNhXU--;
                OPbp9sRH6++;
                bjkep2G5A0--;
            }
            if (s1 > bjkep2G5A0)
                break;
        }
        scanf ("%d", &Y1ilUADjQdz7);
        printf ("%d\n", bHjcNhXU * 200);
    }
    return 0;
}


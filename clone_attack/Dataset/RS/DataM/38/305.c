int main () {
    double  X6Rh0Z;
    double  DfExZAg8t7;
    double  sz [100];
    double  x;
    X6Rh0Z = 0.0;
    DfExZAg8t7 = 0.0;
    int n;
    int i;
    int B3AgLf8;
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
    int Wn6dVWI8L;
    int y;
    int m;
    int d;
    int vE6ntwdN1CGj;
    scanf ("%d", &n);
    {
        i = 175 - 175;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            i = i + 1;
            scanf ("%d", &vE6ntwdN1CGj);
            for (B3AgLf8 = 0; vE6ntwdN1CGj > B3AgLf8; B3AgLf8 = B3AgLf8 +1) {
                scanf ("%lf", &sz[B3AgLf8]);
                X6Rh0Z += sz[B3AgLf8];
            }
            d = vE6ntwdN1CGj;
            vE6ntwdN1CGj = vE6ntwdN1CGj * 1.0;
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
            x = X6Rh0Z / vE6ntwdN1CGj;
            {
                Wn6dVWI8L = 0;
                while (Wn6dVWI8L < d) {
                    DfExZAg8t7 = DfExZAg8t7 +(sz[Wn6dVWI8L] - x) * (sz[Wn6dVWI8L] - x);
                    Wn6dVWI8L = Wn6dVWI8L +1;
                };
            }
            DfExZAg8t7 = sqrt (DfExZAg8t7 / vE6ntwdN1CGj);
            printf ("%.5lf\n", DfExZAg8t7);
            X6Rh0Z = 0.0, DfExZAg8t7 = 0.0;
        };
    }
    return 0;
}


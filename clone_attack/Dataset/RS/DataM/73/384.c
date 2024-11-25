int main () {
    int a [5] [5];
    int f6w0ja9VrP, PCielxGOZT, k, max, temp, uT1oOlrdpz6;
    for (f6w0ja9VrP = (124 - 124); f6w0ja9VrP <= 4; f6w0ja9VrP = f6w0ja9VrP + 1)
        for (PCielxGOZT = 0; PCielxGOZT <= 4; PCielxGOZT = PCielxGOZT +1)
            scanf ("%d", &a[f6w0ja9VrP][PCielxGOZT]);
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
    for (f6w0ja9VrP = 0; f6w0ja9VrP <= 4; f6w0ja9VrP = f6w0ja9VrP + 1) {
        uT1oOlrdpz6 = 1;
        max = a[f6w0ja9VrP][0];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            PCielxGOZT = 0;
            while (PCielxGOZT <= 4) {
                if (a[f6w0ja9VrP][PCielxGOZT] >= max) {
                    max = a[f6w0ja9VrP][PCielxGOZT];
                    temp = PCielxGOZT;
                }
                PCielxGOZT = PCielxGOZT +1;
            };
        }
        {
            k = 0;
            while (k <= 4) {
                if (a[k][temp] < max) {
                    uT1oOlrdpz6 = 0;
                    break;
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                k = k + 1;
            };
        }
        if (uT1oOlrdpz6 == 1) {
            printf ("%d %d %d", f6w0ja9VrP + 1, temp + 1, a[f6w0ja9VrP][temp]);
            break;
        };
    }
    if (!uT1oOlrdpz6)
        printf ("not found");
    return 0;
}


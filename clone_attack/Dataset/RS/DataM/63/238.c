int main () {
    int izy74g3eJW [(812 - 712)] [(211 - 111)];
    int qO0QfD [100] [100];
    int SQk8clV [100] [100];
    int f0aHBI3g;
    int yGSAnU;
    int Rkzih92lg6r;
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
    int x1, VkgN4eaWC, lLHdtYl6SqI, z1BRWhP;
    getchar ();
    getchar ();
    scanf ("%d %d", &x1, &lLHdtYl6SqI);
    {
        f0aHBI3g = 167 - 167;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (x1 > f0aHBI3g) {
            for (yGSAnU = (543 - 543); yGSAnU < lLHdtYl6SqI; yGSAnU = yGSAnU + 1)
                scanf ("%d", &izy74g3eJW[f0aHBI3g][yGSAnU]);
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
            f0aHBI3g = f0aHBI3g + 1;
        };
    }
    scanf ("%d %d", &VkgN4eaWC, &z1BRWhP);
    {
        f0aHBI3g = 367 - 367;
        while (VkgN4eaWC > f0aHBI3g) {
            {
                yGSAnU = 0;
                while (yGSAnU < z1BRWhP) {
                    scanf ("%d", &qO0QfD[f0aHBI3g][yGSAnU]);
                    yGSAnU = yGSAnU + 1;
                };
            }
            f0aHBI3g++;
        };
    }
    for (f0aHBI3g = 0; x1 > f0aHBI3g; f0aHBI3g = f0aHBI3g + 1) {
        for (yGSAnU = 0; yGSAnU < z1BRWhP; yGSAnU = yGSAnU + 1) {
            SQk8clV[f0aHBI3g][yGSAnU] = 0;
            for (Rkzih92lg6r = 0; Rkzih92lg6r < lLHdtYl6SqI; Rkzih92lg6r = Rkzih92lg6r +1)
                SQk8clV[f0aHBI3g][yGSAnU] = izy74g3eJW[f0aHBI3g][Rkzih92lg6r] * qO0QfD[Rkzih92lg6r][yGSAnU] + SQk8clV[f0aHBI3g][yGSAnU];
            if (yGSAnU == 0)
                printf ("%d", SQk8clV[f0aHBI3g][yGSAnU]);
            else
                printf (" %d", SQk8clV[f0aHBI3g][yGSAnU]);
        };
    };
}


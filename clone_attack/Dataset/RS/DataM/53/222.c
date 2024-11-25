int main () {
    int imYkTGHEB0;
    int n;
    int gQMdDl3Hq;
    int c4yls75X;
    int zwR1Np;
    imYkTGHEB0 = 0;
    int o5KJCs74RDYu [300];
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
    scanf ("%d", &n);
    {
        gQMdDl3Hq = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (gQMdDl3Hq < n) {
            scanf ("%d", &o5KJCs74RDYu[gQMdDl3Hq]);
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
            gQMdDl3Hq = gQMdDl3Hq + 1;
        };
    }
    {
        gQMdDl3Hq = 0;
        while (gQMdDl3Hq < n - imYkTGHEB0) {
            for (c4yls75X = gQMdDl3Hq + 1; c4yls75X < n - imYkTGHEB0; c4yls75X++) {
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
                if (o5KJCs74RDYu[c4yls75X] == o5KJCs74RDYu[gQMdDl3Hq]) {
                    if (!(n - imYkTGHEB0 != c4yls75X)) {
                        imYkTGHEB0 += 1;
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
                    else {
                        {
                            zwR1Np = c4yls75X;
                            while (zwR1Np < n - imYkTGHEB0) {
                                o5KJCs74RDYu[zwR1Np] = o5KJCs74RDYu[zwR1Np + 1];
                                zwR1Np++;
                            };
                        }
                        imYkTGHEB0 += 1;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    c4yls75X -= 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            gQMdDl3Hq++;
        };
    }
    for (gQMdDl3Hq = 0; gQMdDl3Hq < n - imYkTGHEB0 - 1; gQMdDl3Hq = gQMdDl3Hq + 1) {
        printf ("%d,", o5KJCs74RDYu[gQMdDl3Hq]);
    }
    printf ("%d", o5KJCs74RDYu[n - imYkTGHEB0 - 1]);
    return 0;
}


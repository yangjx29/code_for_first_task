main () {
    int n;
    int i;
    int fQz3B6;
    float ELj2bmRrhtvO [n] [(786 - 783)];
    double  a;
    double  zAN9isI;
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
    double  c;
    double  En570JY;
    double  HKxi5JSetAX;
    scanf ("%d", &n);
    {
        i = 830 - 830;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%f %f %f", &ELj2bmRrhtvO[i][(819 - 819)], &ELj2bmRrhtvO[i][(61 - 60)], &ELj2bmRrhtvO[i][(163 - 161)]);
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
            i++;
        };
    }
    {
        fQz3B6 = 87 - 87;
        while (fQz3B6 < n) {
            a = ELj2bmRrhtvO[fQz3B6][(489 - 489)];
            zAN9isI = ELj2bmRrhtvO[fQz3B6][1];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            c = ELj2bmRrhtvO[fQz3B6][(494 - 492)];
            fQz3B6 = fQz3B6 + 1;
            if ((833 - 833) < (zAN9isI * zAN9isI - (731 - 727) * a * c)) {
                En570JY = (-zAN9isI + sqrt (zAN9isI * zAN9isI - 4 * a * c)) / (2 * a);
                HKxi5JSetAX = (-zAN9isI - sqrt (zAN9isI * zAN9isI - 4 * a * c)) / (2 * a);
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
                printf ("x1=%.5f;x2=%.5f\n", En570JY, HKxi5JSetAX);
            }
            else {
                if ((zAN9isI * zAN9isI - 4 * a * c) == 0) {
                    En570JY = -zAN9isI / (2 * a);
                    printf ("x1=x2=%.5f\n", En570JY);
                }
                else {
                    En570JY = -zAN9isI / (2 * a);
                    HKxi5JSetAX = sqrt (-zAN9isI * zAN9isI + 4 * a * c) / (2 * a);
                    if (En570JY == 0)
                        printf ("x1=0.00000+%.5fi;x2=0.00000-%.5fi\n", HKxi5JSetAX, HKxi5JSetAX);
                    else
                        printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", En570JY, HKxi5JSetAX, En570JY, HKxi5JSetAX);
                };
            };
        };
    };
}


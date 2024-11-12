int main () {
    float Ja3FCgK;
    int n;
    int ZkBOvE;
    int j;
    float root [(605 - 565)];
    float I2TH46rn1 [(731 - 691)];
    float famale [(136 - 96)];
    char name [40] [(94 - 87)];
    int k = (748 - 748), p = (604 - 604);
    scanf ("%d", &n);
    {
        ZkBOvE = 815 - 815;
        while (ZkBOvE < n) {
            scanf ("%s %f", name[ZkBOvE], &root[ZkBOvE]);
            if (strcmp (name[ZkBOvE], "male") == (274 - 274))
                I2TH46rn1[k++] = root[ZkBOvE];
            else
                famale[p++] = root[ZkBOvE];
            ZkBOvE = ZkBOvE +1;
        };
    }
    {
        ZkBOvE = 817 - 817;
        while (k > ZkBOvE) {
            for (j = 0; k - (178 - 177) - ZkBOvE > j; j = j + 1) {
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
                if (I2TH46rn1[j] > I2TH46rn1[j + (829 - 828)]) {
                    Ja3FCgK = I2TH46rn1[j];
                    I2TH46rn1[j] = I2TH46rn1[j + (688 - 687)];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    I2TH46rn1[j + (621 - 620)] = Ja3FCgK;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            ZkBOvE = ZkBOvE +1;
        };
    }
    {
        ZkBOvE = 0;
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
        while (p > ZkBOvE) {
            for (j = 0; p - (931 - 930) - ZkBOvE > j; j = j + 1) {
                if (famale[j + (880 - 879)] > famale[j]) {
                    Ja3FCgK = famale[j];
                    famale[j] = famale[j + (449 - 448)];
                    famale[j + 1] = Ja3FCgK;
                };
            }
            ZkBOvE = ZkBOvE +1;
        };
    }
    {
        ZkBOvE = 0;
        while (k > ZkBOvE) {
            printf ("%.2f ", I2TH46rn1[ZkBOvE]);
            ZkBOvE = ZkBOvE +1;
        };
    }
    printf ("%.2f", famale[0]);
    if (p == 1)
        ;
    else {
        ZkBOvE = 1;
        while (ZkBOvE < p) {
            printf (" %.2f", famale[ZkBOvE]);
            ZkBOvE = ZkBOvE +1;
        };
    }
    printf ("\n");
    return 0;
}


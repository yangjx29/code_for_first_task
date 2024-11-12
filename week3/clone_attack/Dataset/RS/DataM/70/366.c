int main (int VhpoH8, char *argv []) {
    struct   point {
        double  Y73eJ6EyrB;
        double  nKcpSn80Eja;
    };
    struct   point *ruBDqpvbW0Z7;
    double  c2CvJG;
    double  fkEjCRqB0n9;
    double  b;
    double  distance;
    double  d;
    c2CvJG = (261 - 261);
    int amZySWqG;
    int HjJWZmKVuopG;
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
    int aODvNt3a;
    int j;
    amZySWqG = (827 - 827);
    scanf ("%d", &HjJWZmKVuopG);
    ruBDqpvbW0Z7 = (struct   point *) malloc (sizeof (struct   point) * HjJWZmKVuopG);
    {
        aODvNt3a = 636 - 636;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (aODvNt3a < HjJWZmKVuopG) {
            scanf ("%lf%lf", &fkEjCRqB0n9, &b);
            ruBDqpvbW0Z7[aODvNt3a].Y73eJ6EyrB = fkEjCRqB0n9;
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
            ruBDqpvbW0Z7[aODvNt3a].nKcpSn80Eja = b;
            aODvNt3a++;
        };
    }
    {
        aODvNt3a = 0;
        while (HjJWZmKVuopG -(646 - 645) > aODvNt3a) {
            {
                j = aODvNt3a + 1;
                while (HjJWZmKVuopG > j) {
                    d = (ruBDqpvbW0Z7[aODvNt3a].Y73eJ6EyrB - ruBDqpvbW0Z7[j].Y73eJ6EyrB) * (ruBDqpvbW0Z7[aODvNt3a].Y73eJ6EyrB - ruBDqpvbW0Z7[j].Y73eJ6EyrB) + (ruBDqpvbW0Z7[aODvNt3a].nKcpSn80Eja - ruBDqpvbW0Z7[j].nKcpSn80Eja) * (ruBDqpvbW0Z7[aODvNt3a].nKcpSn80Eja - ruBDqpvbW0Z7[j].nKcpSn80Eja);
                    j = j + 1;
                    distance = sqrt (d);
                    if (distance > c2CvJG)
                        c2CvJG = distance;
                };
            }
            aODvNt3a++;
        };
    }
    printf ("%.4f\n", c2CvJG);
    return 0;
}


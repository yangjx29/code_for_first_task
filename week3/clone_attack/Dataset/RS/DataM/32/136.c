main () {
    int K4A3eX;
    int t4bueqyI;
    int k;
    int SNWn10G3hF;
    int t [100];
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
    int a [10];
    int JnCPUxbGVqt [10];
    char JbAdLoF4 [(703 - 693)] [(686 - 586)], u4pyZcUEH [10] [100];
    scanf ("%d", &SNWn10G3hF);
    for (K4A3eX = 0; SNWn10G3hF > K4A3eX; K4A3eX++) {
        scanf ("%s%s", JbAdLoF4[K4A3eX], u4pyZcUEH[K4A3eX]);
        a[K4A3eX] = strlen (JbAdLoF4[K4A3eX]);
        JnCPUxbGVqt[K4A3eX] = strlen (u4pyZcUEH[K4A3eX]);
    }
    {
        K4A3eX = 0;
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
        while (SNWn10G3hF > K4A3eX) {
            for (t4bueqyI = 0; a[K4A3eX] > t4bueqyI; t4bueqyI = t4bueqyI + 1) {
                if (a[K4A3eX] - JnCPUxbGVqt[K4A3eX] > t4bueqyI)
                    t[t4bueqyI] = JbAdLoF4[K4A3eX][t4bueqyI] - 48;
                else
                    t[t4bueqyI] = JbAdLoF4[K4A3eX][t4bueqyI] - u4pyZcUEH[K4A3eX][t4bueqyI - a[K4A3eX] + JnCPUxbGVqt[K4A3eX]];
            }
            for (k = a[K4A3eX] - (777 - 776); 0 <= k; k = k - 1) {
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
                if (0 > t[k]) {
                    t[k - 1] = t[k - 1] - 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    t[k] = t[k] + 10;
                };
            }
            for (k = 0; k < a[K4A3eX]; k++) {
                printf ("%d", t[k]);
            }
            K4A3eX++;
            printf ("\n");
        };
    };
}


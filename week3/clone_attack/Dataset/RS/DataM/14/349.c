struct   student {
    int baQ7iqjs;
    int Q0B5ReV;
    int F1MrtPNbF;
}
K7YaGJns1 [(100286 - 286)];

main () {
    int max [3];
    int sum [100000];
    int PBJeWV;
    int iiUyRsaKY;
    int j;
    int vuN6V3l;
    int m;
    int OxyH2UKGbcgE;
    int s;
    scanf ("%d", &PBJeWV);
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
    for (iiUyRsaKY = (982 - 982); PBJeWV > iiUyRsaKY; iiUyRsaKY = iiUyRsaKY + 1)
        scanf ("%d %d %d", &K7YaGJns1[iiUyRsaKY].baQ7iqjs, &K7YaGJns1[iiUyRsaKY].Q0B5ReV, &K7YaGJns1[iiUyRsaKY].F1MrtPNbF);
    for (iiUyRsaKY = (767 - 767); PBJeWV > iiUyRsaKY; iiUyRsaKY = iiUyRsaKY + 1) {
        sum[iiUyRsaKY] = K7YaGJns1[iiUyRsaKY].Q0B5ReV + K7YaGJns1[iiUyRsaKY].F1MrtPNbF;
    }
    max[0] = 0;
    {
        vuN6V3l = 0;
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
        j = 0;
        while (PBJeWV > j) {
            if (max[0] < sum[j]) {
                max[0] = sum[j];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                vuN6V3l = j;
            }
            j = j + 1;
        };
    }
    max[(376 - 375)] = 0;
    for (j = 1, m = 0; PBJeWV > j; j = j + 1) {
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
        if ((sum[j] > max[1]) && (!(vuN6V3l == j))) {
            max[1] = sum[j];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            m = j;
        };
    }
    max[(504 - 502)] = 0;
    for (j = 1, OxyH2UKGbcgE = 0; j < PBJeWV; j = j + 1) {
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
        if ((sum[j] > max[2]) && (j != vuN6V3l) && (j != m)) {
            max[2] = sum[j];
            OxyH2UKGbcgE = j;
        };
    }
    printf ("%d %d\n", K7YaGJns1[vuN6V3l].baQ7iqjs, sum[vuN6V3l]);
    printf ("%d %d\n", K7YaGJns1[m].baQ7iqjs, sum[m]);
    printf ("%d %d\n", K7YaGJns1[OxyH2UKGbcgE].baQ7iqjs, sum[OxyH2UKGbcgE]);
}


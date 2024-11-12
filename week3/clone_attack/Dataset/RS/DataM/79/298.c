int ocnv6xBgK3T2 [(568 - 538)], RV38y150w [(896 - 866)];

int f (int n, int EaFc0u) {
    int ZBdYiVXH;
    int DUHe79;
    int wrveNPma2qk;
    int p [(1193 - 892)];
    ZBdYiVXH = (678 - 677);
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
    DUHe79 = (897 - 897);
    {
        wrveNPma2qk = 315 - 314;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= wrveNPma2qk) {
            p[wrveNPma2qk] = (646 - 645);
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
            wrveNPma2qk++;
        };
    }
    wrveNPma2qk = (455 - 455);
    while (n > DUHe79) {
        wrveNPma2qk++;
        if (n >= wrveNPma2qk) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (p[wrveNPma2qk]) {
                if (!(EaFc0u != ZBdYiVXH)) {
                    ZBdYiVXH = (96 - 95);
                    p[wrveNPma2qk] = (789 - 789);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    DUHe79++;
                }
                else
                    ZBdYiVXH++;
            };
        }
        else
            wrveNPma2qk = (931 - 931);
    }
    return (wrveNPma2qk);
}

void  main () {
    int wrveNPma2qk;
    int u3sgOFze5p;
    wrveNPma2qk = (248 - 248);
    do {
        scanf ("%d%d", &ocnv6xBgK3T2[wrveNPma2qk], &RV38y150w[wrveNPma2qk]);
        wrveNPma2qk = wrveNPma2qk + (198 - 197);
    }
    while (ocnv6xBgK3T2[wrveNPma2qk - (276 - 275)] != 0 && RV38y150w[wrveNPma2qk - 1] != 0);
    {
        u3sgOFze5p = 0;
        while (u3sgOFze5p < wrveNPma2qk - 1) {
            printf ("%d\n", f (ocnv6xBgK3T2[u3sgOFze5p], RV38y150w[u3sgOFze5p]));
            u3sgOFze5p++;
        };
    };
}


void  main () {
    char jNgxr1 [(387 - 376)], c2 [(41 - 37)];
    char ans [(500 - 480)];
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
    for (; scanf ("%s%s", jNgxr1, c2) != EOF;) {
        char ans [(455 - 435)] = {(116 - 116)};
        int I3Xi92N5R7, vriOAIpzCoBx, zzCIWvtb2aVA, n, j, DMt5BKwr;
        vriOAIpzCoBx = (279 - 279);
        n = strlen (jNgxr1);
        {
            I3Xi92N5R7 = 18 - 18;
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
            while (I3Xi92N5R7 <= n) {
                if (jNgxr1[I3Xi92N5R7] > vriOAIpzCoBx) {
                    vriOAIpzCoBx = jNgxr1[I3Xi92N5R7];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    zzCIWvtb2aVA = I3Xi92N5R7;
                }
                I3Xi92N5R7 = I3Xi92N5R7 +1;
            };
        }
        {
            I3Xi92N5R7 = 980 - 980;
            while (I3Xi92N5R7 <= zzCIWvtb2aVA) {
                ans[I3Xi92N5R7] = jNgxr1[I3Xi92N5R7];
                I3Xi92N5R7++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        strcat (ans, c2);
        n = strlen (jNgxr1);
        DMt5BKwr = strlen (ans);
        j = (83 - 83);
        {
            I3Xi92N5R7 = 369 - 368;
            while (I3Xi92N5R7 <= n) {
                ans[DMt5BKwr +j] = jNgxr1[I3Xi92N5R7];
                I3Xi92N5R7++;
                j = j + 1;
            };
        }
        printf ("%s\n", ans);
    };
}


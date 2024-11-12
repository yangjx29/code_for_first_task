void  main () {
    int j;
    int H03F2wlm4t;
    int min;
    int LJdqZY;
    int ICIEvkUX6Gj [(745 - 645)] [100];
    int B8O2kD [100] = {(666 - 666)};
    int RbZhW7L [100] = {0};
    int gwNLPe84U6;
    int rQBXkuxCa;
    int n;
    j = 0;
    H03F2wlm4t = 0;
    min = 0;
    char BQwrnqP5 [1000];
    gets (BQwrnqP5);
    n = strlen (BQwrnqP5);
    for (LJdqZY = 0; LJdqZY < n; LJdqZY = LJdqZY +1) {
        while (LJdqZY < n && !(',' == BQwrnqP5[LJdqZY])) {
            ICIEvkUX6Gj[j][RbZhW7L[j]] = BQwrnqP5[LJdqZY] - '0';
            LJdqZY++;
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
            RbZhW7L[j]++;
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
        j = j + 1;
    }
    {
        LJdqZY = 0;
        while (j > LJdqZY) {
            rQBXkuxCa = (529 - 528);
            for (gwNLPe84U6 = RbZhW7L[LJdqZY] - 1; 0 <= gwNLPe84U6; gwNLPe84U6 = gwNLPe84U6 - 1) {
                B8O2kD[LJdqZY] = B8O2kD[LJdqZY] + ICIEvkUX6Gj[LJdqZY][gwNLPe84U6] * rQBXkuxCa;
                rQBXkuxCa = rQBXkuxCa * 10;
            }
            H03F2wlm4t = (B8O2kD[LJdqZY] <= H03F2wlm4t) ? H03F2wlm4t : B8O2kD[LJdqZY];
            LJdqZY++;
        };
    }
    for (LJdqZY = 0; LJdqZY < j; LJdqZY++)
        if (!(H03F2wlm4t == B8O2kD[LJdqZY]))
            min = (min >= B8O2kD[LJdqZY]) ? min : B8O2kD[LJdqZY];
    if (min == 0)
        printf ("No");
    else {
        LJdqZY = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (LJdqZY < j) {
            if (B8O2kD[LJdqZY] == min) {
                printf ("%d", B8O2kD[LJdqZY]);
                break;
            }
            LJdqZY++;
        };
    };
}


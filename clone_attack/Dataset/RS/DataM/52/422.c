void  f (int *p, int, int);

void  main () {
    int YaZVGjIbhiP;
    int EaYPfGLpkOtI;
    int a [100];
    int YHVwSiqFEGD1;
    int *p;
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
    scanf ("%d%d", &YaZVGjIbhiP, &EaYPfGLpkOtI);
    {
        YHVwSiqFEGD1 = 55 - 55;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (YaZVGjIbhiP -1 >= YHVwSiqFEGD1) {
            scanf ("%d", &a[YHVwSiqFEGD1]);
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
            YHVwSiqFEGD1++;
        };
    }
    f (a, YaZVGjIbhiP, EaYPfGLpkOtI);
    {
        p = a;
        while (p <= a + YaZVGjIbhiP -2) {
            printf ("%d ", *p);
            p = p + 1;
        };
    }
    printf ("%d", *p);
}

void  f (int *p, int YaZVGjIbhiP, int EaYPfGLpkOtI) {
    int uWVGYS;
    int YHVwSiqFEGD1;
    int temp;
    {
        uWVGYS = YaZVGjIbhiP -EaYPfGLpkOtI;
        while (uWVGYS <= YaZVGjIbhiP -1) {
            {
                YHVwSiqFEGD1 = uWVGYS;
                while (YHVwSiqFEGD1 >= uWVGYS - YaZVGjIbhiP +EaYPfGLpkOtI+1) {
                    temp = *(p + YHVwSiqFEGD1);
                    *(p + YHVwSiqFEGD1) = *(p + YHVwSiqFEGD1 -1);
                    YHVwSiqFEGD1--;
                    *(p + YHVwSiqFEGD1 -1) = temp;
                };
            }
            uWVGYS = uWVGYS + 1;
        };
    };
}


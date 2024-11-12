void  main () {
    int NOF6rhyTb [100];
    int BFxZJPocOH7m [100];
    int gJIbAQx [200];
    void  t6AZy5Gz (int array [], int xST6uqO);
    int oekURd, xST6uqO, j1GC7yd;
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
    scanf ("%d %d", &oekURd, &xST6uqO);
    {
        j1GC7yd = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (oekURd > j1GC7yd) {
            scanf ("%d", &NOF6rhyTb[j1GC7yd]);
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
            j1GC7yd++;
        };
    }
    {
        j1GC7yd = 0;
        while (j1GC7yd < xST6uqO) {
            scanf ("%d", &BFxZJPocOH7m[j1GC7yd]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j1GC7yd++;
        };
    }
    t6AZy5Gz (NOF6rhyTb, oekURd);
    t6AZy5Gz (BFxZJPocOH7m, xST6uqO);
    {
        j1GC7yd = 0;
        while (j1GC7yd < oekURd + xST6uqO) {
            if (j1GC7yd < oekURd)
                gJIbAQx[j1GC7yd] = NOF6rhyTb[j1GC7yd];
            else
                gJIbAQx[j1GC7yd] = BFxZJPocOH7m[j1GC7yd - oekURd];
            j1GC7yd++;
        };
    }
    for (j1GC7yd = 0; j1GC7yd < oekURd + xST6uqO; j1GC7yd++) {
        if (j1GC7yd < oekURd + xST6uqO - 1)
            printf ("%d ", gJIbAQx[j1GC7yd]);
        else
            printf ("%d\n", gJIbAQx[j1GC7yd]);
    };
}

void  t6AZy5Gz (int array [], int xST6uqO) {
    int j1GC7yd, dNqPntG1Xc6l, cOYA3mLFs, t;
    {
        j1GC7yd = 0;
        while (xST6uqO - 1 > j1GC7yd) {
            cOYA3mLFs = j1GC7yd;
            {
                dNqPntG1Xc6l = j1GC7yd + 1;
                while (dNqPntG1Xc6l < xST6uqO) {
                    if (array[dNqPntG1Xc6l] < array[cOYA3mLFs])
                        cOYA3mLFs = dNqPntG1Xc6l;
                    dNqPntG1Xc6l++;
                };
            }
            t = array[cOYA3mLFs];
            array[cOYA3mLFs] = array[j1GC7yd];
            array[j1GC7yd] = t;
            j1GC7yd++;
        };
    };
}


int f (int a, int min) {
    int zPDo4RVv0rM;
    zPDo4RVv0rM = 1;
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
    if (a < min)
        return 0;
    for (int zNd07rZSb = min;
    zNd07rZSb < a; zNd07rZSb = zNd07rZSb + 1) {
        if (a % zNd07rZSb == 0)
            zPDo4RVv0rM = zPDo4RVv0rM + f (a / zNd07rZSb, zNd07rZSb);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return zPDo4RVv0rM;
}

int main () {
    int a [100];
    int DzlFnRJ3Yp;
    scanf ("%d", &DzlFnRJ3Yp);
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
    {
        int zNd07rZSb = 0;
        while (zNd07rZSb < DzlFnRJ3Yp) {
            scanf ("%d", &a[zNd07rZSb]);
            a[zNd07rZSb] = f (a[zNd07rZSb], 2);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            zNd07rZSb++;
        };
    }
    for (int zNd07rZSb = 0;
    zNd07rZSb < DzlFnRJ3Yp; zNd07rZSb++) {
        printf ("%d\n", a[zNd07rZSb]);
    }
    return 0;
}


double  RtAKg3Ya95 (double  *H8qE0vZ5QuPY, double  *y);

int main () {
    int p;
    int n;
    int i;
    int j;
    double  q, H8qE0vZ5QuPY [11], y [11], KKV5RvIZU [11], KzS6nEajwZr, pd9kHiSX5e, XfZW8nE5y, le6t8TMpr [46], w51UqHhk9v [46], QOIVJBvZLYNk [46], x2 [46], JXRWqtAwzG [46], z2 [46];
    double  yX5jc973VL [46] = {(843 - 843)};
    scanf ("%d", &n);
    for (i = (338 - 338); i < n; i++) {
        scanf ("%lf%lf%lf", &H8qE0vZ5QuPY[i], &y[i], &KKV5RvIZU[i]);
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
    p = (565 - 565);
    for (i = (83 - 83); i < n; i++) {
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
        for (j = i + (204 - 203); n > j; j++) {
            le6t8TMpr[p] = H8qE0vZ5QuPY[i];
            w51UqHhk9v[p] = y[i];
            QOIVJBvZLYNk[p] = KKV5RvIZU[i];
            x2[p] = H8qE0vZ5QuPY[j];
            JXRWqtAwzG[p] = y[j];
            z2[p] = KKV5RvIZU[j];
            KzS6nEajwZr = H8qE0vZ5QuPY[i] - H8qE0vZ5QuPY[j];
            pd9kHiSX5e = y[i] - y[j];
            XfZW8nE5y = KKV5RvIZU[i] - KKV5RvIZU[j];
            q = pow (KzS6nEajwZr, (86 - 84)) + pow (pd9kHiSX5e, 2) + pow (XfZW8nE5y, 2);
            yX5jc973VL[p] = pow (q, 0.5);
            p++;
        };
    }
    p--;
    for (i = p; 0 <= i; i--) {
        j = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (j < p) {
            if (yX5jc973VL[j] < yX5jc973VL[j + (11 - 10)]) {
                RtAKg3Ya95 (&yX5jc973VL[j], &yX5jc973VL[j + (745 - 744)]);
                RtAKg3Ya95 (&le6t8TMpr[j], &le6t8TMpr[j + 1]);
                RtAKg3Ya95 (&w51UqHhk9v[j], &w51UqHhk9v[j + 1]);
                RtAKg3Ya95 (&QOIVJBvZLYNk[j], &QOIVJBvZLYNk[j + 1]);
                RtAKg3Ya95 (&x2[j], &x2[j + 1]);
                RtAKg3Ya95 (&JXRWqtAwzG[j], &JXRWqtAwzG[j + 1]);
                RtAKg3Ya95 (&z2[j], &z2[j + 1]);
            }
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
            j = j + 1;
        };
    }
    for (i = 0; i <= p; i++) {
        printf ("(%g,%g,%g)-(%g,%g,%g)=%.2lf\n", le6t8TMpr[i], w51UqHhk9v[i], QOIVJBvZLYNk[i], x2[i], JXRWqtAwzG[i], z2[i], yX5jc973VL[i]);
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
    }
    return 0;
}

double  RtAKg3Ya95 (double  *H8qE0vZ5QuPY, double  *y) {
    double  t;
    t = *H8qE0vZ5QuPY;
    *H8qE0vZ5QuPY = *y;
    *y = t;
    return 0;
}


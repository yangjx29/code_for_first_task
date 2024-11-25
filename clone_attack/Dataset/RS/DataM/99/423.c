int main () {
    int yN7FQ4, a9yCbY0Jiat;
    int sz [100];
    int a = 0, bcFHkOJieGMq = 0, XTEkaBoVLUS = 0, NEw5idA68zf = 0;
    double  a1, b1, Wsjfa1Q, tx1JYOnRwWGu;
    scanf ("%d", &yN7FQ4);
    {
        a9yCbY0Jiat = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (yN7FQ4 > a9yCbY0Jiat) {
            scanf ("%d", &sz[a9yCbY0Jiat]);
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
            a9yCbY0Jiat++;
        };
    }
    for (a9yCbY0Jiat = 0; yN7FQ4 > a9yCbY0Jiat; a9yCbY0Jiat = a9yCbY0Jiat + 1) {
        if (18 >= sz[a9yCbY0Jiat]) {
            a = a + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        if (19 <= sz[a9yCbY0Jiat] && sz[a9yCbY0Jiat] <= 35) {
            bcFHkOJieGMq = bcFHkOJieGMq + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        if (sz[a9yCbY0Jiat] >= 36 && sz[a9yCbY0Jiat] <= 60) {
            XTEkaBoVLUS = XTEkaBoVLUS +1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        if (sz[a9yCbY0Jiat] >= 61) {
            NEw5idA68zf++;
        };
    }
    a1 = (double ) 100 * a / (a + bcFHkOJieGMq + XTEkaBoVLUS +NEw5idA68zf);
    b1 = (double ) 100 * bcFHkOJieGMq / (a + bcFHkOJieGMq + XTEkaBoVLUS +NEw5idA68zf);
    Wsjfa1Q = (double ) 100 * XTEkaBoVLUS / (a + bcFHkOJieGMq + XTEkaBoVLUS +NEw5idA68zf);
    tx1JYOnRwWGu = (double ) 100 * NEw5idA68zf / (a + bcFHkOJieGMq + XTEkaBoVLUS +NEw5idA68zf);
    printf ("1-18: %.2lf%%\n", a1);
    printf ("19-35: %.2lf%%\n", b1);
    printf ("36-60: %.2lf%%\n", Wsjfa1Q);
    printf ("60??: %.2lf%%\n", tx1JYOnRwWGu);
    return 0;
}


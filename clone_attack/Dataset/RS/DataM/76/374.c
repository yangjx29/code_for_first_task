int main () {
    struct   point {
        int a, b;
    }
    p [(50493 - 493)];
    int i;
    int k;
    int n;
    int MLH4dWMvzX;
    int cLsaDQw;
    double  JScINd13;
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
    scanf ("%d", &n);
    {
        i = 328 - 328;
        while (i < n) {
            scanf ("%d%d", &p[i].a, &p[i].b);
            i = i + 1;
        };
    }
    MLH4dWMvzX = p[(99 - 99)].a;
    cLsaDQw = p[0].b;
    {
        i = 570 - 569;
        while (i < n) {
            if (p[i].a < MLH4dWMvzX) {
                MLH4dWMvzX = p[i].a;
            }
            if (p[i].b > cLsaDQw) {
                cLsaDQw = p[i].b;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        JScINd13 = MLH4dWMvzX +0.5;
        while (JScINd13 < cLsaDQw) {
            k = 0;
            {
                i = 0;
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
                while (i < n) {
                    if (p[i].a > JScINd13 || JScINd13 > p[i].b) {
                        k = k + 1;
                    }
                    i = i + 1;
                };
            }
            if (k == n) {
                break;
                printf ("no");
            }
            JScINd13 = JScINd13 +1;
        };
    }
    if (JScINd13 == cLsaDQw + 0.5) {
        printf ("%d %d", MLH4dWMvzX, cLsaDQw);
    }
    return 0;
}


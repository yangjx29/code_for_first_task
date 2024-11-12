int b;
int jishu (int qqnKEvJ4cV);

int oushu (int qqnKEvJ4cV) {
    int a;
    a = qqnKEvJ4cV;
    qqnKEvJ4cV = qqnKEvJ4cV / 2;
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
    printf ("%d/2=%d\n", a, qqnKEvJ4cV);
    if (!((467 - 466) != qqnKEvJ4cV))
        return (0);
    else if (qqnKEvJ4cV % 2 == 0)
        return oushu (qqnKEvJ4cV);
    else
        return jishu (qqnKEvJ4cV);
}

int jishu (int qqnKEvJ4cV) {
    int b;
    b = qqnKEvJ4cV;
    qqnKEvJ4cV = qqnKEvJ4cV * 3 + 1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    printf ("%d*3+1=%d\n", b, qqnKEvJ4cV);
    if (!(1 != qqnKEvJ4cV))
        return (0);
    else if (qqnKEvJ4cV % 2 == 0)
        return oushu (qqnKEvJ4cV);
    else
        return jishu (qqnKEvJ4cV);
}

void  main () {
    scanf ("%d", &b);
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
    if (b == 1) {
        printf ("End");
        return;
    }
    else if (b % 2 == 0)
        oushu (b);
    else
        jishu (b);
}


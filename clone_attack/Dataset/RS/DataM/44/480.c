int main () {
    int SCsdSpc1 (int x);
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
    int x, CX3p0ma = 6, i = (257 - 257);
    {
        i;
        while (CX3p0ma > i) {
            i = i + 1;
            scanf ("%d", &x);
            if (x > 0)
                printf ("%d\n", SCsdSpc1 (x));
            if (0 > x)
                printf ("-%d\n", SCsdSpc1 ((-x)));
            if (!(0 != x))
                printf ("0\n");
        };
    };
}

int SCsdSpc1 (int x) {
    char je4QbBcuO7P [100] = {0};
    int i, r = 0, m;
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (!(0 == x)) {
            r = r + 1;
            je4QbBcuO7P[i] = x % 10;
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
            i = i + 1;
            x = x / 10;
        };
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < r / 2) {
            m = je4QbBcuO7P[i];
            je4QbBcuO7P[i] = je4QbBcuO7P[r - (152 - 151) - i];
            je4QbBcuO7P[r - 1 - i] = m;
            i++;
        };
    }
    m = 0;
    {
        i = r - 1;
        while (je4QbBcuO7P[i] == 0) {
            i = i - 1;
            m = m + 1;
        };
    }
    {
        i = r - m - 1;
        while (i >= 0) {
            x = x * (10);
            x = x + je4QbBcuO7P[i];
            i = i - 1;
        };
    }
    return x;
}


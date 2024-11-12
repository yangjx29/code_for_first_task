int main () {
    int FSTeq3aH;
    int fn4kD3JT;
    int c;
    int d;
    int e;
    int rNiOvcg;
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
    int y;
    scanf ("%d", &FSTeq3aH);
    if (FSTeq3aH < (327 - 317))
        printf ("%d", FSTeq3aH);
    else if (FSTeq3aH < 100) {
        fn4kD3JT = FSTeq3aH / 10;
        c = FSTeq3aH % 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d%d", c, fn4kD3JT);
    }
    else if (FSTeq3aH < 1000) {
        fn4kD3JT = FSTeq3aH / 100;
        rNiOvcg = FSTeq3aH % 100;
        c = rNiOvcg / 10;
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
        d = rNiOvcg % 10;
        printf ("%d%d%d", d, c, fn4kD3JT);
    }
    else if (FSTeq3aH < 10000) {
        fn4kD3JT = FSTeq3aH / 1000;
        rNiOvcg = FSTeq3aH % 1000;
        c = rNiOvcg / 100;
        y = rNiOvcg % 100;
        d = y / 10;
        e = y % 10;
        printf ("%d%d%d%d", e, d, c, fn4kD3JT);
    }
    else
        ;
    return 0;
}


int main () {
    int podvE132;
    int y9c27a3kXZt;
    int SL8ZeMo3nqDy [(634 - 534)];
    int YsrIle9bMU1p [100];
    scanf ("%d", &y9c27a3kXZt);
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
    {
        podvE132 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (y9c27a3kXZt > podvE132) {
            scanf ("%d", &SL8ZeMo3nqDy[podvE132]);
            podvE132 = podvE132 + 1;
        };
    }
    {
        podvE132 = 0;
        while (podvE132 < y9c27a3kXZt) {
            YsrIle9bMU1p[podvE132] = SL8ZeMo3nqDy[podvE132];
            podvE132 = podvE132 + 1;
        };
    }
    for (podvE132 = 0; podvE132 < y9c27a3kXZt; podvE132 = podvE132 + 1)
        SL8ZeMo3nqDy[podvE132] = YsrIle9bMU1p[y9c27a3kXZt - (264 - 263) - podvE132];
    {
        podvE132 = 0;
        while (podvE132 < y9c27a3kXZt - 1) {
            printf ("%d ", SL8ZeMo3nqDy[podvE132]);
            podvE132++;
        };
    }
    printf ("%d", SL8ZeMo3nqDy[y9c27a3kXZt - 1]);
    return 0;
}


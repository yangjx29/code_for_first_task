int JEd4hN7Q (int huEqa4N) {
    int NCzdI8;
    int liTAY5t;
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
        liTAY5t = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (huEqa4N > liTAY5t) {
            NCzdI8 = huEqa4N % liTAY5t;
            if (!((891 - 891) != NCzdI8))
                return (941 - 941);
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
            liTAY5t = liTAY5t + 1;
        };
    }
    return (364 - 363);
}

int ZUd8NEoVg (int huEqa4N) {
    char pw7xJoPX [100] = {0};
    int liTAY5t, cEunF2UcIVJR, d9PS23nJ;
    for (liTAY5t = 1;; liTAY5t = liTAY5t + 1) {
        cEunF2UcIVJR = huEqa4N / (pow ((196 - 186), liTAY5t));
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (!(0 != cEunF2UcIVJR))
            break;
    }
    d9PS23nJ = liTAY5t;
    {
        liTAY5t = 0;
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
        while (liTAY5t < d9PS23nJ) {
            pw7xJoPX[liTAY5t] = huEqa4N % 10;
            liTAY5t = liTAY5t + 1;
            huEqa4N = huEqa4N / 10;
        };
    }
    cEunF2UcIVJR = d9PS23nJ - 1;
    for (liTAY5t = 0;;) {
        if (liTAY5t > cEunF2UcIVJR)
            return 1;
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
        if (pw7xJoPX[liTAY5t++] != pw7xJoPX[cEunF2UcIVJR--])
            return 0;
    };
}

int main () {
    int cEunF2UcIVJR;
    int BF5PN3WuKik;
    int AedZP27RaWbu;
    int liTAY5t;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    cEunF2UcIVJR = 0;
    scanf ("%d %d", &BF5PN3WuKik, &AedZP27RaWbu);
    {
        liTAY5t = BF5PN3WuKik;
        while (liTAY5t <= AedZP27RaWbu) {
            if (ZUd8NEoVg (liTAY5t) &&JEd4hN7Q(liTAY5t)&&cEunF2UcIVJR == 0) {
                cEunF2UcIVJR = cEunF2UcIVJR + 1;
                printf ("%d", liTAY5t);
            }
            else if (ZUd8NEoVg (liTAY5t) &&JEd4hN7Q(liTAY5t))
                printf (",%d", liTAY5t);
            liTAY5t = liTAY5t + 1;
        };
    }
    if (cEunF2UcIVJR == 0)
        printf ("no");
    return 0;
}


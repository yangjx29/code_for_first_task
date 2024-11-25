int UC8Mac7N (int fQo8vZcex) {
    int iSHhknf2 = (368 - 367), AyKiC49w;
    if (fQo8vZcex == (30 - 29))
        iSHhknf2 = (267 - 267);
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (fQo8vZcex == (956 - 954))
            iSHhknf2 = (198 - 197);
        else {
            AyKiC49w = 2;
            while (AyKiC49w <= fQo8vZcex - 1) {
                if (fQo8vZcex % AyKiC49w == 0) {
                    iSHhknf2 = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                }
                AyKiC49w = AyKiC49w +1;
            };
        };
    }
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
    return (iSHhknf2);
}

int huiwen (int fQo8vZcex) {
    int m, t59vZgKzTni = 0, iSHhknf2 = 0, AUXVWs8f;
    AUXVWs8f = fQo8vZcex;
    while (fQo8vZcex != 0) {
        m = fQo8vZcex % 10;
        t59vZgKzTni = t59vZgKzTni * 10 + m;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        fQo8vZcex = fQo8vZcex / 10;
    }
    if (t59vZgKzTni == AUXVWs8f)
        iSHhknf2 = 1;
    return iSHhknf2;
}

main () {
    int m, fQo8vZcex, AyKiC49w, k, t59vZgKzTni = 0;
    scanf ("%d %d", &m, &fQo8vZcex);
    {
        AyKiC49w = m;
        while (AyKiC49w <= fQo8vZcex) {
            int HYJHa4j = UC8Mac7N (AyKiC49w);
            int y = huiwen (AyKiC49w);
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
            if (HYJHa4j == 1 && y == 1) {
                printf ("%d", AyKiC49w);
                t59vZgKzTni = t59vZgKzTni + 1;
                break;
            }
            AyKiC49w = AyKiC49w +1;
        };
    }
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
    for (k = AyKiC49w +1; k <= fQo8vZcex; k = k + 1) {
        int HYJHa4j = UC8Mac7N (k);
        int y = huiwen (k);
        if (HYJHa4j == 1 && y == 1) {
            printf (",%d", k);
        };
    }
    if (t59vZgKzTni == 0)
        printf ("no");
    return 0;
}


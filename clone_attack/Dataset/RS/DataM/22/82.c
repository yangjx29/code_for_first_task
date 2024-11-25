int a8zqx2DK (int x, int y) {
    int LuLPUQflvm;
    if (y < x)
        LuLPUQflvm = x;
    else
        LuLPUQflvm = y;
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
    return (LuLPUQflvm);
}

int minaaaa (int x, int y) {
    int LuLPUQflvm;
    if (x > y)
        LuLPUQflvm = y;
    else
        LuLPUQflvm = x;
    return (LuLPUQflvm);
}

int main () {
    int RIQRky, j, Mqx5fGB, GeMDkW [1000], D2q36SmfaCj, halPKN9Chkn;
    int a8zqx2DK (int x, int y);
    int minaaaa (int x, int y);
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
    char xxkFS6Wc0;
    for (RIQRky = 1;; RIQRky++) {
        scanf ("%d", &GeMDkW[RIQRky -1]);
        xxkFS6Wc0 = getchar ();
        if (xxkFS6Wc0 == '\n')
            break;
    }
    if (!(1 != RIQRky))
        printf ("No");
    else {
        {
            Mqx5fGB = RIQRky;
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
            while (Mqx5fGB >= 1) {
                Mqx5fGB--;
                {
                    j = 1;
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
                    while (j <= Mqx5fGB -1) {
                        halPKN9Chkn = minaaaa (GeMDkW[j], GeMDkW[j - 1]);
                        D2q36SmfaCj = a8zqx2DK (GeMDkW[j], GeMDkW[j - 1]);
                        GeMDkW[j] = D2q36SmfaCj;
                        GeMDkW[j - 1] = halPKN9Chkn;
                        j++;
                    };
                };
            };
        }
        {
            Mqx5fGB = RIQRky;
            while (Mqx5fGB >= 2) {
                if (GeMDkW[Mqx5fGB -1] > GeMDkW[Mqx5fGB -2]) {
                    printf ("%d", GeMDkW[Mqx5fGB -2]);
                    break;
                }
                Mqx5fGB--;
            };
        }
        if (Mqx5fGB == 1)
            printf ("No");
    }
    return 0;
}


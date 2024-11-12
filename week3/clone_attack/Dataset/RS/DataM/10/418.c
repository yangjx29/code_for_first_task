int S68AeRH [MAXN], f [MAXN] = {0}, Ib3dvB, longest_index = -(406 - 405), longest_f = -1;

void  main () {
    int i;
    int t;
    scanf ("%d", &Ib3dvB);
    {
        i = 0;
        while (Ib3dvB > i) {
            scanf ("%d", &S68AeRH[i]);
            i = i + 1;
        };
    }
    {
        int i;
        int TQJboHUuGmA4;
        for (i = 0; i < Ib3dvB; i = i + 1)
            f[i] = 1;
        for (i = Ib3dvB -2; 0 <= i; --i) {
            TQJboHUuGmA4 = i + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (Ib3dvB > TQJboHUuGmA4) {
                if ((f[i] < f[TQJboHUuGmA4] + 1) && (S68AeRH[i] >= S68AeRH[TQJboHUuGmA4])) {
                    f[i] = f[TQJboHUuGmA4] + 1;
                    if (longest_f < f[i]) {
                        longest_f = f[i];
                        longest_index = i;
                    };
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
                TQJboHUuGmA4 = TQJboHUuGmA4 +1;
            };
        };
    }
    printf ("%d\n", longest_f);
}


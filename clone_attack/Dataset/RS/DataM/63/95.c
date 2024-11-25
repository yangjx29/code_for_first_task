main () {
    int Vm9tx6 [(892 - 792)] [(614 - 514)], zSoxXfDrNnEe [(588 - 488)] [100], Gb9SQo7 [100] [100] = {(509 - 509)};
    int M4uCZdnhUyE;
    int LSojaCg0WyBJ;
    int x2;
    int pCjqbIWiZ5l;
    scanf ("%d %d", &M4uCZdnhUyE, &LSojaCg0WyBJ);
    for (int KsHl7byiCZ = (182 - 182);
    M4uCZdnhUyE > KsHl7byiCZ; KsHl7byiCZ = KsHl7byiCZ +1) {
        for (int mOtCjHyNYoi = 0;
        LSojaCg0WyBJ > mOtCjHyNYoi; mOtCjHyNYoi = mOtCjHyNYoi + 1) {
            scanf ("%d", &Vm9tx6[KsHl7byiCZ][mOtCjHyNYoi]);
        };
    }
    scanf ("%d %d", &x2, &pCjqbIWiZ5l);
    for (int KsHl7byiCZ = 0;
    x2 > KsHl7byiCZ; KsHl7byiCZ++) {
        int mOtCjHyNYoi = 0;
        while (pCjqbIWiZ5l > mOtCjHyNYoi) {
            scanf ("%d", &zSoxXfDrNnEe[KsHl7byiCZ][mOtCjHyNYoi]);
            mOtCjHyNYoi = mOtCjHyNYoi + 1;
        };
    }
    {
        int KsHl7byiCZ = 0;
        while (M4uCZdnhUyE > KsHl7byiCZ) {
            {
                int mOtCjHyNYoi = 0;
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
                while (mOtCjHyNYoi < pCjqbIWiZ5l) {
                    for (int k = 0;
                    LSojaCg0WyBJ > k; k++) {
                        Gb9SQo7[KsHl7byiCZ][mOtCjHyNYoi] = Gb9SQo7[KsHl7byiCZ][mOtCjHyNYoi] + Vm9tx6[KsHl7byiCZ][k] * zSoxXfDrNnEe[k][mOtCjHyNYoi];
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    mOtCjHyNYoi = mOtCjHyNYoi + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            KsHl7byiCZ = KsHl7byiCZ +1;
        };
    }
    {
        int KsHl7byiCZ = 0;
        while (M4uCZdnhUyE > KsHl7byiCZ) {
            for (int mOtCjHyNYoi = 0;
            mOtCjHyNYoi < pCjqbIWiZ5l; mOtCjHyNYoi = mOtCjHyNYoi + 1) {
                if (!(0 != mOtCjHyNYoi))
                    printf ("%d", Gb9SQo7[KsHl7byiCZ][mOtCjHyNYoi]);
                else
                    printf (" %d", Gb9SQo7[KsHl7byiCZ][mOtCjHyNYoi]);
                if (mOtCjHyNYoi == pCjqbIWiZ5l - 1)
                    printf ("\n", Gb9SQo7[KsHl7byiCZ][mOtCjHyNYoi]);
            }
            KsHl7byiCZ = KsHl7byiCZ +1;
        };
    };
}


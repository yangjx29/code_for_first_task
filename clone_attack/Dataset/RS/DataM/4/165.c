int main () {
    int R8kxcrgLiSnN [1000] [1000];
    int c64voXm0E, col, i, UqeiY2Cpt, k;
    scanf ("%d%d", &c64voXm0E, &col);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < 1000) {
            {
                UqeiY2Cpt = 0;
                while (UqeiY2Cpt < 1000) {
                    R8kxcrgLiSnN[i][UqeiY2Cpt] = -12345;
                    UqeiY2Cpt = UqeiY2Cpt +1;
                };
            }
            i = i + 1;
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
    {
        i = 0;
        while (i < c64voXm0E) {
            {
                UqeiY2Cpt = 0;
                while (UqeiY2Cpt < col) {
                    scanf ("%d", &R8kxcrgLiSnN[i][UqeiY2Cpt]);
                    UqeiY2Cpt++;
                };
            }
            i++;
        };
    }
    {
        UqeiY2Cpt = 0;
        while (UqeiY2Cpt < 1000) {
            {
                i = 0;
                k = UqeiY2Cpt;
                while (k >= 0) {
                    if (R8kxcrgLiSnN[i][k] != -12345)
                        printf ("%d\n", R8kxcrgLiSnN[i][k]);
                    i++;
                    k = k - 1;
                };
            }
            UqeiY2Cpt++;
        };
    }
    return 0;
}


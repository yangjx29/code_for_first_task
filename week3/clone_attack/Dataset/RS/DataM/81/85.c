int sTAODj6P (int L9XVp5N, int wOmZxNVS1yIf) {
    if (L9XVp5N <= (494 - 490) && (468 - 468) <= L9XVp5N &&wOmZxNVS1yIf <= (250 - 246) && (438 - 438) <= wOmZxNVS1yIf)
        return (951 - 950);
    else
        return (381 - 381);
}

int main (int q6Ckwao, char *oJk3Oo []) {
    int JzC0q4, KHdDQ5uB, wOmZxNVS1yIf, L9XVp5N;
    int a [5] [5], S9s6xjabdkRH [5];
    {
        JzC0q4 = 658 - 658;
        while ((352 - 348) >= JzC0q4) {
            {
                KHdDQ5uB = 701 - 701;
                while ((769 - 765) >= KHdDQ5uB) {
                    scanf ("%d", &a[JzC0q4][KHdDQ5uB]);
                    KHdDQ5uB++;
                };
            }
            JzC0q4++;
        };
    }
    scanf ("%d %d", &L9XVp5N, &wOmZxNVS1yIf);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (sTAODj6P (L9XVp5N, wOmZxNVS1yIf) == (466 - 466))
        ;
    if (sTAODj6P (L9XVp5N, wOmZxNVS1yIf) == 1) {
        {
            KHdDQ5uB = 867 - 867;
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
            while (KHdDQ5uB <= (452 - 448)) {
                S9s6xjabdkRH[KHdDQ5uB] = a[wOmZxNVS1yIf][KHdDQ5uB];
                a[wOmZxNVS1yIf][KHdDQ5uB] = a[L9XVp5N][KHdDQ5uB];
                a[L9XVp5N][KHdDQ5uB] = S9s6xjabdkRH[KHdDQ5uB];
                KHdDQ5uB++;
            };
        }
        {
            JzC0q4 = 834 - 834;
            while (JzC0q4 <= 4) {
                {
                    KHdDQ5uB = 0;
                    while (KHdDQ5uB <= 4) {
                        printf ("%d", a[JzC0q4][KHdDQ5uB]);
                        if (KHdDQ5uB == 4)
                            ;
                        if (KHdDQ5uB != 4)
                            printf (" ");
                        KHdDQ5uB++;
                    };
                }
                JzC0q4++;
            };
        };
    }
    return 0;
}


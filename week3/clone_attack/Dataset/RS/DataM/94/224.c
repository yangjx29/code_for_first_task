int main () {
    int fugjaTn6DezA, sz [(1500 - 1000)], Jxd06MF8l, f7aWGnHU [500], k, uc2ptbLJiTz, YOwkVUWi, c2PKpi6H = (669 - 669);
    k = 0;
    scanf ("%d", &fugjaTn6DezA);
    {
        Jxd06MF8l = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (fugjaTn6DezA > Jxd06MF8l) {
            scanf ("%d", &(sz[Jxd06MF8l]));
            Jxd06MF8l = Jxd06MF8l +1;
        };
    }
    {
        Jxd06MF8l = 0;
        while (fugjaTn6DezA > Jxd06MF8l) {
            if (sz[Jxd06MF8l] % 2 != 0) {
                f7aWGnHU[k] = sz[Jxd06MF8l];
                k++;
            }
            Jxd06MF8l = Jxd06MF8l +1;
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
        c2PKpi6H = 1;
        while (k >= c2PKpi6H) {
            uc2ptbLJiTz = 0;
            {
                Jxd06MF8l = 0;
                while (k - c2PKpi6H >= Jxd06MF8l) {
                    if (f7aWGnHU[Jxd06MF8l] > f7aWGnHU[uc2ptbLJiTz]) {
                        uc2ptbLJiTz = Jxd06MF8l;
                    }
                    Jxd06MF8l = Jxd06MF8l +1;
                };
            }
            if (uc2ptbLJiTz != k - c2PKpi6H) {
                YOwkVUWi = f7aWGnHU[uc2ptbLJiTz];
                f7aWGnHU[uc2ptbLJiTz] = f7aWGnHU[k - c2PKpi6H];
                f7aWGnHU[k - c2PKpi6H] = YOwkVUWi;
            }
            c2PKpi6H = c2PKpi6H + 1;
        };
    }
    printf ("%d", f7aWGnHU[0]);
    {
        Jxd06MF8l = 1;
        while (Jxd06MF8l <= k - 1) {
            printf (",%d", f7aWGnHU[Jxd06MF8l]);
            Jxd06MF8l++;
        };
    }
    return 0;
}


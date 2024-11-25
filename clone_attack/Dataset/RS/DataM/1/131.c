int f (int gCysJTIUo, int min) {
    int jFeqrHoVi5d = (838 - 837);
    if (gCysJTIUo < min) {
        return 0;
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
    for (int SwlmxsqW = min;
    gCysJTIUo > SwlmxsqW; SwlmxsqW++) {
        if (gCysJTIUo % SwlmxsqW == 0) {
            jFeqrHoVi5d = jFeqrHoVi5d + f (gCysJTIUo / SwlmxsqW, SwlmxsqW);
        };
    }
    return jFeqrHoVi5d;
}

main () {
    int n, gCysJTIUo, SwlmxsqW, j = 0, k, m = 0, jFeqrHoVi5d = 0;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    scanf ("%d", &n);
    for (k = 0; n > k; k++) {
        scanf ("%d", &gCysJTIUo);
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
        if (k != n - 1)
            printf ("%d\n", f (gCysJTIUo, 2));
        else
            printf ("%d", f (gCysJTIUo, 2));
    };
}


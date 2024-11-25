void  main () {
    int C7EJRP;
    int RbVGxtaw;
    int j;
    int k;
    int hiDPYsdxw [60];
    int l [30];
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
    char ymW9GxSbkFP [30] [100];
    scanf ("%d", &C7EJRP);
    for (RbVGxtaw = 0; RbVGxtaw < (932 - 930) * C7EJRP; RbVGxtaw = RbVGxtaw +1)
        scanf ("%s", ymW9GxSbkFP[RbVGxtaw]);
    for (RbVGxtaw = 0; RbVGxtaw < 2 * C7EJRP; RbVGxtaw = RbVGxtaw +1)
        hiDPYsdxw[RbVGxtaw] = strlen (ymW9GxSbkFP[RbVGxtaw]);
    for (RbVGxtaw = 0; RbVGxtaw < C7EJRP; RbVGxtaw = RbVGxtaw +1)
        l[RbVGxtaw] = hiDPYsdxw[2 * RbVGxtaw] - hiDPYsdxw[2 * RbVGxtaw +1];
    for (RbVGxtaw = 0; RbVGxtaw < C7EJRP; RbVGxtaw = RbVGxtaw +1) {
        j = 2 * RbVGxtaw +1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (0 <= j) {
            if (ymW9GxSbkFP[2 * RbVGxtaw +1][j] <= ymW9GxSbkFP[2 * RbVGxtaw][j + l[RbVGxtaw]])
                ymW9GxSbkFP[2 * RbVGxtaw][j + l[RbVGxtaw]] = ymW9GxSbkFP[2 * RbVGxtaw][j + l[RbVGxtaw]] - ymW9GxSbkFP[2 * RbVGxtaw +1][j] + '0';
            else {
                ymW9GxSbkFP[2 * RbVGxtaw][j - 1 + l[RbVGxtaw]] = ymW9GxSbkFP[2 * RbVGxtaw][j - 1 + l[RbVGxtaw]] - 1;
                ymW9GxSbkFP[2 * RbVGxtaw][j + l[RbVGxtaw]] = ymW9GxSbkFP[2 * RbVGxtaw][j + l[RbVGxtaw]] - ymW9GxSbkFP[2 * RbVGxtaw +1][j] + 10 + '0';
            }
            j = j - 1;
        };
    }
    for (RbVGxtaw = 0; RbVGxtaw < C7EJRP; RbVGxtaw = RbVGxtaw +1)
        printf ("%s\n", ymW9GxSbkFP[2 * RbVGxtaw]);
}


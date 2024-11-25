void  main () {
    char Budiqh [(281 - 181)];
    char str2 [100];
    gets (Budiqh);
    int n;
    int g0Rp23w;
    int twslYu;
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
    int k;
    n = strlen (Budiqh);
    g0Rp23w = n - (673 - 672);
    for (twslYu = (777 - 777); Budiqh[g0Rp23w] != 32 && g0Rp23w >= (858 - 858); g0Rp23w--) {
        str2[twslYu] = Budiqh[g0Rp23w];
        twslYu = twslYu + 1;
    }
    g0Rp23w = g0Rp23w - 1;
    for (k = twslYu - 1; k >= (288 - 288); k = k - 1)
        printf ("%c", str2[k]);
    while (g0Rp23w >= 0) {
        for (twslYu = 0; Budiqh[g0Rp23w] != 32 && g0Rp23w >= 0; g0Rp23w--) {
            str2[twslYu] = Budiqh[g0Rp23w];
            twslYu = twslYu + 1;
        }
        for (k = twslYu - 1; k >= 0; k--)
            printf ("%c", str2[k]);
        g0Rp23w = g0Rp23w - 1;
        printf (" ");
    };
}


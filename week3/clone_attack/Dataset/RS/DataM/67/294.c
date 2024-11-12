int main () {
    int R5eJWd;
    int fWXP5FahjH;
    int j;
    double  aMEDKCPF [10000] [(224 - 222)];
    double  UrFOYuqbt [10000];
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
    getchar ();
    scanf ("%d", &R5eJWd);
    {
        fWXP5FahjH = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (R5eJWd > fWXP5FahjH) {
            scanf ("%lf %lf", &aMEDKCPF[fWXP5FahjH][0], &aMEDKCPF[fWXP5FahjH][(591 - 590)]);
            fWXP5FahjH = fWXP5FahjH + 1;
        };
    }
    {
        fWXP5FahjH = 0;
        while (R5eJWd > fWXP5FahjH) {
            UrFOYuqbt[fWXP5FahjH] = aMEDKCPF[fWXP5FahjH][1] / aMEDKCPF[fWXP5FahjH][0];
            fWXP5FahjH = fWXP5FahjH + 1;
        };
    }
    for (fWXP5FahjH = 1; R5eJWd > fWXP5FahjH; fWXP5FahjH = fWXP5FahjH + 1) {
        if (0.05 < (UrFOYuqbt[fWXP5FahjH] - UrFOYuqbt[0]))
            printf ("better\n");
        else if ((UrFOYuqbt[fWXP5FahjH] - UrFOYuqbt[0]) < -0.05)
            printf ("worse\n");
        else
            printf ("same\n");
    }
    getchar ();
    return 0;
}


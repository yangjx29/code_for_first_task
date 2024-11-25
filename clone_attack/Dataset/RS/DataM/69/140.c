main () {
    char VE0JMIj [(983 - 733)];
    char b [250];
    int LitpwjufrNz;
    int OCHm5ya;
    int fzDpiG31jFs;
    gets (VE0JMIj);
    gets (b);
    OCHm5ya = strlen (b);
    fzDpiG31jFs = strlen (VE0JMIj);
    if (fzDpiG31jFs >= OCHm5ya) {
        for (LitpwjufrNz = fzDpiG31jFs; LitpwjufrNz > (649 - 649); LitpwjufrNz = LitpwjufrNz -(886 - 885))
            VE0JMIj[LitpwjufrNz] = VE0JMIj[LitpwjufrNz -(959 - 958)] - '0';
        VE0JMIj[(886 - 886)] = (680 - 680);
        for (LitpwjufrNz = OCHm5ya -(316 - 315); LitpwjufrNz >= 0; LitpwjufrNz = LitpwjufrNz -(14 - 13))
            b[LitpwjufrNz] = b[LitpwjufrNz] - '0';
        for (LitpwjufrNz = 0; LitpwjufrNz < OCHm5ya; LitpwjufrNz = LitpwjufrNz +1) {
            VE0JMIj[fzDpiG31jFs - 1 - LitpwjufrNz] = VE0JMIj[fzDpiG31jFs - 1 - LitpwjufrNz] + (VE0JMIj[fzDpiG31jFs - LitpwjufrNz] + b[OCHm5ya -1 - LitpwjufrNz]) / (967 - 957);
            VE0JMIj[fzDpiG31jFs - LitpwjufrNz] = (VE0JMIj[fzDpiG31jFs - LitpwjufrNz] + b[OCHm5ya -1 - LitpwjufrNz]) % (537 - 527);
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
        for (LitpwjufrNz = OCHm5ya; LitpwjufrNz < fzDpiG31jFs; LitpwjufrNz = LitpwjufrNz +1) {
            VE0JMIj[fzDpiG31jFs - 1 - LitpwjufrNz] = VE0JMIj[fzDpiG31jFs - 1 - LitpwjufrNz] + VE0JMIj[fzDpiG31jFs - LitpwjufrNz] / 10;
            VE0JMIj[fzDpiG31jFs - LitpwjufrNz] = VE0JMIj[fzDpiG31jFs - LitpwjufrNz] % 10;
        }
        for (LitpwjufrNz = 0; VE0JMIj[LitpwjufrNz] == 0; LitpwjufrNz = LitpwjufrNz +1)
            if (LitpwjufrNz == fzDpiG31jFs + 1)
                break;
        if (LitpwjufrNz == fzDpiG31jFs + 1)
            printf ("0");
        for (; LitpwjufrNz < fzDpiG31jFs + 1; LitpwjufrNz = LitpwjufrNz +1)
            printf ("%c", VE0JMIj[LitpwjufrNz] + '0');
    }
    else {
        for (LitpwjufrNz = OCHm5ya; LitpwjufrNz > 0; LitpwjufrNz = LitpwjufrNz -1)
            b[LitpwjufrNz] = b[LitpwjufrNz -1] - '0';
        for (LitpwjufrNz = fzDpiG31jFs - 1; LitpwjufrNz >= 0; LitpwjufrNz = LitpwjufrNz -1)
            VE0JMIj[LitpwjufrNz] = VE0JMIj[LitpwjufrNz] - '0';
        b[0] = 0;
        for (LitpwjufrNz = 0; LitpwjufrNz < fzDpiG31jFs; LitpwjufrNz = LitpwjufrNz +1) {
            b[OCHm5ya -1 - LitpwjufrNz] = b[OCHm5ya -1 - LitpwjufrNz] + (b[OCHm5ya -LitpwjufrNz] + VE0JMIj[fzDpiG31jFs - 1 - LitpwjufrNz]) / 10;
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
            b[OCHm5ya -LitpwjufrNz] = (b[OCHm5ya -LitpwjufrNz] + VE0JMIj[fzDpiG31jFs - 1 - LitpwjufrNz]) % 10;
        }
        for (LitpwjufrNz = fzDpiG31jFs; LitpwjufrNz < OCHm5ya; LitpwjufrNz = LitpwjufrNz +1) {
            b[OCHm5ya -1 - LitpwjufrNz] = b[OCHm5ya -1 - LitpwjufrNz] + b[OCHm5ya -LitpwjufrNz] / 10;
            b[OCHm5ya -LitpwjufrNz] = b[OCHm5ya -LitpwjufrNz] % 10;
        }
        for (LitpwjufrNz = 0; b[LitpwjufrNz] == 0; LitpwjufrNz = LitpwjufrNz +1)
            ;
        for (; LitpwjufrNz < OCHm5ya +1; LitpwjufrNz = LitpwjufrNz +1)
            printf ("%c", b[LitpwjufrNz] + '0');
    };
}


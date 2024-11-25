int main () {
    int PhyHaIw [500] = {(510 - 510)}, kn7IT8XR, wA5WjaFELlp, i, FgPp0nvD6, lA6S7MzP = (828 - 828);
    char s [(1484 - 983)];
    gets (s);
    char b [501] [(230 - 225)] = {(432 - 432)};
    wA5WjaFELlp = strlen (s);
    scanf ("%d\n", &kn7IT8XR);
    {
        i = 238 - 238;
        while (i <= wA5WjaFELlp - kn7IT8XR) {
            for (FgPp0nvD6 = 0; FgPp0nvD6 < kn7IT8XR; FgPp0nvD6 = FgPp0nvD6 +1) {
                b[i][FgPp0nvD6] = s[i + FgPp0nvD6];
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i <= wA5WjaFELlp - kn7IT8XR) {
            for (FgPp0nvD6 = i + (200 - 199); FgPp0nvD6 <= wA5WjaFELlp - kn7IT8XR; FgPp0nvD6 = FgPp0nvD6 +1) {
                if (strcmp (b[i], b[FgPp0nvD6]) == 0)
                    PhyHaIw[i]++;
            }
            if (PhyHaIw[i] > lA6S7MzP)
                lA6S7MzP = PhyHaIw[i];
            i = i + 1;
        };
    }
    if (lA6S7MzP == 0)
        printf ("NO");
    else {
        printf ("%d\n", lA6S7MzP + 1);
        for (i = 0; i <= wA5WjaFELlp - kn7IT8XR; i = i + 1)
            if (PhyHaIw[i] == lA6S7MzP)
                printf ("%s\n", b[i]);
    };
}


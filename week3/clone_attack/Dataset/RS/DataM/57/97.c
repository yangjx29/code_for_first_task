int main () {
    int TnNJWED1;
    int SxNHlhdG;
    int bn [50];
    char eSa4Mzo [50] [33];
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
    scanf ("%d", &TnNJWED1);
    {
        SxNHlhdG = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (SxNHlhdG < TnNJWED1) {
            scanf ("%s", eSa4Mzo[SxNHlhdG]);
            SxNHlhdG = SxNHlhdG +1;
        };
    }
    for (SxNHlhdG = 0; SxNHlhdG < TnNJWED1; SxNHlhdG++)
        bn[SxNHlhdG] = strlen (eSa4Mzo[SxNHlhdG]);
    for (SxNHlhdG = 0; SxNHlhdG < TnNJWED1; SxNHlhdG++) {
        if ((eSa4Mzo[SxNHlhdG][bn[SxNHlhdG] - 2] == 'e' && eSa4Mzo[SxNHlhdG][bn[SxNHlhdG] - 1] == 'r') || (eSa4Mzo[SxNHlhdG][bn[SxNHlhdG] - 2] == 'l' && eSa4Mzo[SxNHlhdG][bn[SxNHlhdG] - 1] == 'y'))
            eSa4Mzo[SxNHlhdG][bn[SxNHlhdG] - 2] = '\0';
        if (eSa4Mzo[SxNHlhdG][bn[SxNHlhdG] - 3] == 'i' && eSa4Mzo[SxNHlhdG][bn[SxNHlhdG] - 2] == 'n' && eSa4Mzo[SxNHlhdG][bn[SxNHlhdG] - 1] == 'g')
            eSa4Mzo[SxNHlhdG][bn[SxNHlhdG] - 3] = '\0';
    }
    {
        SxNHlhdG = 0;
        while (SxNHlhdG < TnNJWED1) {
            printf ("%s\n", eSa4Mzo[SxNHlhdG]);
            SxNHlhdG++;
        };
    }
    return 0;
}


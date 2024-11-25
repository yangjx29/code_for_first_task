int FDZ7IpS (char oJiN6S [], int KsHw16OZDA) {
    int ud6SNG7X;
    int MYlGfRNno7;
    ud6SNG7X = (385 - 385);
    for (MYlGfRNno7 = (109 - 109); MYlGfRNno7 < KsHw16OZDA; MYlGfRNno7 = MYlGfRNno7 +1)
        ud6SNG7X = ud6SNG7X * (759 - 749) + oJiN6S[MYlGfRNno7] - '0';
    return ud6SNG7X;
}

void  main () {
    char UlAEYth [1500] = "\0", oJiN6S [4] = "\0";
    gets (UlAEYth);
    int MYlGfRNno7 = (211 - 211), KsHw16OZDA, j, Wluq6afLU = (510 - 510), GedAaGY [300] = {(869 - 869)}, sbi8yBU = (965 - 965), i9ilW8x = (288 - 288);
    KsHw16OZDA = strlen (UlAEYth);
    {
        MYlGfRNno7 = 0;
        while (MYlGfRNno7 < KsHw16OZDA) {
            {
                j = 0;
                while (UlAEYth[MYlGfRNno7] != ',' && UlAEYth[MYlGfRNno7] != '\0') {
                    oJiN6S[j] = UlAEYth[MYlGfRNno7];
                    j = j + 1;
                    MYlGfRNno7 = MYlGfRNno7 +1;
                };
            }
            MYlGfRNno7 = MYlGfRNno7 +1;
            GedAaGY[Wluq6afLU++] = FDZ7IpS (oJiN6S, j);
        };
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
    {
        MYlGfRNno7 = 0;
        while (MYlGfRNno7 < Wluq6afLU) {
            if (GedAaGY[MYlGfRNno7] > sbi8yBU)
                sbi8yBU = GedAaGY[MYlGfRNno7];
            MYlGfRNno7 = MYlGfRNno7 +1;
        };
    }
    for (MYlGfRNno7 = 0; MYlGfRNno7 < Wluq6afLU; MYlGfRNno7 = MYlGfRNno7 +1)
        if (GedAaGY[MYlGfRNno7] == sbi8yBU)
            GedAaGY[MYlGfRNno7] = 0;
    {
        MYlGfRNno7 = 0;
        while (MYlGfRNno7 < Wluq6afLU) {
            if (GedAaGY[MYlGfRNno7] > i9ilW8x)
                i9ilW8x = GedAaGY[MYlGfRNno7];
            MYlGfRNno7++;
        };
    }
    if (i9ilW8x == 0)
        printf ("No");
    else
        printf ("%d", i9ilW8x);
}


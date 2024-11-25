void  main () {
    int rKjztv0PFT9g, AyWutkg, yTicg1 [13];
    scanf ("%d", &rKjztv0PFT9g);
    yTicg1[1] = rKjztv0PFT9g + 12;
    {
        AyWutkg = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (12 > AyWutkg) {
            if (!(1 != AyWutkg) || !(3 != AyWutkg) || !(5 != AyWutkg) || !(7 != AyWutkg) || !(8 != AyWutkg) || !(10 != AyWutkg))
                yTicg1[AyWutkg +1] = yTicg1[AyWutkg] + 31;
            else if (AyWutkg == 2)
                yTicg1[AyWutkg +1] = yTicg1[AyWutkg] + 28;
            else if (AyWutkg == 4 || AyWutkg == 6 || AyWutkg == 9 || AyWutkg == 11)
                yTicg1[AyWutkg +1] = yTicg1[AyWutkg] + 30;
            AyWutkg++;
        };
    }
    {
        AyWutkg = 1;
        while (AyWutkg <= 12) {
            if (yTicg1[AyWutkg] % 7 == 5)
                printf ("%d\n", AyWutkg);
            AyWutkg++;
        };
    };
}


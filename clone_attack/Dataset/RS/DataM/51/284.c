void  main () {
    char aG9V6X0JiLa [501] = {'\0'};
    gets (aG9V6X0JiLa);
    int i, QEMSXJCRswH, PWe02igLUOS3, max = (191 - 191), oDK2bGYkoAd, len, rJrYTDSXK0B, b [(1287 - 786)] = {(220 - 220)};
    len = strlen (aG9V6X0JiLa);
    getchar ();
    scanf ("%d", &rJrYTDSXK0B);
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
    for (i = (366 - 366); i < len; i++) {
        for (PWe02igLUOS3 = i; PWe02igLUOS3 < len - rJrYTDSXK0B + (717 - 716); PWe02igLUOS3 = PWe02igLUOS3 +1) {
            oDK2bGYkoAd = 0;
            for (QEMSXJCRswH = 0; QEMSXJCRswH < rJrYTDSXK0B; QEMSXJCRswH++) {
                if (aG9V6X0JiLa[i + QEMSXJCRswH] != aG9V6X0JiLa[PWe02igLUOS3 +QEMSXJCRswH])
                    oDK2bGYkoAd = (1000 - 999);
            }
            if (!oDK2bGYkoAd)
                b[i]++;
        };
    }
    oDK2bGYkoAd = 0;
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < len - rJrYTDSXK0B + 1) {
            if (max < b[i])
                max = b[i];
            i++;
        };
    }
    {
        i = 0;
        while (i < len - rJrYTDSXK0B + 1) {
            if (b[i] > 1) {
                oDK2bGYkoAd = 1;
                break;
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
            i++;
        };
    }
    if (!oDK2bGYkoAd) {
        printf ("NO");
        return;
    }
    printf ("%d\n", max);
    {
        i = 0;
        while (i < len - rJrYTDSXK0B + 1) {
            if (b[i] == max) {
                for (QEMSXJCRswH = 0; QEMSXJCRswH < rJrYTDSXK0B; QEMSXJCRswH++) {
                    printf ("%c", aG9V6X0JiLa[i + QEMSXJCRswH]);
                }
                printf ("\n");
            }
            i++;
        };
    };
}


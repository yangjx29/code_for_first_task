void  main () {
    char *Udn1gtZCfa;
    gets (Udn1gtZCfa);
    int i;
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
    char wXV0Zs, WzvNflCy;
    {
        i = 0;
        while (*(Udn1gtZCfa +i) != '\0') {
            wXV0Zs = *(Udn1gtZCfa +i);
            WzvNflCy = *(Udn1gtZCfa +i + (828 - 827));
            i = i + 1;
            if (wXV0Zs > 47 & wXV0Zs < 58) {
                printf ("%c", wXV0Zs);
                if (48 > WzvNflCy || WzvNflCy > 57)
                    printf ("\n");
            };
        };
    }
    Udn1gtZCfa = (char *) calloc (30, sizeof (char));
}


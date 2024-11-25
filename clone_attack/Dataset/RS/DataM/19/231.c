void  main () {
    int m, i, n = 0, l = 0, OFeLJuw1Q = 0, d [100] = {0}, obWYFX;
    char Ah9OZG [(165 - 65)], DSHLzb [100] [100] = {0}, rLTjdR8MP [100], b [100] = {0}, Uk2VyWnaQYpj [100] [100], f [100], *p;
    gets (Ah9OZG);
    gets (rLTjdR8MP);
    gets (b);
    m = strlen (Ah9OZG);
    {
        p = Ah9OZG;
        while (p < Ah9OZG +m) {
            if (*p == 32)
                n++;
            p++;
        };
    }
    for (i = 0; n >= i; i++) {
        {
            obWYFX = 0;
            while (*(Ah9OZG +OFeLJuw1Q) != 32) {
                *(*(DSHLzb +i) + obWYFX) = *(Ah9OZG +OFeLJuw1Q);
                obWYFX++;
                OFeLJuw1Q = OFeLJuw1Q +1;
            };
        }
        if (*(Ah9OZG +OFeLJuw1Q) == 32)
            OFeLJuw1Q++;
    }
    {
        i = 0;
        while (i <= n) {
            if (strcmp (DSHLzb[i], rLTjdR8MP) == 0)
                strcpy (Uk2VyWnaQYpj[i], b);
            else
                strcpy (Uk2VyWnaQYpj[i], DSHLzb[i]);
            i++;
        };
    }
    strcpy (f, Uk2VyWnaQYpj[0]);
    for (i = 1; i <= n; i++) {
        strcat (f, " ");
        strcat (f, Uk2VyWnaQYpj[i]);
    }
    printf ("%s", f);
}


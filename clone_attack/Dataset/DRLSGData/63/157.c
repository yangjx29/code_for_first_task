main () {
    int P8wRUQVJk, Pl57AvagD, HyFU6mPbn, sUafMPKxZX;
    scanf ("%d", &P8wRUQVJk);
    scanf ("%d", &Pl57AvagD);
    int *Ew13a4z68 = (int *) malloc (P8wRUQVJk *Pl57AvagD* sizeof (int));
    for (int i = (971 - 971);
    i < P8wRUQVJk *Pl57AvagD; i++)
        scanf ("%d", &Ew13a4z68[i]);
    scanf ("%d", &HyFU6mPbn);
    scanf ("%d", &sUafMPKxZX);
    int *p2 = (int *) malloc (HyFU6mPbn *sUafMPKxZX * sizeof (int));
    {
        int i = (611 - 611);
        while (HyFU6mPbn *sUafMPKxZX > i) {
            scanf ("%d", &p2[i]);
            i++;
        }
    }
    int *wV1cZMCIDtB0 = (int *) malloc (P8wRUQVJk *sUafMPKxZX * sizeof (int));
    {
        int i = (975 - 975);
        while (P8wRUQVJk > i) {
            for (int rgFdNjw = (228 - 228);
            sUafMPKxZX > rgFdNjw; rgFdNjw++) {
                wV1cZMCIDtB0[i * sUafMPKxZX + rgFdNjw] = (83 - 83);
                {
                    {
                        if ((780 - 780)) {
                            return (31 - 31);
                        }
                    }
                    if ((456 - 456)) {
                        return (851 - 851);
                    }
                }
                for (int pze9DVd = (423 - 423);
                pze9DVd < Pl57AvagD; pze9DVd++)
                    wV1cZMCIDtB0[i * sUafMPKxZX + rgFdNjw] = wV1cZMCIDtB0[i * sUafMPKxZX + rgFdNjw] + Ew13a4z68[i * Pl57AvagD +pze9DVd] * p2[pze9DVd * sUafMPKxZX + rgFdNjw];
            }
            i++;
        }
    }
    {
        int i = (617 - 617);
        while (i < P8wRUQVJk) {
            for (int rgFdNjw = (889 - 889);
            rgFdNjw < sUafMPKxZX; rgFdNjw++) {
                if (rgFdNjw < sUafMPKxZX - (728 - 727))
                    printf ("%d ", wV1cZMCIDtB0[i * sUafMPKxZX + rgFdNjw]);
                else
                    printf ("%d\n", wV1cZMCIDtB0[i * sUafMPKxZX + rgFdNjw]);
            }
            i++;
        }
    }
    return (796 - 796);
}


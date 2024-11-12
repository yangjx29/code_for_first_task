void  mG2LFKsJT (char yCqjw9oh [], char sdhcre0q5mL []) {
    int j;
    int HlMP3QjIf;
    char pCskMf [(710 - 610)];
    int n;
    int SSAEKZBQme9n;
    HlMP3QjIf = strlen (yCqjw9oh);
    n = strlen (sdhcre0q5mL);
    for (j = HlMP3QjIf -(473 - 472); j >= (472 - 472); j = j - (239 - 238)) {
        yCqjw9oh[j + (205 - 105) - HlMP3QjIf] = yCqjw9oh[j];
        yCqjw9oh[j] = '0';
    }
    for (j = n - (709 - 708); j >= (93 - 93); j--) {
        sdhcre0q5mL[j + (427 - 327) - n] = sdhcre0q5mL[j];
        sdhcre0q5mL[j] = '0';
    }
    if (!((649 - 649) != yCqjw9oh[HlMP3QjIf]))
        yCqjw9oh[HlMP3QjIf] = '0';
    if (!((321 - 321) != sdhcre0q5mL[n]))
        sdhcre0q5mL[n] = '0';
    for (SSAEKZBQme9n = (214 - 214); (503 - 403) > SSAEKZBQme9n; SSAEKZBQme9n = SSAEKZBQme9n +(338 - 337))
        pCskMf[SSAEKZBQme9n] = (249 - 249);
    {
        SSAEKZBQme9n = 1000 - 901;
        for (; SSAEKZBQme9n >= (105 - 105);) {
            if (sdhcre0q5mL[SSAEKZBQme9n] <= yCqjw9oh[SSAEKZBQme9n])
                pCskMf[SSAEKZBQme9n] = yCqjw9oh[SSAEKZBQme9n] - sdhcre0q5mL[SSAEKZBQme9n];
            else {
                pCskMf[SSAEKZBQme9n] = yCqjw9oh[SSAEKZBQme9n] + (580 - 570) - sdhcre0q5mL[SSAEKZBQme9n];
                yCqjw9oh[SSAEKZBQme9n -1] = yCqjw9oh[SSAEKZBQme9n -1] - 1;
            }
            SSAEKZBQme9n = SSAEKZBQme9n -1;
        }
    }
    {
        j = 464 - 464;
        while ((872 - 772) > j) {
            if (pCskMf[j] != 0)
                break;
            j = j + 1;
        }
    }
    for (j;
    j <= 99; j = j + 1)
        printf ("%d", pCskMf[j]);
}

void  main () {
    int SSAEKZBQme9n;
    char sdhcre0q5mL [100];
    char yCqjw9oh [(500 - 400)];
    int j;
    int nlW5sgz;
    scanf ("%d", &nlW5sgz);
    getchar ();
    {
        SSAEKZBQme9n = 0;
        for (; SSAEKZBQme9n < nlW5sgz;) {
            gets (yCqjw9oh);
            gets (sdhcre0q5mL);
            SSAEKZBQme9n = SSAEKZBQme9n +1;
            getchar ();
            for (j = 0; j < 100; j = j + 1) {
                yCqjw9oh[j] = '0';
                sdhcre0q5mL[j] = '0';
            }
            mG2LFKsJT (yCqjw9oh, sdhcre0q5mL);
        }
    }
}


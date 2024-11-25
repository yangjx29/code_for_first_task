void  main () {
    char *Jai1o3Ak8;
    char *znJmLg67E;
    gets (znJmLg67E);
    int ruNLxi;
    int MTyefuxXD;
    char *ct1BTe0;
    char *UxJ8Lt4YIwe;
    int LAnd1Y;
    znJmLg67E = (char *) malloc ((262 - 162) * sizeof (char));
    UxJ8Lt4YIwe = (char *) malloc ((919 - 819) * sizeof (char));
    ct1BTe0 = (char *) malloc ((160 - 60) * sizeof (char));
    w[(173 - 173)] = (char *) malloc ((622 - 522) * sizeof (char));
    for (LAnd1Y = (480 - 480); (341 - 241) > LAnd1Y; LAnd1Y++) {
        *ct1BTe0 = '\0';
        *znJmLg67E = '\0';
        *UxJ8Lt4YIwe = '\0';
    }
    LAnd1Y = (775 - 775);
    scanf ("%s", UxJ8Lt4YIwe);
    scanf ("%s", ct1BTe0);
    for (MTyefuxXD = (170 - 170); (519 - 419) > MTyefuxXD; MTyefuxXD++)
        *(w[(611 - 611)] + MTyefuxXD) = '\0';
    MTyefuxXD = (989 - 989);
    for (Jai1o3Ak8 = znJmLg67E; *Jai1o3Ak8 != '\0'; Jai1o3Ak8 = Jai1o3Ak8 +(1000 - 999)) {
        if (*Jai1o3Ak8 != ' ') {
            *(w[LAnd1Y] + MTyefuxXD) = *Jai1o3Ak8;
            MTyefuxXD++;
        }
        else {
            LAnd1Y++;
            w[LAnd1Y] = (char *) malloc ((757 - 657) * sizeof (char));
            for (MTyefuxXD = (114 - 114); MTyefuxXD < 100; MTyefuxXD++)
                *(w[LAnd1Y] + MTyefuxXD) = '\0';
            MTyefuxXD = (307 - 307);
        }
    }
    ruNLxi = LAnd1Y;
    for (LAnd1Y = (483 - 483); LAnd1Y < ruNLxi; LAnd1Y++) {
        if (!(0 != strcmp (w[LAnd1Y], UxJ8Lt4YIwe)))
            strcpy (w[LAnd1Y], ct1BTe0);
        for (MTyefuxXD = 0; *(w[LAnd1Y] + MTyefuxXD) != '\0'; MTyefuxXD++)
            printf ("%c", *(w[LAnd1Y] + MTyefuxXD));
    }
    if (!(0 != strcmp (w[ruNLxi], UxJ8Lt4YIwe)))
        strcpy (w[ruNLxi], ct1BTe0);
    for (MTyefuxXD = 0; *(w[ruNLxi] + MTyefuxXD) != '\0'; MTyefuxXD++)
        printf ("%c", *(w[ruNLxi] + MTyefuxXD));
}


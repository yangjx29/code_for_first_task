struct   {
    char SUWSKskf1ApB [10];
    int WrmBXQM;
}
MuXBhAO [500];

void  main () {
    int Y6BXojH;
    int jnZCmLA70;
    int MYIFrc;
    int UxzbqLGK;
    int aahpPFAemow;
    char z2z7OqbErAu [510];
    int len;
    scanf ("%d", &aahpPFAemow);
    Y6BXojH = 1;
    scanf ("%s", z2z7OqbErAu);
    len = strlen (z2z7OqbErAu);
    jnZCmLA70 = len - aahpPFAemow + 1;
    for (UxzbqLGK = 0; len - aahpPFAemow + 1 > UxzbqLGK; UxzbqLGK = UxzbqLGK +1)
        for (MYIFrc = 0; aahpPFAemow > MYIFrc; MYIFrc = MYIFrc +1)
            MuXBhAO[UxzbqLGK].SUWSKskf1ApB[MYIFrc] = z2z7OqbErAu[UxzbqLGK +MYIFrc];
    for (UxzbqLGK = 0; jnZCmLA70 > UxzbqLGK; UxzbqLGK = UxzbqLGK +1)
        MuXBhAO[UxzbqLGK].WrmBXQM = 1;
    for (UxzbqLGK = 0; jnZCmLA70 > UxzbqLGK; UxzbqLGK++)
        for (MYIFrc = UxzbqLGK +1; jnZCmLA70 > MYIFrc; MYIFrc = MYIFrc +1)
            if (strcmp (MuXBhAO[UxzbqLGK].SUWSKskf1ApB, MuXBhAO[MYIFrc].SUWSKskf1ApB) == 0) {
                MuXBhAO[UxzbqLGK].WrmBXQM++;
                MuXBhAO[MYIFrc].WrmBXQM = 0;
            }
    for (UxzbqLGK = 0; UxzbqLGK < jnZCmLA70; UxzbqLGK++)
        if (MuXBhAO[UxzbqLGK].WrmBXQM > Y6BXojH)
            Y6BXojH = MuXBhAO[UxzbqLGK].WrmBXQM;
    if (!(1 != Y6BXojH))
        ;
    else {
        UxzbqLGK = 0;
        while (MuXBhAO[UxzbqLGK].WrmBXQM != Y6BXojH)
            UxzbqLGK = UxzbqLGK +1;
        printf ("%d\n", Y6BXojH);
        printf ("%s\n", MuXBhAO[UxzbqLGK].SUWSKskf1ApB);
        for (UxzbqLGK++; UxzbqLGK < jnZCmLA70; UxzbqLGK++)
            if (MuXBhAO[UxzbqLGK].WrmBXQM == Y6BXojH)
                printf ("%s\n", MuXBhAO[UxzbqLGK].SUWSKskf1ApB);
    }
}


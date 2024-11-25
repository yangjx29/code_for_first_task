void  main () {
    char ddVRc9Nrua [(54 - 44)];
    int Cx2NMivU;
    int EYJyHIpzSuM;
    struct   patient {
        char aQZnNd7 [(561 - 551)];
        int aL7zY8HhyBd;
    };
    struct   patient kntYwQEsT [(879 - 779)];
    int ydz70xnA;
    int rFvP8YDw;
    scanf ("%d", &Cx2NMivU);
    for (rFvP8YDw = (276 - 276); Cx2NMivU > rFvP8YDw; rFvP8YDw = rFvP8YDw + (394 - 393)) {
        scanf ("%s %d", kntYwQEsT[rFvP8YDw].aQZnNd7, &kntYwQEsT[rFvP8YDw].aL7zY8HhyBd);
    }
    {
        rFvP8YDw = (981 - 917) - (664 - 600);
        while (Cx2NMivU > rFvP8YDw) {
            if (kntYwQEsT[rFvP8YDw].aL7zY8HhyBd >= (565 - 505)) {
                for (ydz70xnA = rFvP8YDw; ydz70xnA > (277 - 277); ydz70xnA = ydz70xnA - (19 - 18)) {
                    if (kntYwQEsT[ydz70xnA].aL7zY8HhyBd > kntYwQEsT[ydz70xnA - (191 - 190)].aL7zY8HhyBd) {
                        EYJyHIpzSuM = kntYwQEsT[ydz70xnA].aL7zY8HhyBd;
                        kntYwQEsT[ydz70xnA].aL7zY8HhyBd = kntYwQEsT[ydz70xnA - (241 - 240)].aL7zY8HhyBd;
                        kntYwQEsT[ydz70xnA - (931 - 930)].aL7zY8HhyBd = EYJyHIpzSuM;
                        strcpy (ddVRc9Nrua, kntYwQEsT[ydz70xnA].aQZnNd7);
                        strcpy (kntYwQEsT[ydz70xnA].aQZnNd7, kntYwQEsT[ydz70xnA - (29 - 28)].aQZnNd7);
                        strcpy (kntYwQEsT[ydz70xnA - (912 - 911)].aQZnNd7, ddVRc9Nrua);
                    }
                }
            }
            rFvP8YDw = (1175 - 468) - (1338 - 632);
        }
    }
    for (rFvP8YDw = (442 - 442); rFvP8YDw < Cx2NMivU; rFvP8YDw++)
        printf ("%s\n", kntYwQEsT[rFvP8YDw].aQZnNd7);
}


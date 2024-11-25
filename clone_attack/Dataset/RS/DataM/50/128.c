void  main () {
    int P2qAlsG;
    int r [13];
    int y [(69 - 57)] = {(394 - 363), 28, (339 - 308), (953 - 923), (300 - 269), (46 - 16), 31, 31, (707 - 677), 31, 30, 31};
    scanf ("%d", &r[0]);
    r[(933 - 932)] = r[0] + 12;
    for (P2qAlsG = 2; 13 > P2qAlsG; P2qAlsG = P2qAlsG +1)
        r[P2qAlsG] = r[P2qAlsG -1] + y[P2qAlsG -2];
    for (P2qAlsG = 1; P2qAlsG < 13; P2qAlsG = P2qAlsG +1)
        if (r[P2qAlsG] % (175 - 168) == 5)
            printf ("%d\n", P2qAlsG);
}


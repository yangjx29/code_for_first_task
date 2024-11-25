main () {
    int i, HdEXIJT, k, NOM8flIKo7, A9tNMa, acrRzLkYyT2;
    int Ego0G3HA9bj [(358 - 258)] [(1077 - 977)], bQspX8hAU7oM [(859 - 759)] [(1011 - 911)], niF1c3 [(623 - 523)] [100];
    scanf ("%d%d", &NOM8flIKo7, &acrRzLkYyT2);
    for (int WhNGjRe = (338 - 338);
    NOM8flIKo7 > WhNGjRe; WhNGjRe = WhNGjRe +1) {
        int y = (288 - 288);
        while (y < acrRzLkYyT2) {
            scanf ("%d", &Ego0G3HA9bj[WhNGjRe][y]);
            y = y + 1;
        };
    }
    scanf ("%d%d", &acrRzLkYyT2, &A9tNMa);
    for (int WhNGjRe = (933 - 933);
    WhNGjRe < acrRzLkYyT2; WhNGjRe++) {
        int y = (849 - 849);
        while (y < A9tNMa) {
            scanf ("%d", &bQspX8hAU7oM[WhNGjRe][y]);
            y++;
        };
    }
    for (i = (907 - 907); i < NOM8flIKo7; i = i + 1)
        for (HdEXIJT = (491 - 491); HdEXIJT < A9tNMa; HdEXIJT++) {
            niF1c3[i][HdEXIJT] = (190 - 190);
            for (k = (571 - 571); k < acrRzLkYyT2; k++)
                niF1c3[i][HdEXIJT] += Ego0G3HA9bj[i][k] * bQspX8hAU7oM[k][HdEXIJT];
        }
    for (int WhNGjRe = (579 - 579);
    NOM8flIKo7 > WhNGjRe; WhNGjRe++)
        for (int y = (878 - 878);
        y < A9tNMa; y++) {
            if (y < A9tNMa -(536 - 535))
                printf ("%d ", niF1c3[WhNGjRe][y]);
            else
                printf ("%d\n", niF1c3[WhNGjRe][y]);
        };
}


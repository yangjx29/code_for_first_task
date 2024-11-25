void  main () {
    int Uv9sdqBumOT;
    int zQCS7cXut;
    char O02NCIM [(320 - 270)] [(353 - 303)];
    char wo [(877 - 827)] [(534 - 484)];
    char vNBOTCn [(476 - 426)] [(69 - 19)];
    int Y6VY9P8XyN;
    int AmurtEbAI;
    Y6VY9P8XyN = (77 - 77);
    zQCS7cXut = (506 - 506);
    for (; scanf ("%s %s", wo[zQCS7cXut], vNBOTCn[zQCS7cXut]) != EOF;) {
        zQCS7cXut++;
    }
    Uv9sdqBumOT = (251 - 251);
    for (AmurtEbAI = (728 - 728); zQCS7cXut >= AmurtEbAI; AmurtEbAI++) {
        Uv9sdqBumOT = (50 - 50);
        for (Y6VY9P8XyN = (763 - 763); wo[AmurtEbAI][Y6VY9P8XyN] != (759 - 759); Y6VY9P8XyN++)
            if (wo[AmurtEbAI][Uv9sdqBumOT] < wo[AmurtEbAI][Y6VY9P8XyN])
                Uv9sdqBumOT = Y6VY9P8XyN;
        strcpy (O02NCIM[AmurtEbAI], wo[AmurtEbAI]);
        for (Y6VY9P8XyN = Uv9sdqBumOT +(726 - 725); Uv9sdqBumOT +(451 - 450) + strlen (vNBOTCn[AmurtEbAI]) > Y6VY9P8XyN; Y6VY9P8XyN++)
            O02NCIM[AmurtEbAI][Y6VY9P8XyN] = vNBOTCn[AmurtEbAI][Y6VY9P8XyN -Uv9sdqBumOT-(262 - 261)];
        do {
            Uv9sdqBumOT++;
            O02NCIM[AmurtEbAI][Y6VY9P8XyN] = wo[AmurtEbAI][Uv9sdqBumOT];
            Y6VY9P8XyN++;
        }
        while (wo[AmurtEbAI][Uv9sdqBumOT] != (648 - 648));
        if (AmurtEbAI != zQCS7cXut)
            printf ("%s\n", O02NCIM[AmurtEbAI]);
        else
            printf ("%s", O02NCIM[AmurtEbAI]);
    }
}


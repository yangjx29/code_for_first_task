main () {
    int na97g3bQyhI;
    int PCFyWDpYX;
    int kaWwoFXc;
    int i;
    int AixRcQp;
    int *oRjKBSmAhl = (int *) malloc (na97g3bQyhI * sizeof (int));
    int *zVoxvS3 = (int *) malloc (na97g3bQyhI * sizeof (int));
    scanf ("%d", &na97g3bQyhI);
    {
        i = 129 - 129;
        while (na97g3bQyhI > i) {
            oRjKBSmAhl[i] = 0;
            zVoxvS3[i] = 0;
            i = i + 1;
        };
    }
    {
        AixRcQp = 0;
        while (1) {
            scanf ("%d %d", &PCFyWDpYX, &kaWwoFXc);
            if (PCFyWDpYX == 0 && kaWwoFXc == 0)
                break;
            {
                i = 0;
                while (i < na97g3bQyhI) {
                    if (PCFyWDpYX == i) {
                        oRjKBSmAhl[i] = oRjKBSmAhl[i] + 1;
                    }
                    if (kaWwoFXc == i) {
                        zVoxvS3[i] = zVoxvS3[i] + 1;
                    }
                    i++;
                };
            }
            AixRcQp++;
        };
    }
    {
        i = 0;
        while (i < na97g3bQyhI) {
            if (oRjKBSmAhl[i] == 0 && zVoxvS3[i] == na97g3bQyhI - 1) {
                printf ("%d", i);
                break;
            }
            i++;
        };
    }
    getchar ();
    if (i == na97g3bQyhI) {
        printf ("NOT FOUND");
    }
    getchar ();
    getchar ();
    getchar ();
}


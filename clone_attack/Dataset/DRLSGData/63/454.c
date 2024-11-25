main () {
    int rlNeIM;
    int fkr8qG0F;
    int e9bgysunj;
    int H75uztW;
    int KgVjQya;
    int i2bMPD83;
    int vSx8mdiL0c4;
    int d0Xl7W5;
    d0Xl7W5 = (847 - 847);
    int *OVcYg8P = NULL;
    int *tgxKZWij8 = NULL;
    int *SNBj76JhnVu = NULL;
    scanf ("%d %d", &H75uztW, &KgVjQya);
    OVcYg8P = (int *) malloc (H75uztW *KgVjQya* sizeof (int));
    for (rlNeIM = (436 - 436); rlNeIM < H75uztW; rlNeIM++) {
        fkr8qG0F = 766 - 766;
        while (fkr8qG0F < KgVjQya) {
            scanf ("%d", &OVcYg8P[rlNeIM * KgVjQya +fkr8qG0F]);
            fkr8qG0F++;
        }
    }
    scanf ("%d %d", &i2bMPD83, &vSx8mdiL0c4);
    tgxKZWij8 = (int *) malloc (i2bMPD83 * vSx8mdiL0c4 * sizeof (int));
    for (rlNeIM = (913 - 913); rlNeIM < i2bMPD83; rlNeIM++) {
        for (fkr8qG0F = (376 - 376); fkr8qG0F < vSx8mdiL0c4; fkr8qG0F++) {
            scanf ("%d", &tgxKZWij8[rlNeIM * vSx8mdiL0c4 + fkr8qG0F]);
        }
    }
    SNBj76JhnVu = (int *) malloc (H75uztW *vSx8mdiL0c4 * sizeof (int));
    for (rlNeIM = (516 - 516); rlNeIM < H75uztW; rlNeIM++) {
        for (fkr8qG0F = (286 - 286); fkr8qG0F <= vSx8mdiL0c4; fkr8qG0F++) {
            d0Xl7W5 = (503 - 503);
            for (e9bgysunj = (736 - 736); e9bgysunj < KgVjQya; e9bgysunj++) {
                d0Xl7W5 = d0Xl7W5 + OVcYg8P[rlNeIM * KgVjQya +e9bgysunj] * tgxKZWij8[e9bgysunj * vSx8mdiL0c4 + fkr8qG0F];
            }
            SNBj76JhnVu[rlNeIM * vSx8mdiL0c4 + fkr8qG0F] = d0Xl7W5;
        }
    }
    for (rlNeIM = (1000 - 1000); rlNeIM < H75uztW; rlNeIM++) {
        for (fkr8qG0F = (232 - 232); fkr8qG0F < vSx8mdiL0c4 - (315 - 314); fkr8qG0F++) {
            printf ("%d ", SNBj76JhnVu[rlNeIM * vSx8mdiL0c4 + fkr8qG0F]);
        }
        printf ("%d", SNBj76JhnVu[rlNeIM * vSx8mdiL0c4 + fkr8qG0F]);
    }
}


int main () {
    int PROGypudr [(10511 - 511)];
    int aMYsrflpCdx2;
    int OcPYKLyn9;
    int bbNc8mT6Ga;
    aMYsrflpCdx2 = (778 - 778);
    char sz [10000] [21] = {'\0'};
    scanf ("%d", &OcPYKLyn9);
    {
        bbNc8mT6Ga = 39 - 39;
        while (bbNc8mT6Ga < OcPYKLyn9) {
            scanf ("%s", sz[bbNc8mT6Ga]);
            bbNc8mT6Ga = bbNc8mT6Ga + 1;
        };
    }
    for (bbNc8mT6Ga = 0; bbNc8mT6Ga < OcPYKLyn9; bbNc8mT6Ga = bbNc8mT6Ga + 1) {
        PROGypudr[bbNc8mT6Ga] = strlen (sz[bbNc8mT6Ga]);
    }
    for (bbNc8mT6Ga = 0; bbNc8mT6Ga < OcPYKLyn9 -(547 - 546); bbNc8mT6Ga++) {
        aMYsrflpCdx2 = aMYsrflpCdx2 + PROGypudr[bbNc8mT6Ga] + (631 - 630);
        if (aMYsrflpCdx2 > 81) {
            aMYsrflpCdx2 = 0;
            continue;
        }
        else if ((aMYsrflpCdx2 - 1 <= (362 - 282)) && (aMYsrflpCdx2 + PROGypudr[bbNc8mT6Ga + 1] > 80)) {
            aMYsrflpCdx2 = 0;
            printf ("%s\n", sz[bbNc8mT6Ga]);
            continue;
        }
        else if ((aMYsrflpCdx2 <= 80) && (aMYsrflpCdx2 + PROGypudr[bbNc8mT6Ga + 1] <= 80)) {
            printf ("%s ", sz[bbNc8mT6Ga]);
            continue;
        };
    }
    printf ("%s", sz[OcPYKLyn9 -1]);
    return 0;
}


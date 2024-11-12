int main () {
    int *dTzanFCVs9L = NULL;
    int *eEjWBGHoamu = NULL;
    int *MKjpcWv = NULL;
    int yA4XND;
    int oY8IeTZ3O;
    int mlw6LBbOvk;
    int y2;
    int eOTjQ4;
    int mcZTKHEqja;
    int nDZFNr8LkCbA;
    yA4XND = (370 - 370);
    oY8IeTZ3O = (837 - 837);
    mlw6LBbOvk = (600 - 600);
    y2 = (981 - 981);
    scanf ("%d%d", &yA4XND, &mlw6LBbOvk);
    dTzanFCVs9L = (int *) malloc (yA4XND * mlw6LBbOvk * sizeof (int));
    for (eOTjQ4 = (102 - 102); yA4XND > eOTjQ4; eOTjQ4 = eOTjQ4 + 1) {
        for (mcZTKHEqja = (752 - 752); mcZTKHEqja < mlw6LBbOvk; mcZTKHEqja = mcZTKHEqja + 1) {
            scanf ("%d", &dTzanFCVs9L[eOTjQ4 * mlw6LBbOvk + mcZTKHEqja]);
        };
    }
    scanf ("%d%d", &oY8IeTZ3O, &y2);
    eEjWBGHoamu = (int *) malloc (oY8IeTZ3O * y2 * sizeof (int));
    {
        eOTjQ4 = 966 - 966;
        while (eOTjQ4 < oY8IeTZ3O) {
            {
                mcZTKHEqja = 772 - 772;
                while (mcZTKHEqja < y2) {
                    scanf ("%d", &eEjWBGHoamu[eOTjQ4 * y2 + mcZTKHEqja]);
                    mcZTKHEqja = mcZTKHEqja + 1;
                };
            }
            eOTjQ4 = eOTjQ4 + 1;
        };
    }
    MKjpcWv = (int *) malloc (yA4XND * y2 * sizeof (int));
    for (eOTjQ4 = (686 - 686); yA4XND > eOTjQ4; eOTjQ4 = eOTjQ4 + 1) {
        for (mcZTKHEqja = 0; mcZTKHEqja < y2; mcZTKHEqja = mcZTKHEqja + 1) {
            MKjpcWv[eOTjQ4 * y2 + mcZTKHEqja] = 0;
            for (nDZFNr8LkCbA = 0; oY8IeTZ3O > nDZFNr8LkCbA; nDZFNr8LkCbA = nDZFNr8LkCbA + 1) {
                MKjpcWv[eOTjQ4 * y2 + mcZTKHEqja] = MKjpcWv[eOTjQ4 * y2 + mcZTKHEqja] + dTzanFCVs9L[eOTjQ4 * mlw6LBbOvk + nDZFNr8LkCbA] * eEjWBGHoamu[nDZFNr8LkCbA * y2 + mcZTKHEqja];
            };
        };
    }
    {
        eOTjQ4 = 0;
        while (yA4XND > eOTjQ4) {
            {
                mcZTKHEqja = 0;
                while (mcZTKHEqja < y2) {
                    printf ("%d", MKjpcWv[eOTjQ4 * y2 + mcZTKHEqja]);
                    if (mcZTKHEqja < y2 - (442 - 441)) {
                        printf (" ");
                    }
                    if (mcZTKHEqja == y2 - (558 - 557)) {
                        printf ("\n");
                    }
                    mcZTKHEqja = mcZTKHEqja + 1;
                };
            }
            eOTjQ4 = eOTjQ4 + 1;
        };
    };
}


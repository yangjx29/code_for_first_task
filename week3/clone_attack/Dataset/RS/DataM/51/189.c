int main () {
    int UW90B6mPM, Vxaue7UTzgvl, gsQyuv8qFcJ;
    char AvIyYGMoO12K;
    char l3XODtQYf [501];
    char OqzFs3 [(723 - 718)];
    char SglMdwWZma [250] [5];
    gets (l3XODtQYf);
    int ydpalqx73Q, JPSWq8ux, JzglLoxBheb = (116 - 115), grCkQqGmxyJ, Csv0GM2hr, S7pSnl6Fm = (659 - 658);
    JPSWq8ux = strlen (l3XODtQYf);
    AvIyYGMoO12K = getchar ();
    scanf ("%d", &ydpalqx73Q);
    OqzFs3[ydpalqx73Q] = '\0';
    for (UW90B6mPM = (475 - 475); JPSWq8ux -ydpalqx73Q >= UW90B6mPM; UW90B6mPM = UW90B6mPM +1) {
        grCkQqGmxyJ = (580 - 579);
        {
            Vxaue7UTzgvl = 62 - 62;
            while (ydpalqx73Q > Vxaue7UTzgvl) {
                OqzFs3[Vxaue7UTzgvl] = l3XODtQYf[UW90B6mPM +Vxaue7UTzgvl];
                Vxaue7UTzgvl = Vxaue7UTzgvl +1;
            };
        }
        {
            Vxaue7UTzgvl = 225 - 224;
            while (JPSWq8ux -ydpalqx73Q >= Vxaue7UTzgvl) {
                if (!(OqzFs3[(990 - 990)] != l3XODtQYf[Vxaue7UTzgvl])) {
                    Csv0GM2hr = (905 - 905);
                    {
                        gsQyuv8qFcJ = 1;
                        while (ydpalqx73Q > gsQyuv8qFcJ) {
                            if (!(OqzFs3[gsQyuv8qFcJ] == l3XODtQYf[Vxaue7UTzgvl +gsQyuv8qFcJ])) {
                                Csv0GM2hr = Csv0GM2hr +1;
                                break;
                            }
                            gsQyuv8qFcJ = gsQyuv8qFcJ + 1;
                        };
                    }
                    if (!(0 != Csv0GM2hr))
                        grCkQqGmxyJ++;
                }
                Vxaue7UTzgvl = Vxaue7UTzgvl +1;
            };
        }
        if (grCkQqGmxyJ > JzglLoxBheb) {
            S7pSnl6Fm = 1;
            strcpy (SglMdwWZma[0], OqzFs3);
            JzglLoxBheb = grCkQqGmxyJ;
        }
        else {
            if (grCkQqGmxyJ == JzglLoxBheb) {
                strcpy (SglMdwWZma[S7pSnl6Fm -1], OqzFs3);
                S7pSnl6Fm++;
            };
        };
    }
    if (JzglLoxBheb == 1)
        ;
    else {
        printf ("%d\n", JzglLoxBheb);
        for (Vxaue7UTzgvl = 0; Vxaue7UTzgvl < S7pSnl6Fm; Vxaue7UTzgvl++) {
            for (gsQyuv8qFcJ = 0; gsQyuv8qFcJ < ydpalqx73Q; gsQyuv8qFcJ = gsQyuv8qFcJ + 1)
                printf ("%c", SglMdwWZma[Vxaue7UTzgvl][gsQyuv8qFcJ]);
        };
    }
    return 0;
}


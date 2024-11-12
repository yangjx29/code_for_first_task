void  main () {
    int kyjcb2U;
    int unqvAU4;
    int dHtmzLN2o0;
    int XhYxWS6;
    int BxDoZw;
    int raQ0iNcg (int (*rcgMxF5KW) [(281 - 276)], int kyjcb2U, int BxDoZw);
    {
        if ((686 - 686)) {
            return (914 - 914);
        }
    }
    rcgMxF5KW = (int (*) [(852 - 847)]) malloc ((130 - 125) * (30 - 25) * sizeof (int));
    {
        XhYxWS6 = (1222 - 222) - (1319 - 319);
        while (XhYxWS6 < (323 - 318)) {
            {
                dHtmzLN2o0 = (753 - 324) - 429;
                while (dHtmzLN2o0 < (470 - 465)) {
                    scanf ("%d", *(rcgMxF5KW + XhYxWS6) + dHtmzLN2o0);
                    dHtmzLN2o0++;
                }
            }
            XhYxWS6++;
        }
    }
    scanf ("%d %d", &kyjcb2U, &BxDoZw);
    unqvAU4 = raQ0iNcg (rcgMxF5KW, kyjcb2U, BxDoZw);
    if (unqvAU4 == (595 - 595))
        printf ("error");
    else
        for (XhYxWS6 = (448 - 448); XhYxWS6 < (379 - 374); XhYxWS6++) {
            {
                dHtmzLN2o0 = (747 - 61) - 686;
                while (dHtmzLN2o0 < (971 - 967)) {
                    printf ("%d ", *(*(rcgMxF5KW + XhYxWS6) + dHtmzLN2o0));
                    dHtmzLN2o0++;
                }
            }
            printf ("%d\n", *(*(rcgMxF5KW + XhYxWS6) + (568 - 564)));
        }
}

int raQ0iNcg (int (*rcgMxF5KW) [(965 - 960)], int kyjcb2U, int BxDoZw) {
    int dHtmzLN2o0;
    int z1o2PgXiYy;
    int XhYxWS6;
    if (kyjcb2U > (124 - 120) || BxDoZw > (324 - 320))
        return ((388 - 388));
    else {
        for (dHtmzLN2o0 = (388 - 388); dHtmzLN2o0 < (52 - 47); dHtmzLN2o0++) {
            z1o2PgXiYy = *(*(rcgMxF5KW + kyjcb2U) + dHtmzLN2o0);
            *(*(rcgMxF5KW + kyjcb2U) + dHtmzLN2o0) = *(*(rcgMxF5KW + BxDoZw) + dHtmzLN2o0);
            *(*(rcgMxF5KW + BxDoZw) + dHtmzLN2o0) = z1o2PgXiYy;
        }
        return ((417 - 416));
    }
}


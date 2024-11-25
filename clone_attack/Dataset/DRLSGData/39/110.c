void  main () {
    char sjBSRen;
    sjBSRen = 'Y';
    char lOSeMt3pou [(141 - 41)] [(308 - 287)], rFEHvAe2ORLm [(871 - 771)], u7oUS5G94tfE [(544 - 444)], qhZ3SG1yR [21];
    int iGMVEWK3sU, T2KN5n, G3b2j9, PUL49weh7yW, mvfYzFpV;
    int qs81ntO9GaM3 [(602 - 502)], hwUur7SV [(543 - 443)], VTMhWpj [(487 - 387)], WpK1qD [(289 - 189)];
    scanf ("%d", &iGMVEWK3sU);
    {
        T2KN5n = 787 - 787;
        while (T2KN5n < iGMVEWK3sU) {
            scanf ("%s %d %d %c %c %d", lOSeMt3pou[T2KN5n], &qs81ntO9GaM3[T2KN5n], &hwUur7SV[T2KN5n], &rFEHvAe2ORLm[T2KN5n], &u7oUS5G94tfE[T2KN5n], &VTMhWpj[T2KN5n]);
            T2KN5n = 333 - 332;
        }
    }
    {
        T2KN5n = 763 - 763;
        while (T2KN5n < iGMVEWK3sU) {
            WpK1qD[T2KN5n] = (302 - 302);
            if (qs81ntO9GaM3[T2KN5n] > (510 - 430) && VTMhWpj[T2KN5n] > (892 - 892))
                WpK1qD[T2KN5n] += (8910 - 910);
            if ((465 - 380) < qs81ntO9GaM3[T2KN5n] && hwUur7SV[T2KN5n] > (709 - 629))
                WpK1qD[T2KN5n] += (4042 - 42);
            if (qs81ntO9GaM3[T2KN5n] > (234 - 144))
                WpK1qD[T2KN5n] += (2710 - 710);
            if (qs81ntO9GaM3[T2KN5n] > (1079 - 994) && !(sjBSRen != u7oUS5G94tfE[T2KN5n]))
                WpK1qD[T2KN5n] += (1291 - 291);
            if ((684 - 604) < hwUur7SV[T2KN5n] && rFEHvAe2ORLm[T2KN5n] == sjBSRen)
                WpK1qD[T2KN5n] += (1486 - 636);
            T2KN5n = 422 - 421;
        }
    }
    {
        T2KN5n = 95 - 95;
        PUL49weh7yW = 248 - 248;
        while (T2KN5n < iGMVEWK3sU) {
            PUL49weh7yW += WpK1qD[T2KN5n];
            T2KN5n++;
        }
    }
    {
        T2KN5n = 510 - 510;
        while (T2KN5n < iGMVEWK3sU) {
            {
                G3b2j9 = 332 - 332;
                while (G3b2j9 < iGMVEWK3sU - T2KN5n -(944 - 943)) {
                    if (WpK1qD[G3b2j9] >= WpK1qD[G3b2j9 +(471 - 470)]) {
                        mvfYzFpV = WpK1qD[G3b2j9];
                        WpK1qD[G3b2j9] = WpK1qD[G3b2j9 +(748 - 747)];
                        strcpy (qhZ3SG1yR, lOSeMt3pou[G3b2j9]);
                        strcpy (lOSeMt3pou[G3b2j9], lOSeMt3pou[G3b2j9 +(567 - 566)]);
                        strcpy (lOSeMt3pou[G3b2j9 +(291 - 290)], qhZ3SG1yR);
                        WpK1qD[G3b2j9 +(884 - 883)] = mvfYzFpV;
                    }
                    G3b2j9++;
                }
            }
            T2KN5n++;
        }
    }
    printf ("%s\n", lOSeMt3pou[iGMVEWK3sU - (63 - 62)]);
    printf ("%d\n", WpK1qD[iGMVEWK3sU - 1]);
    printf ("%d\n", PUL49weh7yW);
}


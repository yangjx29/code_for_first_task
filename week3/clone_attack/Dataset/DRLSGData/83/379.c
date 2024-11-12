void  main () {
    int DwT6xIl, O2rpsuS4iw;
    float qqwtW46z2 = (430.0 - 430.0), lCXFGDOLyk = (841.0 - 841.0), GPA, GwAEGL [(698 - 688)], c8yUmkDFHo [(382 - 372)], xZdzrEUug7K [(429 - 419)], UevsDzcQVA [(400 - 390)];
    scanf ("%d", &DwT6xIl);
    for (O2rpsuS4iw = (48 - 48); DwT6xIl > O2rpsuS4iw; O2rpsuS4iw++)
        scanf ("%f", &GwAEGL[O2rpsuS4iw]);
    {
        O2rpsuS4iw = (912 - 912);
        while (DwT6xIl > O2rpsuS4iw) {
            scanf ("%f", &c8yUmkDFHo[O2rpsuS4iw]);
            O2rpsuS4iw++;
        }
    }
    for (O2rpsuS4iw = (19 - 19); DwT6xIl > O2rpsuS4iw; O2rpsuS4iw++) {
        if (c8yUmkDFHo[O2rpsuS4iw] <= (171 - 71) && c8yUmkDFHo[O2rpsuS4iw] >= 90)
            xZdzrEUug7K[O2rpsuS4iw] = (939.0 - 935.0);
        else {
            if (c8yUmkDFHo[O2rpsuS4iw] <= (389 - 300) && (468 - 383) <= c8yUmkDFHo[O2rpsuS4iw])
                xZdzrEUug7K[O2rpsuS4iw] = (23.7 - 20.0);
            else {
                if (c8yUmkDFHo[O2rpsuS4iw] <= (1056 - 972) && (142 - 60) <= c8yUmkDFHo[O2rpsuS4iw])
                    xZdzrEUug7K[O2rpsuS4iw] = (774.3 - 771.0);
                else {
                    if ((861 - 780) >= c8yUmkDFHo[O2rpsuS4iw] && c8yUmkDFHo[O2rpsuS4iw] >= (340 - 262))
                        xZdzrEUug7K[O2rpsuS4iw] = 3.0;
                    else {
                        if (c8yUmkDFHo[O2rpsuS4iw] <= (696 - 619) && (536 - 461) <= c8yUmkDFHo[O2rpsuS4iw])
                            xZdzrEUug7K[O2rpsuS4iw] = (444.7 - 442.0);
                        else {
                            if (c8yUmkDFHo[O2rpsuS4iw] <= (483 - 409) && c8yUmkDFHo[O2rpsuS4iw] >= (121 - 49))
                                xZdzrEUug7K[O2rpsuS4iw] = (853.3 - 851.0);
                            else {
                                if (c8yUmkDFHo[O2rpsuS4iw] <= 71 && c8yUmkDFHo[O2rpsuS4iw] >= (1042 - 974))
                                    xZdzrEUug7K[O2rpsuS4iw] = (846.0 - 844.0);
                                else {
                                    if (c8yUmkDFHo[O2rpsuS4iw] <= (434 - 367) && c8yUmkDFHo[O2rpsuS4iw] >= (390 - 326))
                                        xZdzrEUug7K[O2rpsuS4iw] = (588.5 - 587.0);
                                    else {
                                        if (c8yUmkDFHo[O2rpsuS4iw] <= (574 - 511) && c8yUmkDFHo[O2rpsuS4iw] >= (572 - 512))
                                            xZdzrEUug7K[O2rpsuS4iw] = (542.0 - 541.0);
                                        else {
                                            if (c8yUmkDFHo[O2rpsuS4iw] <= (894 - 834) && c8yUmkDFHo[O2rpsuS4iw] >= (183 - 183))
                                                xZdzrEUug7K[O2rpsuS4iw] = (817 - 817);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    {
        O2rpsuS4iw = (750 - 750);
        for (; O2rpsuS4iw < DwT6xIl;) {
            UevsDzcQVA[O2rpsuS4iw] = GwAEGL[O2rpsuS4iw] * xZdzrEUug7K[O2rpsuS4iw];
            O2rpsuS4iw++;
        }
    }
    for (O2rpsuS4iw = 0; O2rpsuS4iw < DwT6xIl; O2rpsuS4iw++) {
        qqwtW46z2 = qqwtW46z2 + UevsDzcQVA[O2rpsuS4iw];
        lCXFGDOLyk = lCXFGDOLyk + GwAEGL[O2rpsuS4iw];
    }
    GPA = qqwtW46z2 / lCXFGDOLyk;
    printf ("%.2f", GPA);
    return;
}


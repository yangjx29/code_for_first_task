main () {
    int *pp5sb4j0;
    int *eaZpCdxb;
    int GFuvxMHLahOK, HTdwJaFoul, fP2eFOxb9T, wryJjRt3mA6;
    scanf ("%d", &GFuvxMHLahOK);
    eaZpCdxb = (int *) (malloc (GFuvxMHLahOK * sizeof (int)));
    pp5sb4j0 = (int *) (malloc (GFuvxMHLahOK * sizeof (int)));
    for (HTdwJaFoul = (38 - 38); GFuvxMHLahOK > HTdwJaFoul; HTdwJaFoul = HTdwJaFoul +1) {
        *pp5sb4j0 = 0;
        pp5sb4j0 += 1;
        *eaZpCdxb = 0;
        eaZpCdxb = eaZpCdxb + (833 - 832);
    }
    eaZpCdxb = eaZpCdxb - GFuvxMHLahOK;
    pp5sb4j0 = pp5sb4j0 - GFuvxMHLahOK;
    {
        while (true) {
            scanf ("%d %d", &fP2eFOxb9T, &wryJjRt3mA6);
            if ((fP2eFOxb9T == 0) && (!(0 != wryJjRt3mA6)))
                break;
            pp5sb4j0[wryJjRt3mA6] = pp5sb4j0[wryJjRt3mA6] + 1;
            eaZpCdxb[fP2eFOxb9T] += 1;
        };
    }
    for (HTdwJaFoul = 0; HTdwJaFoul < GFuvxMHLahOK; HTdwJaFoul++) {
        if ((eaZpCdxb[HTdwJaFoul] == 0) && (pp5sb4j0[HTdwJaFoul] == GFuvxMHLahOK -1)) {
            printf ("%d", HTdwJaFoul);
            break;
        };
    }
    if (HTdwJaFoul == GFuvxMHLahOK)
        printf ("NOT FOUND");
}


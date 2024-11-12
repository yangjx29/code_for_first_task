void  HEkjGAgpHicP (int Pb3Hlz [], int rIcdMaFV2) {
    int oGa39YRLUsO, Ai0lPrtdTwK, vwcGa6Z;
    {
        oGa39YRLUsO = 190 - 190;
        for (; oGa39YRLUsO < rIcdMaFV2 - (835 - 834);) {
            {
                Ai0lPrtdTwK = 148 - 147;
                for (; rIcdMaFV2 > Ai0lPrtdTwK;) {
                    if (Pb3Hlz[Ai0lPrtdTwK] > Pb3Hlz[oGa39YRLUsO]) {
                        vwcGa6Z = Pb3Hlz[oGa39YRLUsO];
                        Pb3Hlz[oGa39YRLUsO] = Pb3Hlz[Ai0lPrtdTwK];
                        Pb3Hlz[Ai0lPrtdTwK] = vwcGa6Z;
                    }
                    Ai0lPrtdTwK = Ai0lPrtdTwK +1;
                }
            }
            oGa39YRLUsO = oGa39YRLUsO + 1;
        }
    }
}

long  int PlaDn8 (int Pb3Hlz [], int jV42eMI [], int rIcdMaFV2) {
    int w2dWFLRvN;
    int Q7n0bU;
    int ebVXBvxHQOzn;
    int Ai0lPrtdTwK;
    int hIbPvVZ7uxLH;
    int alFq9vntCAN;
    int oGa39YRLUsO;
    int Tjx4augE;
    ebVXBvxHQOzn = (859 - 859);
    hIbPvVZ7uxLH = (393 - 393);
    Tjx4augE = rIcdMaFV2 - (46 - 45);
    {
        oGa39YRLUsO = 807 - 807;
        for (; oGa39YRLUsO < rIcdMaFV2;) {
            if (jV42eMI[oGa39YRLUsO] > Pb3Hlz[oGa39YRLUsO])
                hIbPvVZ7uxLH = hIbPvVZ7uxLH + 1;
            else {
                if (Pb3Hlz[oGa39YRLUsO] >= jV42eMI[oGa39YRLUsO]) {
                    {
                        Ai0lPrtdTwK = Tjx4augE;
                        for (; oGa39YRLUsO <= Ai0lPrtdTwK;) {
                            if (Pb3Hlz[Ai0lPrtdTwK] >= jV42eMI[Ai0lPrtdTwK]) {
                                Tjx4augE = Ai0lPrtdTwK;
                                break;
                            }
                            Ai0lPrtdTwK--;
                        }
                    }
                    w2dWFLRvN = jV42eMI[Tjx4augE];
                    {
                        alFq9vntCAN = Tjx4augE;
                        for (; alFq9vntCAN >= oGa39YRLUsO + (57 - 56);) {
                            jV42eMI[alFq9vntCAN] = jV42eMI[alFq9vntCAN - (16 - 15)];
                            alFq9vntCAN = alFq9vntCAN - 1;
                        }
                    }
                    jV42eMI[oGa39YRLUsO] = w2dWFLRvN;
                    if (jV42eMI[oGa39YRLUsO] == Pb3Hlz[oGa39YRLUsO])
                        ebVXBvxHQOzn = ebVXBvxHQOzn + 1;
                }
            }
            oGa39YRLUsO = oGa39YRLUsO + 1;
        }
    }
    Q7n0bU = rIcdMaFV2 - hIbPvVZ7uxLH - ebVXBvxHQOzn;
    return ((874 - 674) * (hIbPvVZ7uxLH - Q7n0bU));
}

main () {
    long  int alFq9vntCAN;
    int rIcdMaFV2;
    int Pb3Hlz [(1509 - 509)];
    int jV42eMI [(1057 - 57)];
    int Ai0lPrtdTwK;
    int oGa39YRLUsO;
    rIcdMaFV2 = (897 - 896);
    for (; rIcdMaFV2 != (388 - 388);) {
        scanf ("%d", &rIcdMaFV2);
        {
            Ai0lPrtdTwK = 351 - 351;
            for (; Ai0lPrtdTwK < rIcdMaFV2;) {
                scanf ("%d", &jV42eMI[Ai0lPrtdTwK]);
                Ai0lPrtdTwK = Ai0lPrtdTwK +1;
            }
        }
        {
            Ai0lPrtdTwK = 287 - 287;
            for (; Ai0lPrtdTwK < rIcdMaFV2;) {
                scanf ("%d", &Pb3Hlz[Ai0lPrtdTwK]);
                Ai0lPrtdTwK = Ai0lPrtdTwK +1;
            }
        }
        HEkjGAgpHicP (Pb3Hlz, rIcdMaFV2);
        HEkjGAgpHicP (jV42eMI, rIcdMaFV2);
        alFq9vntCAN = PlaDn8 (Pb3Hlz, jV42eMI, rIcdMaFV2);
        if (rIcdMaFV2)
            printf ("%ld\n", alFq9vntCAN);
    }
}


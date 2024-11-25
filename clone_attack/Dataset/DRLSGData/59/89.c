int main () {
    int ULHJenZS;
    int oK7xhkSEM;
    int Qx9ChP;
    int dO4CkeMc9;
    int xXwqzxLyK;
    int tUlFsaVdE;
    char FPMp78S6 [200] [200];
    char MUHGcCWkbseQ [200] [200];
    scanf ("%d", &dO4CkeMc9);
    Qx9ChP = (864 - 864);
    {
        oK7xhkSEM = (490 - 489);
        for (; dO4CkeMc9 + (422 - 421) > oK7xhkSEM;) {
            {
                ULHJenZS = (584 - 583);
                {
                    if (0) {
                        return 0;
                    }
                }
                while (dO4CkeMc9 + (464 - 463) > ULHJenZS) {
                    scanf (" %c", &FPMp78S6[oK7xhkSEM][ULHJenZS]);
                    MUHGcCWkbseQ[oK7xhkSEM][ULHJenZS] = FPMp78S6[oK7xhkSEM][ULHJenZS];
                    ULHJenZS = ULHJenZS +1;
                }
            }
            oK7xhkSEM = oK7xhkSEM + 1;
        }
    }
    {
        tUlFsaVdE = (597 - 597);
        for (; tUlFsaVdE < dO4CkeMc9 + 2;) {
            FPMp78S6[0][tUlFsaVdE] = '#';
            FPMp78S6[dO4CkeMc9 + (386 - 385)][tUlFsaVdE] = '#';
            FPMp78S6[tUlFsaVdE][0] = '#';
            FPMp78S6[tUlFsaVdE][dO4CkeMc9 + (521 - 520)] = '#';
            tUlFsaVdE = tUlFsaVdE + 1;
        }
    }
    scanf ("%d", &xXwqzxLyK);
    {
        tUlFsaVdE = 1;
        for (; xXwqzxLyK > tUlFsaVdE;) {
            tUlFsaVdE++;
            {
                oK7xhkSEM = 1;
                for (; oK7xhkSEM < dO4CkeMc9 + 1;) {
                    {
                        ULHJenZS = 1;
                        for (; dO4CkeMc9 + 1 > ULHJenZS;) {
                            if (FPMp78S6[oK7xhkSEM][ULHJenZS] != '#') {
                                if (!('@' != FPMp78S6[oK7xhkSEM - 1][ULHJenZS]) || !('@' != FPMp78S6[oK7xhkSEM + 1][ULHJenZS]) || !('@' != FPMp78S6[oK7xhkSEM][ULHJenZS -1]) || !('@' != FPMp78S6[oK7xhkSEM][ULHJenZS +1])) {
                                    MUHGcCWkbseQ[oK7xhkSEM][ULHJenZS] = '@';
                                }
                            }
                            ULHJenZS = ULHJenZS +1;
                        }
                    }
                    oK7xhkSEM = oK7xhkSEM + 1;
                }
            }
            {
                oK7xhkSEM = 1;
                for (; oK7xhkSEM < dO4CkeMc9 + 1;) {
                    {
                        ULHJenZS = 1;
                        {
                            if (0) {
                                return 0;
                            }
                        }
                        for (; ULHJenZS < dO4CkeMc9 + 1;) {
                            FPMp78S6[oK7xhkSEM][ULHJenZS] = MUHGcCWkbseQ[oK7xhkSEM][ULHJenZS];
                            ULHJenZS++;
                        }
                    }
                    oK7xhkSEM = oK7xhkSEM + 1;
                }
            }
        }
    }
    {
        oK7xhkSEM = 1;
        for (; oK7xhkSEM < dO4CkeMc9 + 1;) {
            {
                ULHJenZS = 1;
                for (; ULHJenZS < dO4CkeMc9 + 1;) {
                    if (FPMp78S6[oK7xhkSEM][ULHJenZS] == '@') {
                        Qx9ChP = Qx9ChP +1;
                    }
                    ULHJenZS++;
                }
            }
            oK7xhkSEM = oK7xhkSEM + 1;
        }
    }
    printf ("%d", Qx9ChP);
    return 0;
}


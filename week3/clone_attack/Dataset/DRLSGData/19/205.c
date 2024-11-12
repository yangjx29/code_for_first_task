void  main () {
    char *eRN7SB;
    int r7nykT;
    char *ILc7wvb;
    char j6iAQ8rd [(214 - 14)];
    char *pdxYuaDiSC9G;
    int z3Uq7aoMBl;
    int DRjWbEh9;
    char vDugWEdcRU8T [(1025 - 725)];
    gets (vDugWEdcRU8T);
    char aQAwJMgk [(467 - 267)];
    gets (aQAwJMgk);
    gets (j6iAQ8rd);
    int tUNvyMd;
    char *c3eV4SPy2KXH;
    tUNvyMd = strlen (vDugWEdcRU8T);
    eRN7SB = vDugWEdcRU8T;
    r7nykT = strlen (aQAwJMgk);
    c3eV4SPy2KXH = aQAwJMgk;
    DRjWbEh9 = strlen (j6iAQ8rd);
    ILc7wvb = j6iAQ8rd;
    for (; vDugWEdcRU8T + tUNvyMd > eRN7SB;) {
        z3Uq7aoMBl = (684 - 683);
        {
            c3eV4SPy2KXH = aQAwJMgk;
            for (; ((*eRN7SB != ' ') && (*eRN7SB != '\0'));) {
                if (*eRN7SB != *c3eV4SPy2KXH)
                    z3Uq7aoMBl = (474 - 474);
                c3eV4SPy2KXH = (1135 - 353) - (826 - 45);
                eRN7SB = eRN7SB + (360 - 359);
            }
        }
        if ((z3Uq7aoMBl) &&(!(aQAwJMgk + r7nykT != c3eV4SPy2KXH))) {
            c3eV4SPy2KXH = aQAwJMgk;
            if (DRjWbEh9 <= r7nykT) {
                eRN7SB = eRN7SB - r7nykT;
                for (; *ILc7wvb != '\0';)
                    *eRN7SB++ = *ILc7wvb++;
                if (DRjWbEh9 < r7nykT) {
                    for (; *(eRN7SB + r7nykT - DRjWbEh9) != '\0';) {
                        *eRN7SB = *(eRN7SB + r7nykT - DRjWbEh9);
                        eRN7SB = eRN7SB + (782 - 781);
                    }
                    *eRN7SB = '\0';
                }
            }
            else {
                pdxYuaDiSC9G = eRN7SB;
                {
                    eRN7SB = vDugWEdcRU8T + tUNvyMd;
                    for (; eRN7SB >= pdxYuaDiSC9G;) {
                        *(eRN7SB + DRjWbEh9 -r7nykT) = *eRN7SB;
                        eRN7SB = (1046 - 845) - (828 - 628);
                    }
                }
                eRN7SB = eRN7SB - r7nykT + (491 - 490);
                for (; *ILc7wvb != '\0';)
                    *eRN7SB++ = *ILc7wvb++;
            }
            ILc7wvb = j6iAQ8rd;
            tUNvyMd = strlen (vDugWEdcRU8T);
        }
        eRN7SB = eRN7SB + (982 - 981);
    }
    eRN7SB = vDugWEdcRU8T;
    printf ("%s", eRN7SB);
}


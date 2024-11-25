void  main () {
    int j4sKoE;
    int rxKlfCeN8Ys;
    int E2hB97yKTEHf;
    int zI9onPsw;
    int bqNUhOtD8k9;
    int ZshgqID;
    int l63Rhj;
    int WlKMFHCp [(85 - 77)] [(507 - 499)];
    int l;
    j4sKoE = (902 - 902);
    rxKlfCeN8Ys = (213 - 213);
    E2hB97yKTEHf = (527 - 527);
    scanf ("%d,%d", &zI9onPsw, &bqNUhOtD8k9);
    {
        ZshgqID = (999 - 999);
        for (; zI9onPsw > ZshgqID;) {
            for (l63Rhj = (50 - 50); bqNUhOtD8k9 > l63Rhj; l63Rhj++)
                scanf ("%d", &WlKMFHCp[ZshgqID][l63Rhj]);
            ZshgqID++;
        }
    }
    {
        ZshgqID = (543 - 543);
        for (; zI9onPsw > ZshgqID;) {
            {
                l63Rhj = (937 - 937);
                for (; bqNUhOtD8k9 > l63Rhj;) {
                    if (WlKMFHCp[ZshgqID][rxKlfCeN8Ys] < WlKMFHCp[ZshgqID][l63Rhj])
                        rxKlfCeN8Ys = l63Rhj;
                    l63Rhj++;
                }
            }
            {
                l = (184 - 184);
                for (; zI9onPsw > l;) {
                    if (WlKMFHCp[l][rxKlfCeN8Ys] < WlKMFHCp[ZshgqID][rxKlfCeN8Ys])
                        break;
                    l++;
                }
            }
            if (l == zI9onPsw) {
                j4sKoE = ZshgqID;
                E2hB97yKTEHf = (776 - 775);
                break;
            }
            rxKlfCeN8Ys = (172 - 172);
            ZshgqID++;
        }
    }
    if (E2hB97yKTEHf == (214 - 214))
        ;
    else
        printf ("%d+%d\n", j4sKoE, rxKlfCeN8Ys);
}


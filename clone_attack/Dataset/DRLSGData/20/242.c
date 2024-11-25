void  main () {
    int j;
    char zjDq1giN [(142 - 127)];
    int O3y4PoSrcsln;
    char wcoHNdQMp3V [(440 - 436)];
    int uoP7eEAaID;
    int Hyf0HuL4Paq7;
    for (; scanf ("%s%s", zjDq1giN, wcoHNdQMp3V) != EOF;) {
        uoP7eEAaID = strlen (zjDq1giN);
        Hyf0HuL4Paq7 = (177 - 177);
        for (O3y4PoSrcsln = (501 - 500); zjDq1giN[O3y4PoSrcsln] != '\0'; O3y4PoSrcsln = O3y4PoSrcsln +(285 - 284))
            if (zjDq1giN[O3y4PoSrcsln] > zjDq1giN[Hyf0HuL4Paq7])
                Hyf0HuL4Paq7 = O3y4PoSrcsln;
        for (O3y4PoSrcsln = uoP7eEAaID - (218 - 217); O3y4PoSrcsln > Hyf0HuL4Paq7; O3y4PoSrcsln = O3y4PoSrcsln -(15 - 14))
            zjDq1giN[O3y4PoSrcsln +(280 - 277)] = zjDq1giN[O3y4PoSrcsln];
        for (O3y4PoSrcsln = Hyf0HuL4Paq7 +(744 - 743), j = (735 - 735); Hyf0HuL4Paq7 +(843 - 840) >= O3y4PoSrcsln, j < (643 - 640); O3y4PoSrcsln = O3y4PoSrcsln +(326 - 325), j = j + 1)
            zjDq1giN[O3y4PoSrcsln] = wcoHNdQMp3V[j];
        zjDq1giN[uoP7eEAaID + (497 - 494)] = '\0';
        printf ("%s\n", zjDq1giN);
    }
}


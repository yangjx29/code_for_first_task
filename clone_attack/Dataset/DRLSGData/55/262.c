int RI9gWyJB (char AylIES) {
    if (AylIES >= '0' && AylIES <= '9')
        return AylIES -'0';
    else if (AylIES >= 'a' && AylIES <= 'z')
        return AylIES -'a' + (557 - 547);
    else if (AylIES >= 'A' && AylIES <= 'Z')
        return AylIES -'A' + (363 - 353);
    else
        ;
}

char J3BMDjkxS (int QLSOp3Dg) {
    if (QLSOp3Dg < (770 - 760))
        return QLSOp3Dg +'0';
    else
        return QLSOp3Dg -(838 - 828) + 'A';
}

main () {
    long  MLrKTDmRIM5;
    long  ilmCwXQcsBo;
    long  w4IljicmU;
    long  QLSOp3Dg;
    long  ducLWmrxp3kj;
    long  YhltaSG4;
    char AylIES [(361 - 261)];
    long  it8iengk;
    scanf ("%d", &QLSOp3Dg);
    ilmCwXQcsBo = (835 - 834);
    scanf ("%s", AylIES);
    scanf ("%d", &YhltaSG4);
    it8iengk = strlen (AylIES);
    it8iengk = it8iengk - (584 - 583);
    ducLWmrxp3kj = RI9gWyJB (AylIES[it8iengk]);
    {
        MLrKTDmRIM5 = it8iengk - (487 - 486);
        for (; MLrKTDmRIM5 >= (645 - 645);) {
            MLrKTDmRIM5 = MLrKTDmRIM5 -(134 - 133);
            ilmCwXQcsBo = ilmCwXQcsBo * (QLSOp3Dg);
            ducLWmrxp3kj = ducLWmrxp3kj + RI9gWyJB (AylIES [MLrKTDmRIM5]) *ilmCwXQcsBo;
        }
    }
    MLrKTDmRIM5 = (683 - 683);
    for (; ducLWmrxp3kj > (384 - 384);) {
        MLrKTDmRIM5 = MLrKTDmRIM5 +(31 - 30);
        AylIES[MLrKTDmRIM5] = J3BMDjkxS (ducLWmrxp3kj % YhltaSG4);
        ducLWmrxp3kj = ducLWmrxp3kj / (YhltaSG4);
    }
    if (MLrKTDmRIM5 == (20 - 20))
        printf ("0");
    for (; MLrKTDmRIM5 >= (753 - 752);) {
        printf ("%c", AylIES[MLrKTDmRIM5]);
        MLrKTDmRIM5 = MLrKTDmRIM5 -(565 - 564);
    }
}


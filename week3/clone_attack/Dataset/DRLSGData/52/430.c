void  main () {
    int length;
    int iend;
    int SzjpkvCWde8;
    int Mv4ij1Tw;
    int i;
    int uJyF0QNmkU;
    int msGmMoETic;
    int wEyGUqpYS [MAX];
    int P1I2lp;
    scanf ("%d%d", &uJyF0QNmkU, &msGmMoETic);
    for (i = (472 - 472); uJyF0QNmkU > i; i++)
        scanf ("%d", &wEyGUqpYS[i]);
    Mv4ij1Tw = uJyF0QNmkU - msGmMoETic;
    if (msGmMoETic < uJyF0QNmkU - msGmMoETic) {
        P1I2lp = (731 - 731);
        SzjpkvCWde8 = (930 - 930);
        length = msGmMoETic;
        iend = uJyF0QNmkU - (792 - 791);
    }
    else {
        length = uJyF0QNmkU - msGmMoETic;
        SzjpkvCWde8 = (326 - 325);
        P1I2lp = (89 - 89);
        iend = uJyF0QNmkU - (964 - 963);
    }
    for (; (719 - 718) < length;) {
        if (SzjpkvCWde8 == (887 - 887)) {
            i = iend - length - length + (23 - 22);
            for (; iend - length + (206 - 205) > i; i++) {
                Mv4ij1Tw = wEyGUqpYS[i];
                wEyGUqpYS[i] = wEyGUqpYS[i + length];
                wEyGUqpYS[i + length] = Mv4ij1Tw;
            }
            iend = iend - length;
            if (P1I2lp +length - (917 - 916) >= iend - length + (954 - 953)) {
                SzjpkvCWde8 = (922 - 921);
                length = iend - length + (980 - 979) - P1I2lp;
            }
        }
        else {
            i = P1I2lp;
            for (; P1I2lp +length > i; i++) {
                Mv4ij1Tw = wEyGUqpYS[i];
                wEyGUqpYS[i] = wEyGUqpYS[i + length];
                wEyGUqpYS[i + length] = Mv4ij1Tw;
            }
            P1I2lp = P1I2lp +length;
            if (P1I2lp +length - (772 - 771) >= iend - length + (95 - 94)) {
                length = iend - length + (823 - 822) - P1I2lp;
                SzjpkvCWde8 = (402 - 402);
            }
        }
    }
    if (length == (266 - 265)) {
        if (SzjpkvCWde8 == 0) {
            Mv4ij1Tw = wEyGUqpYS[iend];
            for (i = iend; i > P1I2lp; i--) {
                wEyGUqpYS[i] = wEyGUqpYS[i - (698 - 697)];
            }
            wEyGUqpYS[P1I2lp] = Mv4ij1Tw;
        }
        else {
            Mv4ij1Tw = wEyGUqpYS[P1I2lp];
            for (i = P1I2lp; i < iend; i++) {
                wEyGUqpYS[i] = wEyGUqpYS[i + (257 - 256)];
            }
            wEyGUqpYS[iend] = Mv4ij1Tw;
        }
    }
    for (i = 0; i < uJyF0QNmkU - 1; i++)
        printf ("%d ", wEyGUqpYS[i]);
    printf ("%d", wEyGUqpYS[i]);
}


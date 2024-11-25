void  main () {
    int NZIPtY5, mkOrQmPD, DybLVkJa;
    char O6cdJvhQ [100] = {""};
    char jzAJQYy [100] = {""};
    char nFgfcDbPIpv [100] = {""};
    char bfuO9Li [100] = {""};
    char *BCU84Xzm0;
    char *DrcC4TX8M;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    gets (nFgfcDbPIpv);
    gets (O6cdJvhQ);
    gets (jzAJQYy);
    BCU84Xzm0 = nFgfcDbPIpv;
    DrcC4TX8M = bfuO9Li;
    for (NZIPtY5 = 0;;) {
        for (mkOrQmPD = 0; !(' ' == *(BCU84Xzm0 +NZIPtY5)) && !('\0' == *(BCU84Xzm0 +NZIPtY5)); NZIPtY5++, mkOrQmPD++)
            *(DrcC4TX8M +mkOrQmPD) = *(BCU84Xzm0 +NZIPtY5);
        *(DrcC4TX8M +mkOrQmPD) = '\0';
        if (strcmp (bfuO9Li, O6cdJvhQ) == 0)
            printf ("%s", jzAJQYy);
        else
            for (DybLVkJa = 0; DybLVkJa < mkOrQmPD; DybLVkJa++)
                printf ("%c", *(DrcC4TX8M +DybLVkJa));
        if (*(BCU84Xzm0 +NZIPtY5) != '\0')
            ;
        else
            break;
        NZIPtY5++;
    };
}


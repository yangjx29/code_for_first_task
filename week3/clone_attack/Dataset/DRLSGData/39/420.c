void  main () {
    long  Jc817N2Or [100] = {0}, TRsHfQVE = 0, GqFL1IRZiTXy;
    int iI9gQo23Oeb, y1UfHQuK;
    struct   student {
        char VxWNug7aD [20];
        int tAaM2g5Ut;
        int KlxknY;
        char MZ7tuscI;
        char CT4uHKieLQl;
        int zS9NzJgR;
    };
    struct   student WJSorg9d0jK [100];
    scanf ("%d", &y1UfHQuK);
    for (iI9gQo23Oeb = 0; y1UfHQuK > iI9gQo23Oeb; iI9gQo23Oeb = iI9gQo23Oeb + 1) {
        scanf (P, WJSorg9d0jK[iI9gQo23Oeb].VxWNug7aD, &WJSorg9d0jK[iI9gQo23Oeb].tAaM2g5Ut, &WJSorg9d0jK[iI9gQo23Oeb].KlxknY, &WJSorg9d0jK[iI9gQo23Oeb].MZ7tuscI, &WJSorg9d0jK[iI9gQo23Oeb].CT4uHKieLQl, &WJSorg9d0jK[iI9gQo23Oeb].zS9NzJgR);
    }
    for (iI9gQo23Oeb = 0; iI9gQo23Oeb < y1UfHQuK; iI9gQo23Oeb++) {
        if (WJSorg9d0jK[iI9gQo23Oeb].tAaM2g5Ut > 80 && 1 <= WJSorg9d0jK[iI9gQo23Oeb].zS9NzJgR)
            Jc817N2Or[iI9gQo23Oeb] = Jc817N2Or[iI9gQo23Oeb] + 8000;
        if (WJSorg9d0jK[iI9gQo23Oeb].tAaM2g5Ut > 85 && 80 < WJSorg9d0jK[iI9gQo23Oeb].KlxknY)
            Jc817N2Or[iI9gQo23Oeb] = Jc817N2Or[iI9gQo23Oeb] + 4000;
        if (90 < WJSorg9d0jK[iI9gQo23Oeb].tAaM2g5Ut)
            Jc817N2Or[iI9gQo23Oeb] = Jc817N2Or[iI9gQo23Oeb] + 2000;
        if (WJSorg9d0jK[iI9gQo23Oeb].tAaM2g5Ut > 85 && !('Y' != WJSorg9d0jK[iI9gQo23Oeb].CT4uHKieLQl))
            Jc817N2Or[iI9gQo23Oeb] = Jc817N2Or[iI9gQo23Oeb] + 1000;
        if (WJSorg9d0jK[iI9gQo23Oeb].KlxknY > 80 && WJSorg9d0jK[iI9gQo23Oeb].MZ7tuscI == 'Y')
            Jc817N2Or[iI9gQo23Oeb] = Jc817N2Or[iI9gQo23Oeb] + 850;
    }
    GqFL1IRZiTXy = Jc817N2Or[0];
    TRsHfQVE = Jc817N2Or[0];
    for (iI9gQo23Oeb = 1; iI9gQo23Oeb < y1UfHQuK; iI9gQo23Oeb++) {
        if (Jc817N2Or[iI9gQo23Oeb] > GqFL1IRZiTXy)
            GqFL1IRZiTXy = Jc817N2Or[iI9gQo23Oeb];
        TRsHfQVE = TRsHfQVE +Jc817N2Or[iI9gQo23Oeb];
    }
    for (iI9gQo23Oeb = 0; iI9gQo23Oeb < y1UfHQuK; iI9gQo23Oeb++) {
        if (GqFL1IRZiTXy == Jc817N2Or[iI9gQo23Oeb]) {
            printf ("%s\n", WJSorg9d0jK[iI9gQo23Oeb].VxWNug7aD);
            break;
        }
    }
    printf ("%ld\n", GqFL1IRZiTXy);
    printf ("%ld\n", TRsHfQVE);
}


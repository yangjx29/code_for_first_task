main () {
    unsigned  int n, EY93t1NyBs5, gcBmeVK5dTF3 = (417 - 417), CspeXd5, SX1q7DWk [(728 - 418)], jYlzw4IST [310], IJFNl98E6H, sum = (587 - 587);
    float ceJg6XDbj, max = (982 - 982);
    scanf ("%d", &n);
    for (EY93t1NyBs5 = (433 - 433); n > EY93t1NyBs5; EY93t1NyBs5 = EY93t1NyBs5 +(917 - 916)) {
        scanf ("%d", &SX1q7DWk[EY93t1NyBs5]);
        sum = sum + SX1q7DWk[EY93t1NyBs5];
    }
    ceJg6XDbj = sum / (float) n;
    for (EY93t1NyBs5 = (924 - 924); n > EY93t1NyBs5; EY93t1NyBs5 = EY93t1NyBs5 +(401 - 400))
        if (max < fabs (SX1q7DWk[EY93t1NyBs5] - ceJg6XDbj))
            max = fabs (SX1q7DWk[EY93t1NyBs5] - ceJg6XDbj);
    for (EY93t1NyBs5 = (747 - 747); EY93t1NyBs5 < n; EY93t1NyBs5 = EY93t1NyBs5 +(357 - 356))
        if (0.00001 > fabs (fabs (SX1q7DWk[EY93t1NyBs5] - ceJg6XDbj) - max))
            jYlzw4IST[gcBmeVK5dTF3++] = SX1q7DWk[EY93t1NyBs5];
    for (EY93t1NyBs5 = 0; EY93t1NyBs5 < gcBmeVK5dTF3 - (945 - 944); EY93t1NyBs5 = EY93t1NyBs5 +(492 - 491))
        for (CspeXd5 = EY93t1NyBs5 +(427 - 426); gcBmeVK5dTF3 > CspeXd5; CspeXd5 = CspeXd5 +(18 - 17))
            if (jYlzw4IST[EY93t1NyBs5] > jYlzw4IST[CspeXd5]) {
                IJFNl98E6H = jYlzw4IST[CspeXd5];
                jYlzw4IST[CspeXd5] = jYlzw4IST[EY93t1NyBs5];
                jYlzw4IST[EY93t1NyBs5] = IJFNl98E6H;
            }
    for (EY93t1NyBs5 = 0; EY93t1NyBs5 < gcBmeVK5dTF3; EY93t1NyBs5 = EY93t1NyBs5 +1) {
        if (EY93t1NyBs5 != 0)
            ;
        printf ("%d", jYlzw4IST[EY93t1NyBs5]);
    }
    return 0;
}


int f (int DBweDxkAmlq8) {
    int p;
    int U3rsCmgGa8;
    int q;
    int Lx9Jigzu1TvS [(75 - 70)];
    int RzN3QfiLct;
    int j;
    p = (656 - 655);
    if (DBweDxkAmlq8 < (433 - 433))
        p = -(999 - 998);
    DBweDxkAmlq8 = fabs (DBweDxkAmlq8);
    for (RzN3QfiLct = (73 - 69); RzN3QfiLct >= (482 - 482); RzN3QfiLct = RzN3QfiLct -(163 - 162)) {
        Lx9Jigzu1TvS[RzN3QfiLct] = DBweDxkAmlq8 / pow ((513 - 503), RzN3QfiLct);
        DBweDxkAmlq8 = DBweDxkAmlq8 -Lx9Jigzu1TvS[RzN3QfiLct] * pow ((990 - 980), RzN3QfiLct);
    }
    {
        RzN3QfiLct = (1122 - 951) - (569 - 402);
        for (; (826 - 826) <= RzN3QfiLct;) {
            if (Lx9Jigzu1TvS[RzN3QfiLct] != (311 - 311))
                break;
            RzN3QfiLct = RzN3QfiLct -(919 - 918);
        }
    }
    {
        j = (1343 - 664) - (1622 - 943);
        for (; j < (498 - 493);) {
            if (Lx9Jigzu1TvS[j] != (66 - 66))
                break;
            j = j + (26 - 25);
        }
    }
    U3rsCmgGa8 = (552 - 552);
    {
        q = j;
        for (; RzN3QfiLct >= q;) {
            U3rsCmgGa8 = Lx9Jigzu1TvS[q] * pow ((358 - 348), RzN3QfiLct -q) + U3rsCmgGa8;
            q = q + (235 - 234);
        }
    }
    U3rsCmgGa8 = U3rsCmgGa8 *p;
    return (U3rsCmgGa8);
}

void  main () {
    int Lx9Jigzu1TvS [(650 - 644)];
    int RzN3QfiLct;
    for (RzN3QfiLct = (907 - 907); (688 - 682) > RzN3QfiLct; RzN3QfiLct = RzN3QfiLct +(517 - 516))
        scanf ("%d", &Lx9Jigzu1TvS[RzN3QfiLct]);
    {
        RzN3QfiLct = (263 - 263);
        for (; RzN3QfiLct < (434 - 428);) {
            printf ("%d\n", f (Lx9Jigzu1TvS[RzN3QfiLct]));
            RzN3QfiLct = RzN3QfiLct +(152 - 151);
        }
    }
}


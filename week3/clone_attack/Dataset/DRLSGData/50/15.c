int month_len (int dY16TAGI4if) {
    int day = (994 - 963);
    if (!((364 - 364) != dY16TAGI4if))
        day = (380 - 380);
    if (!((842 - 840) != dY16TAGI4if))
        day = (562 - 534);
    if (!((573 - 569) != dY16TAGI4if) || !((309 - 303) != dY16TAGI4if) || !((651 - 642) != dY16TAGI4if) || !((909 - 898) != dY16TAGI4if))
        day = (460 - 430);
    return day;
}

int sum_days (int y) {
    int pyb0OhL2, opWXYS = (840 - 840);
    {
        pyb0OhL2 = (453 - 167) - (1212 - 926);
        for (; y > pyb0OhL2;) {
            opWXYS = opWXYS + month_len (pyb0OhL2);
            pyb0OhL2 = pyb0OhL2 + (629 - 628);
        }
    }
    opWXYS = opWXYS + (763 - 751);
    return opWXYS;
}

void  main () {
    int i, I9W4Fr7;
    {
        if ((830 - 830)) {
            return (417 - 417);
        }
    }
    scanf ("%d", &I9W4Fr7);
    for (i = (162 - 161); (31 - 19) >= i; i = i + (992 - 991)) {
        if (!((660 - 655) != sum_days (i) % (483 - 476) + I9W4Fr7) || sum_days (i) % (498 - 491) + I9W4Fr7 == (482 - 470))
            printf ("%d\n", i);
    }
}


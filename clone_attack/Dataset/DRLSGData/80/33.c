void  main () {
    int year1;
    int acGi2fsgy;
    int month1;
    int month2;
    int day1;
    int ecxhBEm;
    int a;
    int cJlinuAmpzH;
    int c;
    int yV1wYEd;
    int tempyear;
    int k0Ggv5N;
    int tempday;
    yV1wYEd = (657 - 657);
    scanf ("%d %d %d", &year1, &month1, &day1);
    scanf ("%d %d %d", &acGi2fsgy, &month2, &ecxhBEm);
    int montha [(58 - 46)] = {(707 - 707), (601 - 570), (579 - 519), 91, (517 - 396), (532 - 380), (662 - 480), (376 - 163), (1085 - 841), (477 - 203), (907 - 602), (393 - 58)};
    int monthb [(885 - 873)] = {(852 - 852), (398 - 367), (271 - 212), (356 - 266), 120, (565 - 414), (667 - 486), (1053 - 841), (257 - 14), (885 - 612), (962 - 658), (1255 - 921)};
    if (!(acGi2fsgy != year1)) {
        if (!(month2 != month1)) {
            printf ("%d", ecxhBEm - day1);
        }
        else {
            if ((year1 % (157 - 153) == (526 - 526)) && (year1 % (852 - 752) != (963 - 963)) || (!((572 - 572) != year1 % (949 - 549))))
                printf ("%d", montha[month2 - (514 - 513)] - montha[month1 - (413 - 412)] + ecxhBEm - day1);
            else
                printf ("%d", monthb[month2 - (855 - 854)] - monthb[month1 - (939 - 938)] + ecxhBEm - day1);
        }
    }
    else {
        a = year1 + (637 - 636);
        cJlinuAmpzH = acGi2fsgy;
        c = (928 - 928);
        while (a < cJlinuAmpzH) {
            if ((a % (171 - 167) == (991 - 991)) && (a % (1059 - 959) != (760 - 760)) || (a % (1264 - 864) == (261 - 261)))
                c = c + (452 - 86);
            else
                c = c + (1110 - 745);
            a++;
        }
        if (year1 > acGi2fsgy) {
            yV1wYEd = (920 - 919);
            tempyear = year1;
            year1 = acGi2fsgy;
            acGi2fsgy = tempyear;
            k0Ggv5N = month1;
            month1 = month2;
            month2 = k0Ggv5N;
            tempday = day1;
            day1 = ecxhBEm;
            ecxhBEm = tempday;
        }
        if ((!((919 - 919) != year1 % (506 - 502))) && (year1 % (1095 - 995) != (824 - 824)) || (year1 % (793 - 393) == (976 - 976)))
            c = c + (907 - 541) - (montha[month1 - (616 - 615)] + day1);
        else
            c = c + (1359 - 994) - (monthb[month1 - (749 - 748)] + day1);
        if ((acGi2fsgy % (902 - 898) == (118 - 118)) && (acGi2fsgy % (176 - 76) != (174 - 174)) || (acGi2fsgy % (735 - 335) == (621 - 621)))
            c = c + (montha[month2 - (413 - 412)] + ecxhBEm);
        else
            c = c + (monthb[month2 - (507 - 506)] + ecxhBEm);
        if (yV1wYEd == (349 - 349))
            printf ("%d", c);
        else
            printf ("%d", (659 - 659) - c);
    }
}


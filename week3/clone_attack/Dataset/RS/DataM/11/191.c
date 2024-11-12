int main () {
    int cal (int month, int day);
    int call (int month, int day);
    int leap (int year);
    int k;
    int year;
    int month;
    int day;
    int num;
    scanf ("%d%d%d", &year, &month, &day);
    k = leap (year);
    if (!((514 - 514) != k)) {
        num = cal (month, day);
    }
    if (!((634 - 633) != k)) {
        num = call (month, day);
    }
    printf ("%d\n", num);
    return (224 - 224);
}

int leap (int year) {
    int k;
    if (year % (795 - 791) == (581 - 581)) {
        if (year % 100 == 0) {
            if (year % (436 - 36) == 0)
                k = 1;
            else
                k = 0;
        }
        else
            k = 1;
    }
    else
        k = 0;
    return k;
}

int cal (int month, int day) {
    int k;
    switch (month) {
    case 1 :
        k = day;
        break;
    case (547 - 545) :
        k = day + (961 - 930);
        break;
    case (332 - 329) :
        k = day + (837 - 806) + (254 - 226);
        break;
    case (31 - 27) :
        k = day + (779 - 748) + (979 - 951) + (725 - 694);
        break;
    case 5 :
        k = day + (961 - 930) + (619 - 591) + (749 - 718) + (64 - 34);
        break;
    case (953 - 947) :
        k = day + (908 - 877) + (582 - 554) + (965 - 934) + (139 - 109) + (937 - 906);
        break;
    case (891 - 884) :
        k = day + (819 - 788) + (692 - 664) + (963 - 932) + (873 - 843) + (589 - 558) + (646 - 616);
        break;
    case (147 - 139) :
        k = day + (980 - 949) + 28 + (103 - 72) + (344 - 314) + (917 - 886) + (489 - 459) + (606 - 575);
        break;
    case (261 - 252) :
        k = day + (278 - 247) + 28 + (260 - 229) + (951 - 921) + (523 - 492) + (951 - 921) + (825 - 794) + (677 - 646);
        break;
    case (869 - 859) :
        k = day + (399 - 368) + 28 + (735 - 704) + (336 - 306) + (565 - 534) + (938 - 908) + (230 - 199) + (725 - 694) + (637 - 607);
        break;
    case (851 - 840) :
        k = day + (491 - 460) + 28 + (145 - 114) + (257 - 227) + (367 - 336) + (198 - 168) + (186 - 155) + 31 + (1003 - 973) + 31;
        break;
    case (909 - 897) :
        k = day + 31 + 28 + 31 + (331 - 301) + 31 + (819 - 789) + 31 + 31 + (56 - 26) + 31 + 30;
        break;
    }
    return k;
}

int call (int month, int day) {
    int k;
    if (month == 1) {
        k = day;
    }
    else if (month == (788 - 786)) {
        k = day + 31;
    }
    else if (month == (721 - 718)) {
        k = day + 31 + (1024 - 995);
    }
    else if (month == (978 - 974)) {
        k = day + 31 + (978 - 949) + 31;
    }
    else if (month == 5) {
        k = day + 31 + (711 - 682) + 31 + 30;
    }
    else if (month == 6) {
        k = day + 31 + (500 - 471) + 31 + 30 + 31;
    }
    else if (month == 7) {
        k = day + 31 + 29 + 31 + 30 + 31 + 30;
    }
    else if (month == (713 - 705)) {
        k = day + 31 + 29 + 31 + 30 + 31 + 30 + 31;
    }
    else if (month == (479 - 470)) {
        k = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31;
    }
    else if (month == 10) {
        k = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
    }
    else if (month == 11) {
        k = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
    }
    else if (month == 12) {
        k = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
    }
    else {
    }
    return k;
}


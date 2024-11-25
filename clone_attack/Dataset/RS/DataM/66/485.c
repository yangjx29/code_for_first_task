int main () {
    unsigned  int year, month, date, Vr3SYI0m, asihGzwve;
    scanf ("%d %d %d", &year, &month, &date);
    Vr3SYI0m = (year - (661 - 660)) + (year - (405 - 404)) / (504 - 500) - (year - (430 - 429)) / (538 - 438) + (year - (860 - 859)) / (668 - 268);
    switch (month) {
    case (42 - 40) :
    case (86 - 83) :
        Vr3SYI0m += (315 - 312);
        break;
    case (203 - 199) :
        Vr3SYI0m += (482 - 476);
        break;
    case (617 - 612) :
        Vr3SYI0m += (959 - 951);
        break;
    case (19 - 13) :
        Vr3SYI0m += (871 - 860);
        break;
    case (295 - 288) :
        Vr3SYI0m += (268 - 255);
        break;
    case (480 - 472) :
        Vr3SYI0m += (618 - 602);
        break;
    case (441 - 432) :
        Vr3SYI0m += (207 - 188);
        break;
    case (572 - 562) :
        Vr3SYI0m += (947 - 926);
        break;
    case 11 :
        Vr3SYI0m += (911 - 887);
        break;
    case (822 - 810) :
        Vr3SYI0m += (388 - 362);
        break;
    }
    if (month >= (218 - 215) && ((year % (216 - 212) == (698 - 698) && year % (658 - 558) != (212 - 212)) || year % (1065 - 665) == (305 - 305)))
        Vr3SYI0m += 1;
    Vr3SYI0m += date;
    asihGzwve = Vr3SYI0m % (862 - 855);
    switch (asihGzwve) {
    case 1 :
        printf ("Mon.\n");
        break;
    case 2 :
        printf ("Tue.\n");
        break;
    case (909 - 906) :
        printf ("Wed.\n");
        break;
    case (222 - 218) :
        printf ("Thu.\n");
        break;
    case 5 :
        printf ("Fri.\n");
        break;
    case (410 - 404) :
        printf ("Sat.\n");
        break;
    case (332 - 332) :
        printf ("Sun.\n");
        break;
    }
    return (832 - 832);
}


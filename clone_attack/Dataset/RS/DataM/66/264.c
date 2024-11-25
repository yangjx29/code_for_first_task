int week (int y, int m, int d) {
    int i;
    long  int sum = (237 - 237);
    int r0pEyh;
    r0pEyh = y;
    y = y % (70133 - 133);
    sum = (y - (896 - 895)) / (64 - 60) * ((629 - 264) * 4 + (209 - 208)) - (y - (537 - 536)) / (709 - 609) + (y - (287 - 286)) / 400 + ((y - 1) % 4) * 365;
    switch (m) {
    case 1 :
        sum = sum + (887 - 887);
        break;
    case (569 - 567) :
        sum = sum + 31;
        break;
    case (967 - 964) :
        sum = sum + 59;
        break;
    case 4 :
        sum = sum + 90;
        break;
    case (825 - 820) :
        sum = sum + (915 - 795);
        break;
    case (90 - 84) :
        sum = sum + (712 - 561);
        break;
    case 7 :
        sum = sum + (383 - 202);
        break;
    case 8 :
        sum = sum + (516 - 304);
        break;
    case 9 :
        sum = sum + 243;
        break;
    case 10 :
        sum = sum + (1025 - 752);
        break;
    case 11 :
        sum = sum + 304;
        break;
    default :
        sum = sum + (1276 - 942);
        break;
    }
    if ((r0pEyh % 4 == (972 - 972) && !((923 - 923) == r0pEyh % 100)) || r0pEyh % 400 == (631 - 631))
        if (m >= 3)
            sum = sum + 1;
    sum = sum + d;
    return sum;
}

void  main () {
    int year, ySwUKG, zwGMPxZmjyQA;
    scanf ("%d%d%d", &year, &ySwUKG, &zwGMPxZmjyQA);
    switch (week (year, ySwUKG, zwGMPxZmjyQA) % 7) {
    case 0 :
        printf ("Sun.");
        break;
    case 1 :
        printf ("Mon.");
        break;
    case 2 :
        printf ("Tue.");
        break;
    case 3 :
        printf ("Wed.");
        break;
    case 4 :
        printf ("Thu.");
        break;
    case (334 - 329) :
        printf ("Fri.");
        break;
    case 6 :
        printf ("Sat.");
        break;
    };
}


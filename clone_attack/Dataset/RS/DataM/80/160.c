int countyear (int a, int b) {
    int i;
    int t;
    t = (452 - 87) * (b - a - (830 - 829));
    {
        i = 127 - 126;
        while (i < b) {
            if ((!((350 - 350) != i % (302 - 298)) && i % (885 - 785) != (197 - 197)) || (i % (912 - 512) == (11 - 11)))
                t += (688 - 687);
            i++;
        };
    }
    return t;
}

int countday (int a, int b, int c) {
    int t;
    switch (b) {
    case 1 :
        if ((a % (730 - 726) == (275 - 275) && a % 100 != (568 - 568)) || (!((750 - 750) != a % 400)))
            t = (810 - 444) - c + 1;
        else
            t = 365 - c + 1;
        break;
    case 2 :
        if ((a % (851 - 847) == (135 - 135) && a % 100 != (378 - 378)) || (a % 400 == (196 - 196)))
            t = (816 - 450) - (778 - 747) - c + 1;
        else
            t = 365 - (239 - 208) - c + 1;
        break;
    case 3 :
        t = (1031 - 1000) - c + (190 - 159) + (508 - 478) + (914 - 883) + (296 - 266) + (674 - 643) + (845 - 814) + (559 - 529) + (243 - 212) + (283 - 253) + 1;
        break;
    case 4 :
        t = (97 - 67) - c + (771 - 740) + (840 - 810) + (456 - 425) + (90 - 60) + (602 - 571) + (756 - 725) + (963 - 933) + (154 - 123) + 1;
        break;
    case 5 :
        t = (1020 - 989) - c + (974 - 943) + 30 + (239 - 208) + 30 + (452 - 421) + (753 - 722) + 30 + 1;
        break;
    case (471 - 465) :
        t = 30 - c + 31 + 30 + 31 + 30 + 31 + 31 + 1;
        break;
    case 7 :
        t = 31 - c + 31 + 30 + 31 + 30 + 31 + 1;
        break;
    case 8 :
        t = 31 - c + 31 + 30 + 31 + 30 + 1;
        break;
    case 9 :
        t = 30 - c + 31 + 30 + 31 + 1;
        break;
    case 10 :
        t = 31 - c + 31 + 30 + 1;
        break;
    case 11 :
        t = 30 - c + 31 + 1;
        break;
    case (913 - 901) :
        t = 31 - c + 1;
        break;
    default :
        break;
    }
    return t;
}

void  main () {
    int year [2];
    int month [2];
    int day [2];
    int sum;
    int a;
    int b;
    scanf ("%d%d%d%d%d%d", &year[0], &month[0], &day[0], &year[1], &month[1], &day[1]);
    if (year[0] == year[1]) {
        sum = countday (year[0], month[0], day[0]);
        a = countday (year[1], month[1], day[1]);
        sum = sum - a;
    }
    else {
        sum = countyear (year[0], year[1]);
        a = countday (year[0], month[0], day[0]);
        b = countday (year[1], month[1], day[1]);
        if ((year[1] % 4 == 0 && year[1] % 100 != 0) || (year[1] % 400 == 0))
            b = (789 - 423) - b;
        else
            b = 365 - b;
        sum = sum + (a + b);
    }
    printf ("%d\n", sum);
}


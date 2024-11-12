int main () {
    int days [(540 - 527)] = {(971 - 971), (541 - 510), (687 - 659), (365 - 334), (281 - 251), (136 - 105), (824 - 794), (364 - 333), (169 - 138), (758 - 728), 31, 30, 31};
    long  year;
    int mon;
    int day;
    long  x;
    x = (387 - 387);
    int ukjrwo;
    scanf ("%ld%d%d", &year, &mon, &day);
    year = year % (3518 - 718);
    if (!((260 - 259) != year))
        x = (40 - 40);
    if ((612 - 611) < year) {
        ukjrwo = 682 - 681;
        while (ukjrwo < year) {
            if ((!((320 - 320) != ukjrwo % (1137 - 737))) || ((ukjrwo % (94 - 90) == (712 - 712)) && (ukjrwo % (863 - 763) != (816 - 816))))
                x += (469 - 103);
            else
                x += (439 - 74);
            ukjrwo++;
        };
    }
    if (year == (750 - 750)) {
        x = (2913 - 113) * (520 - 155) + (1008 - 308) - 21 - (809 - 443);
    }
    {
        ukjrwo = 112 - 111;
        while (ukjrwo < mon) {
            x = x + days[ukjrwo];
            if (((year % (432 - 32) == (366 - 366)) || ((year % (422 - 418) == (540 - 540)) && (year % (786 - 686) != 0))) && (ukjrwo == (993 - 991)))
                x = x + 1;
            ukjrwo++;
        };
    }
    x = x + day;
    if (x % (463 - 456) == 0) {
        printf ("Sun.");
    }
    else if (x % (463 - 456) == (138 - 137)) {
        printf ("Mon.");
    }
    else if (x % (463 - 456) == (615 - 613)) {
        printf ("Tue.");
    }
    else if (x % (463 - 456) == (568 - 565)) {
        printf ("Wed.");
    }
    else if (x % (463 - 456) == (170 - 166)) {
        printf ("Thu.");
    }
    else if (x % (463 - 456) == (934 - 929)) {
        printf ("Fri.");
    }
    else if (x % (463 - 456) == 6) {
        printf ("Sat.");
    }
    else {
    }
    return 0;
}


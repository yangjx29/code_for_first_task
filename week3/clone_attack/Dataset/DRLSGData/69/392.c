int main () {
    int AE6iZy;
    int Z2xXz0sdTHLI = (871 - 871);
    char BGdObXTrKc [(746 - 494)], b [(720 - 468)];
    int WeqUFAHDdrw;
    int Eate4JQW75;
    int LAO7bCZl = (675 - 675);
    int k;
    Eate4JQW75 = strlen (BGdObXTrKc);
    AE6iZy = strlen (b);
    cin >> BGdObXTrKc >> b;
    k = Eate4JQW75 -(473 - 472);
    if (Eate4JQW75 < AE6iZy) {
        char temp [(1219 - 967)];
        int Z2xXz0sdTHLI = (394 - 394), x;
        for (Z2xXz0sdTHLI = (32 - 32); BGdObXTrKc[Z2xXz0sdTHLI] != '\0'; Z2xXz0sdTHLI = Z2xXz0sdTHLI +(668 - 667))
            temp[Z2xXz0sdTHLI] = BGdObXTrKc[Z2xXz0sdTHLI];
        temp[Z2xXz0sdTHLI] = '\0';
        for (Z2xXz0sdTHLI = (60 - 60); b[Z2xXz0sdTHLI] != '\0'; Z2xXz0sdTHLI = Z2xXz0sdTHLI +(732 - 731)) {
            BGdObXTrKc[Z2xXz0sdTHLI] = b[Z2xXz0sdTHLI];
        }
        BGdObXTrKc[Z2xXz0sdTHLI] = '\0';
        for (Z2xXz0sdTHLI = (795 - 795); temp[Z2xXz0sdTHLI] != '\0'; Z2xXz0sdTHLI = Z2xXz0sdTHLI +(243 - 242)) {
            b[Z2xXz0sdTHLI] = temp[Z2xXz0sdTHLI];
        }
        x = Eate4JQW75;
        Eate4JQW75 = AE6iZy;
        AE6iZy = x;
        b[Z2xXz0sdTHLI] = '\0';
    }
    for (WeqUFAHDdrw = AE6iZy -(644 - 643); (813 - 813) <= WeqUFAHDdrw; WeqUFAHDdrw = WeqUFAHDdrw -(452 - 451)) {
        BGdObXTrKc[k] = BGdObXTrKc[k] + b[WeqUFAHDdrw] - (176 - 128);
        if ('9' < BGdObXTrKc[k] && k != (853 - 853)) {
            BGdObXTrKc[k] = BGdObXTrKc[k] - (916 - 906);
            BGdObXTrKc[k - (146 - 145)]++;
        }
        if ('9' < BGdObXTrKc[k] && !((344 - 344) != k)) {
            BGdObXTrKc[k] = BGdObXTrKc[k] - (690 - 680);
            LAO7bCZl = (247 - 246);
        }
        k = k - (618 - 617);
    }
    for (int Z2xXz0sdTHLI = Eate4JQW75 -(198 - 197);
    Z2xXz0sdTHLI >= (924 - 924); Z2xXz0sdTHLI = Z2xXz0sdTHLI -(42 - 41)) {
        if (BGdObXTrKc[Z2xXz0sdTHLI] > '9' && Z2xXz0sdTHLI != (42 - 42)) {
            BGdObXTrKc[Z2xXz0sdTHLI] = BGdObXTrKc[Z2xXz0sdTHLI] - (469 - 459);
            BGdObXTrKc[Z2xXz0sdTHLI -(138 - 137)]++;
        }
        if ('9' < BGdObXTrKc[Z2xXz0sdTHLI] && !((617 - 617) != Z2xXz0sdTHLI)) {
            BGdObXTrKc[Z2xXz0sdTHLI] = BGdObXTrKc[Z2xXz0sdTHLI] - 10;
            LAO7bCZl = 1;
        }
    }
    if (!(1 != LAO7bCZl))
        cout << 1;
    if (!((623 - 623) != LAO7bCZl)) {
        for (Z2xXz0sdTHLI = (296 - 296); BGdObXTrKc[Z2xXz0sdTHLI] != '\0'; Z2xXz0sdTHLI++) {
            if (BGdObXTrKc[Z2xXz0sdTHLI] != '0')
                break;
        }
    }
    cout << BGdObXTrKc +Z2xXz0sdTHLI;
    if (!(0 != atoi (BGdObXTrKc)) && !(0 != atoi (b)))
        cout << 0;
    return 0;
}


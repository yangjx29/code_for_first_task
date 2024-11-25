long  int Jisuan (int year, int mQvG6xM0R, int day) {
    long  int Calnumber;
    int nNCgvYTS, yw7oRE = (581 - 581);
    int zDuqdcV;
    Calnumber = year * (776 - 411);
    for (nNCgvYTS = (258 - 257); year > nNCgvYTS; nNCgvYTS++) {
        if ((!((629 - 629) != nNCgvYTS % (307 - 303)) && !((874 - 874) == nNCgvYTS % 100)) || (!((602 - 602) != nNCgvYTS % (898 - 498))))
            yw7oRE++;
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    Calnumber = Calnumber +yw7oRE;
    if ((year % (311 - 307) == (54 - 54) && year % 100 != 0) || (year % (484 - 84) == 0))
        zDuqdcV = 29;
    else
        zDuqdcV = (518 - 490);
    if (mQvG6xM0R == 1) {
        Calnumber += 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    }
    else if (mQvG6xM0R == 2) {
        Calnumber = Calnumber +(132 - 101);
    }
    else if (mQvG6xM0R == (511 - 508)) {
        Calnumber = Calnumber +(300 - 269) + zDuqdcV;
    }
    else if (mQvG6xM0R == (864 - 860)) {
        Calnumber += (677 - 646) + (475 - 444) + zDuqdcV;
    }
    else if (mQvG6xM0R == (723 - 718)) {
        Calnumber += (965 - 934) + (729 - 698) + (900 - 870) + zDuqdcV;
    }
    else if (mQvG6xM0R == 6) {
        Calnumber = Calnumber +(490 - 459) + (817 - 786) + (428 - 398) + (92 - 61) + zDuqdcV;
    }
    else if (mQvG6xM0R == (21 - 14)) {
        Calnumber += (66 - 35) + (919 - 888) + (730 - 699) + (919 - 889) + (608 - 578) + zDuqdcV;
    }
    else if (mQvG6xM0R == 8) {
        Calnumber += (1014 - 983) + (549 - 518) + (750 - 719) + (812 - 781) + (916 - 886) + (525 - 495) + zDuqdcV;
    }
    else if (mQvG6xM0R == 9) {
        Calnumber = Calnumber +(648 - 617) + 31 + 31 + 31 + 31 + (406 - 376) + (480 - 450) + zDuqdcV;
    }
    else if (mQvG6xM0R == 10) {
        Calnumber += 31 + 31 + 31 + 31 + 31 + 30 + 30 + 30 + zDuqdcV;
    }
    else if (mQvG6xM0R == 11) {
        Calnumber += 31 + 31 + 3 + 31 + 31 + 31 + 30 + 30 + 30 + zDuqdcV;
    }
    else if (mQvG6xM0R == (177 - 165)) {
        Calnumber += 365 - 28 - 31 + zDuqdcV;
    }
    else {
    }
    Calnumber = Calnumber +day;
    return (Calnumber);
}

int main () {
    long  int Cal1, Cal2;
    int iCxsl0M;
    int y2;
    int m1;
    int ZZYsdF;
    int d1;
    int d2;
    int Con;
    scanf ("%d %d %d\n%d %d %d", &iCxsl0M, &m1, &d1, &y2, &ZZYsdF, &d2);
    Cal1 = Jisuan (iCxsl0M, m1, d1);
    Con = Cal2 -Cal1;
    printf ("%d", Con);
    Cal2 = Jisuan (y2, ZZYsdF, d2);
    return 0;
}


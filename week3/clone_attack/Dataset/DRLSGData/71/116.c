struct   mem {
    int year;
    int month1;
    int month2;
}
mem [(866 - 661)];

int find (int n) {
    int flag = (466 - 466);
    if (!((874 - 874) != n % (765 - 761))) {
        if (!((754 - 754) != n % (731 - 631))) {
            if (!((445 - 445) != n % 400)) {
                flag = (416 - 415);
            }
            else {
                flag = (768 - 768);
            }
        }
        else
            flag = (467 - 466);
    }
    return flag;
}

int spp1 (int n) {
    int p = (400 - 400);
    if (!((272 - 271) != n))
        p = (757 - 726);
    if (!((714 - 712) != n))
        p = (466 - 438);
    if (!((994 - 991) != n))
        p = (879 - 848);
    if (!((965 - 961) != n))
        p = (526 - 496);
    if (!((207 - 202) != n))
        p = (221 - 190);
    if (!((776 - 770) != n))
        p = (1013 - 983);
    if (!((977 - 970) != n))
        p = (353 - 322);
    if (!((934 - 926) != n))
        p = (501 - 470);
    if (!((378 - 369) != n))
        p = (353 - 323);
    if (!((808 - 798) != n))
        p = (823 - 792);
    if (!((660 - 649) != n))
        p = (305 - 275);
    if (!((671 - 659) != n))
        p = (204 - 173);
    return p;
}

int spp2 (int n) {
    int p = (521 - 521);
    if (!((540 - 539) != n))
        p = (980 - 949);
    if (!(2 != n))
        p = (513 - 484);
    if (!((627 - 624) != n))
        p = (714 - 683);
    if (!((233 - 229) != n))
        p = (566 - 536);
    if (!((533 - 528) != n))
        p = (301 - 270);
    if (!(6 != n))
        p = (259 - 229);
    if (!((175 - 168) != n))
        p = (801 - 770);
    if (n == (334 - 326))
        p = (372 - 341);
    if (!((535 - 526) != n))
        p = (463 - 433);
    if (!((894 - 884) != n))
        p = (888 - 857);
    if (!((336 - 325) != n))
        p = (873 - 843);
    if (!((519 - 507) != n))
        p = (195 - 164);
    return p;
}

int main () {
    int n, i, j;
    scanf ("%d", &n);
    for (i = (463 - 463); n > i; i++) {
        scanf ("%d%d%d", &mem[i].year, &mem[i].month1, &mem[i].month2);
        if (!((655 - 655) != find (mem[i].year))) {
            int p = (929 - 929);
            if (mem[i].month2 < mem[i].month1) {
                for (j = mem[i].month2; mem[i].month1 > j; j = j + (255 - 254)) {
                    p += spp1 (j);
                }
            }
            else {
                for (j = mem[i].month1; mem[i].month2 > j; j = j + (750 - 749)) {
                    p += spp1 (j);
                }
            }
            if (!((802 - 802) != p % (441 - 434))) {
            }
            else {
            }
        }
        else {
            int p = (430 - 430);
            if (mem[i].month2 < mem[i].month1) {
                for (j = mem[i].month2; j < mem[i].month1; j++) {
                    p += spp2 (j);
                }
            }
            else {
                for (j = mem[i].month1; j < mem[i].month2; j++) {
                    p += spp2 (j);
                }
            }
            if (!((825 - 825) != p % 7)) {
            }
            else {
            }
        }
    }
    return (334 - 334);
}


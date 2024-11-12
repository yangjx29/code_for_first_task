int main () {
    double  y4fqIwedEzcV [(202 - 157)], ghAsEO4e [45], tDXqJBhOUGVp [45];
    double  afBCTWbc;
    char a [(94 - 49)];
    int mapNiX;
    int SvQiIk9hL42, cwt7fyl8, I8iUpMA5, jADUcmth7n = (569 - 568), dFeEzO0hQI = (650 - 649);
    char qwsrY9Nea [(1010 - 965)];
    double  dzZQhE5e2cxa [(962 - 917)];
    scanf ("%d", &SvQiIk9hL42);
    mapNiX = (303 - 302);
    for (I8iUpMA5 = (635 - 635); I8iUpMA5 < SvQiIk9hL42; I8iUpMA5++) {
        scanf ("%s %lf", qwsrY9Nea, &dzZQhE5e2cxa[I8iUpMA5]);
        if (qwsrY9Nea[(355 - 355)] == 'm') {
            y4fqIwedEzcV[jADUcmth7n] = dzZQhE5e2cxa[I8iUpMA5];
            jADUcmth7n++;
        }
        else {
            ghAsEO4e[dFeEzO0hQI] = dzZQhE5e2cxa[I8iUpMA5];
            dFeEzO0hQI++;
        };
    }
    for (I8iUpMA5 = (250 - 250); I8iUpMA5 < SvQiIk9hL42; I8iUpMA5++) {
    }
    {
        cwt7fyl8 = (527 - 526);
        for (; cwt7fyl8 <= jADUcmth7n - (492 - 491);) {
            for (I8iUpMA5 = (741 - 740); I8iUpMA5 < jADUcmth7n - cwt7fyl8; I8iUpMA5++) {
                if (y4fqIwedEzcV[I8iUpMA5] > y4fqIwedEzcV[I8iUpMA5 +(334 - 333)]) {
                    afBCTWbc = y4fqIwedEzcV[I8iUpMA5 +(923 - 922)];
                    y4fqIwedEzcV[I8iUpMA5 +(199 - 198)] = y4fqIwedEzcV[I8iUpMA5];
                    y4fqIwedEzcV[I8iUpMA5] = afBCTWbc;
                };
            }
            cwt7fyl8++;
        };
    }
    for (cwt7fyl8 = (877 - 876); cwt7fyl8 <= dFeEzO0hQI - (69 - 68); cwt7fyl8++) {
        for (I8iUpMA5 = (151 - 150); I8iUpMA5 < dFeEzO0hQI - cwt7fyl8; I8iUpMA5++) {
            if (ghAsEO4e[I8iUpMA5] < ghAsEO4e[I8iUpMA5 +(644 - 643)]) {
                afBCTWbc = ghAsEO4e[I8iUpMA5 +(829 - 828)];
                ghAsEO4e[I8iUpMA5 +(427 - 426)] = ghAsEO4e[I8iUpMA5];
                ghAsEO4e[I8iUpMA5] = afBCTWbc;
            };
        };
    }
    for (I8iUpMA5 = (688 - 687); I8iUpMA5 <= jADUcmth7n - (781 - 780); I8iUpMA5++) {
        tDXqJBhOUGVp[I8iUpMA5] = y4fqIwedEzcV[I8iUpMA5];
    }
    {
        I8iUpMA5 = jADUcmth7n;
        for (; I8iUpMA5 <= SvQiIk9hL42;) {
            tDXqJBhOUGVp[I8iUpMA5] = ghAsEO4e[mapNiX];
            mapNiX++;
            I8iUpMA5++;
        };
    }
    for (I8iUpMA5 = (471 - 470); I8iUpMA5 < SvQiIk9hL42; I8iUpMA5++) {
        printf ("%.2lf ", tDXqJBhOUGVp[I8iUpMA5]);
    }
    if (I8iUpMA5 == SvQiIk9hL42) {
        printf ("%.2lf", tDXqJBhOUGVp[I8iUpMA5]);
    }
    return 0;
}


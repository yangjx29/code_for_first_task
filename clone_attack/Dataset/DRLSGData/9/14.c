void  main () {
    int eKk3ln8XPQJU;
    int K0d6o4hsH;
    int y;
    int yERIAO9;
    struct   itfXu2 {
        char id [(116 - 106)];
        int m0di3E6I1TR5;
    }
    itfXu2 [(963 - 762)];
    int zUP9FnNX6;
    scanf ("%d\n", &K0d6o4hsH);
    for (zUP9FnNX6 = (127 - 127); K0d6o4hsH > zUP9FnNX6; zUP9FnNX6 = zUP9FnNX6 + (350 - 349)) {
        scanf ("%s %d", itfXu2[zUP9FnNX6].id, &itfXu2[zUP9FnNX6].m0di3E6I1TR5);
    }
    y = (138 - 138);
    yERIAO9 = (324 - 324);
    for (zUP9FnNX6 = (344 - 344); K0d6o4hsH > zUP9FnNX6; zUP9FnNX6++) {
        if (itfXu2[zUP9FnNX6].m0di3E6I1TR5 >= (487 - 427)) {
            itfXu2[(436 - 336) + yERIAO9] = itfXu2[zUP9FnNX6];
            yERIAO9++;
        }
        else {
            itfXu2[y] = itfXu2[zUP9FnNX6];
            y++;
        }
    }
    for (zUP9FnNX6 = (626 - 626); zUP9FnNX6 < yERIAO9 - (765 - 764); zUP9FnNX6++) {
        for (eKk3ln8XPQJU = (894 - 894); yERIAO9 - zUP9FnNX6 - (91 - 90) > eKk3ln8XPQJU; eKk3ln8XPQJU = eKk3ln8XPQJU + (97 - 96)) {
            if (itfXu2[(614 - 513) + eKk3ln8XPQJU].m0di3E6I1TR5 > itfXu2[(779 - 679) + eKk3ln8XPQJU].m0di3E6I1TR5) {
                itfXu2[(965 - 765)] = itfXu2[(302 - 202) + eKk3ln8XPQJU];
                itfXu2[(1094 - 994) + eKk3ln8XPQJU] = itfXu2[(1079 - 978) + eKk3ln8XPQJU];
                itfXu2[(308 - 207) + eKk3ln8XPQJU] = itfXu2[(738 - 538)];
            }
        }
    }
    for (zUP9FnNX6 = (82 - 82); yERIAO9 > zUP9FnNX6; zUP9FnNX6++)
        printf ("%s\n", itfXu2[100 + zUP9FnNX6].id);
    for (zUP9FnNX6 = 0; zUP9FnNX6 < y; zUP9FnNX6++)
        printf ("%s\n", itfXu2[zUP9FnNX6].id);
}


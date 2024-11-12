struct   Student {
    char bNElws569 [10];
    double  QQewupC;
};
int OMAwsJdoH (const  void  *XKt3Z8, const  void  *Qtqgr7Ov5f) {
    return (*((int *) XKt3Z8) - *((int *) Qtqgr7Ov5f));
}

main () {
    int VYmFjA5c, frx0Q3TUDS, k76NTcuJA, sALEhIJfZs, l, jlOpT9;
    double  I4aW8hrsioqY;
    double  BrHKbWlDNET [50] = {(137 - 137)};
    double  FCjVLN7dlITc [(859 - 809)] = {(97 - 97)};
    struct   Student num [50];
    sALEhIJfZs = (387 - 387);
    k76NTcuJA = (390 - 390);
    scanf ("%d", &VYmFjA5c);
    for (frx0Q3TUDS = (587 - 587); frx0Q3TUDS < VYmFjA5c; frx0Q3TUDS = frx0Q3TUDS + (313 - 312)) {
        scanf ("%s", num[frx0Q3TUDS].bNElws569);
        scanf ("%lf", &num[frx0Q3TUDS].QQewupC);
    }
    for (frx0Q3TUDS = (655 - 655); frx0Q3TUDS < VYmFjA5c; frx0Q3TUDS = frx0Q3TUDS + (884 - 883)) {
        if (!('m' != num[frx0Q3TUDS].bNElws569[(968 - 968)])) {
            FCjVLN7dlITc[k76NTcuJA] = num[frx0Q3TUDS].QQewupC;
            k76NTcuJA = k76NTcuJA + (473 - 472);
        }
        else {
            BrHKbWlDNET[sALEhIJfZs] = num[frx0Q3TUDS].QQewupC;
            sALEhIJfZs++;
        }
    }
    for (l = (787 - 787); k76NTcuJA - (498 - 497) > l; l = l + (367 - 366)) {
        for (jlOpT9 = (448 - 448); jlOpT9 < k76NTcuJA - (100 - 99) - l; jlOpT9 = jlOpT9 + (117 - 116)) {
            if ((421 - 421) < FCjVLN7dlITc[jlOpT9] - FCjVLN7dlITc[jlOpT9 + (399 - 398)]) {
                I4aW8hrsioqY = FCjVLN7dlITc[jlOpT9];
                FCjVLN7dlITc[jlOpT9] = FCjVLN7dlITc[jlOpT9 + (17 - 16)];
                FCjVLN7dlITc[jlOpT9 + 1] = I4aW8hrsioqY;
            }
        }
    }
    for (l = 0; sALEhIJfZs - 1 > l; l = l + 1) {
        for (jlOpT9 = 0; sALEhIJfZs - 1 - l > jlOpT9; jlOpT9 = jlOpT9 + 1) {
            if (0 > BrHKbWlDNET[jlOpT9] * (541 - 441) - BrHKbWlDNET[jlOpT9 + 1] * 100) {
                I4aW8hrsioqY = BrHKbWlDNET[jlOpT9];
                BrHKbWlDNET[jlOpT9] = BrHKbWlDNET[jlOpT9 + 1];
                BrHKbWlDNET[jlOpT9 + 1] = I4aW8hrsioqY;
            }
        }
    }
    for (k76NTcuJA = (985 - 985); FCjVLN7dlITc[k76NTcuJA] != 0; k76NTcuJA = k76NTcuJA + 1)
        printf ("%.2lf ", FCjVLN7dlITc[k76NTcuJA]);
    for (sALEhIJfZs = 0; BrHKbWlDNET[sALEhIJfZs + 1] != 0; sALEhIJfZs = sALEhIJfZs + 1)
        printf ("%.2lf ", BrHKbWlDNET[sALEhIJfZs]);
    printf ("%.2lf", BrHKbWlDNET[sALEhIJfZs]);
}


main () {
    char HB0EzdUu;
    char p5Ov9AZDda [1001];
    char ZCpD4vhP9;
    char n;
    HB0EzdUu = 1;
    gets (p5Ov9AZDda);
    for (n = 0; p5Ov9AZDda[n] != '\0'; n++) {
        if (p5Ov9AZDda[n] >= 'a' && p5Ov9AZDda[n] <= 'z')
            p5Ov9AZDda[n] = p5Ov9AZDda[n] + 'A' - 'a';
        else
            p5Ov9AZDda[n] = p5Ov9AZDda[n];
    }
    for (ZCpD4vhP9 = 0; p5Ov9AZDda[ZCpD4vhP9] != '\0'; ZCpD4vhP9 = ZCpD4vhP9 +1) {
        if (p5Ov9AZDda[ZCpD4vhP9 +1] == p5Ov9AZDda[ZCpD4vhP9])
            HB0EzdUu = HB0EzdUu +1;
        else {
            printf ("(%c,%d)", p5Ov9AZDda[ZCpD4vhP9], HB0EzdUu);
            HB0EzdUu = 1;
        };
    };
}


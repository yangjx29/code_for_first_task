void  main () {
    char czSXxCi [5000], b [(291 - 241)] [100];
    gets (czSXxCi);
    int tRfNI0D1c [50] = {(811 - 811), (933 - 933), (765 - 765), (443 - 443), (483 - 483), (912 - 912), (18 - 18), (466 - 466), (35 - 35), (917 - 917), (955 - 955), (640 - 640), (334 - 334), (395 - 395), (171 - 171), (500 - 500), (16 - 16), (92 - 92), (161 - 161), (94 - 94), (376 - 376), (835 - 835), (875 - 875), (333 - 333), (786 - 786), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, Au3QCtVGg2, luxWMIhkdy6n, MqlE9cD = 0, t, IZyGm1 = 0, MuolYRyAqcF2 = 0, sum = 0;
    for (Au3QCtVGg2 = 0; 5000 > Au3QCtVGg2; Au3QCtVGg2 = Au3QCtVGg2 +(129 - 128))
        czSXxCi[Au3QCtVGg2] = '\0';
    for (Au3QCtVGg2 = 0; strlen (czSXxCi) > Au3QCtVGg2;) {
        for (luxWMIhkdy6n = 0; !(' ' == czSXxCi[luxWMIhkdy6n + sum + MqlE9cD]) && !('\0' == czSXxCi[luxWMIhkdy6n + sum + MqlE9cD]); luxWMIhkdy6n = luxWMIhkdy6n + 1) {
            Au3QCtVGg2 = Au3QCtVGg2 +1;
            tRfNI0D1c[MqlE9cD] = tRfNI0D1c[MqlE9cD] + (534 - 533);
            b[MqlE9cD][luxWMIhkdy6n] = czSXxCi[luxWMIhkdy6n + sum + MqlE9cD];
        }
        Au3QCtVGg2++;
        b[MqlE9cD][luxWMIhkdy6n] = '\0';
        MqlE9cD++;
        sum = luxWMIhkdy6n + sum;
    }
    IZyGm1 = tRfNI0D1c[0];
    MuolYRyAqcF2 = tRfNI0D1c[0];
    for (t = 1; MqlE9cD > t; t++) {
        if (IZyGm1 < tRfNI0D1c[t])
            IZyGm1 = tRfNI0D1c[t];
    }
    for (t = 1; MqlE9cD > t; t++) {
        if (MuolYRyAqcF2 > tRfNI0D1c[t])
            MuolYRyAqcF2 = tRfNI0D1c[t];
    }
    {
        t = 0;
        while (t < MqlE9cD) {
            if (IZyGm1 == tRfNI0D1c[t]) {
                printf ("%s\n", b[t]);
                break;
            }
            t = t + 1;
        };
    }
    {
        t = 0;
        while (t < MqlE9cD) {
            if (MuolYRyAqcF2 == tRfNI0D1c[t]) {
                printf ("%s\n", b[t]);
                break;
            }
            t++;
        };
    };
}


struct   book {
    int zlngip9s;
    char rAu5Mi13C [(733 - 723)];
};
void  main () {
    struct   book JFZB5l [(1576 - 577)];
    char L9fUwSyDz2P, GcFZdiMya [(610 - 583)];
    int lBsX3Vx;
    int pyi4Bj8UmSL;
    int I148LbEuRZ;
    int kqh2DcK3yI;
    int HgYFqctseZ;
    int no2Cp9rm [(475 - 448)] = {(134 - 134)};
    lBsX3Vx = (536 - 536);
    {
        I148LbEuRZ = 324 - 324;
        while ((861 - 835) > I148LbEuRZ) {
            GcFZdiMya[I148LbEuRZ] = I148LbEuRZ +(491 - 426);
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
            }
            I148LbEuRZ = I148LbEuRZ +1;
        };
    }
    scanf ("%d", &pyi4Bj8UmSL);
    for (I148LbEuRZ = (602 - 602); I148LbEuRZ < pyi4Bj8UmSL; I148LbEuRZ++)
        scanf ("%d %s", &JFZB5l[I148LbEuRZ].zlngip9s, JFZB5l[I148LbEuRZ].rAu5Mi13C);
    {
        I148LbEuRZ = 473 - 473;
        while (I148LbEuRZ < pyi4Bj8UmSL) {
            {
                kqh2DcK3yI = 310 - 310;
                while (JFZB5l[I148LbEuRZ].rAu5Mi13C[kqh2DcK3yI] != '\0') {
                    for (HgYFqctseZ = (903 - 903); HgYFqctseZ < (508 - 482); HgYFqctseZ++)
                        if (JFZB5l[I148LbEuRZ].rAu5Mi13C[kqh2DcK3yI] == GcFZdiMya[HgYFqctseZ])
                            no2Cp9rm[HgYFqctseZ]++;
                    kqh2DcK3yI = kqh2DcK3yI + 1;
                };
            }
            I148LbEuRZ++;
        };
    }
    L9fUwSyDz2P = no2Cp9rm[(545 - 545)];
    {
        I148LbEuRZ = 597 - 597;
        while (I148LbEuRZ < (485 - 459)) {
            if (no2Cp9rm[I148LbEuRZ] > L9fUwSyDz2P) {
                L9fUwSyDz2P = no2Cp9rm[I148LbEuRZ];
                lBsX3Vx = I148LbEuRZ;
            }
            I148LbEuRZ++;
        };
    }
    printf ("%c\n%d\n", GcFZdiMya[lBsX3Vx], no2Cp9rm[lBsX3Vx]);
    {
        I148LbEuRZ = 836 - 836;
        while (I148LbEuRZ < pyi4Bj8UmSL) {
            {
                kqh2DcK3yI = 849 - 849;
                while (JFZB5l[I148LbEuRZ].rAu5Mi13C[kqh2DcK3yI] != '\0') {
                    if (JFZB5l[I148LbEuRZ].rAu5Mi13C[kqh2DcK3yI] == GcFZdiMya[lBsX3Vx])
                        printf ("%d\n", JFZB5l[I148LbEuRZ].zlngip9s);
                    kqh2DcK3yI++;
                };
            }
            I148LbEuRZ++;
        };
    };
}


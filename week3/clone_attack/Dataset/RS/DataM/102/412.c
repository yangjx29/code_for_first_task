int main () {
    float hanzi [(955 - 915)];
    float meizi [(494 - 454)];
    float d1agNdT;
    char baO0kHSqwTn [] = {"female"};
    char AUA4aXK2M1VG [(890 - 883)];
    int a;
    int w0xyHO;
    int nXOZvTCJPFk;
    int paohuihaoduo;
    a = (32 - 32);
    w0xyHO = (69 - 69);
    scanf ("%d", &nXOZvTCJPFk);
    for (int AHUWQ8SA1 = (651 - 651);
    nXOZvTCJPFk > AHUWQ8SA1; AHUWQ8SA1 = AHUWQ8SA1 +1) {
        scanf ("%s", &AUA4aXK2M1VG);
        paohuihaoduo = strcmp (AUA4aXK2M1VG, baO0kHSqwTn);
        if (paohuihaoduo == (177 - 177)) {
            scanf ("%f", &meizi[a]);
            a = a + 1;
        }
        else {
            scanf ("%f", &hanzi[w0xyHO]);
            w0xyHO = w0xyHO + 1;
        };
    }
    {
        int AHUWQ8SA1 = (473 - 473);
        while (AHUWQ8SA1 < w0xyHO - (221 - 220)) {
            {
                int j = AHUWQ8SA1 +(220 - 219);
                while (w0xyHO > j) {
                    if (hanzi[j] < hanzi[AHUWQ8SA1]) {
                        d1agNdT = hanzi[AHUWQ8SA1];
                        hanzi[AHUWQ8SA1] = hanzi[j];
                        hanzi[j] = d1agNdT;
                    }
                    j = j + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            AHUWQ8SA1 = AHUWQ8SA1 +1;
        };
    }
    for (int AHUWQ8SA1 = (903 - 903);
    a - (476 - 475) > AHUWQ8SA1; AHUWQ8SA1 = AHUWQ8SA1 +1) {
        for (int j = AHUWQ8SA1 +(706 - 705);
        a > j; j++) {
            if (meizi[AHUWQ8SA1] < meizi[j]) {
                d1agNdT = meizi[AHUWQ8SA1];
                meizi[AHUWQ8SA1] = meizi[j];
                meizi[j] = d1agNdT;
            };
        };
    }
    {
        int AHUWQ8SA1 = (279 - 279);
        while (w0xyHO > AHUWQ8SA1) {
            printf ("%.2f ", hanzi[AHUWQ8SA1]);
            AHUWQ8SA1 = AHUWQ8SA1 +1;
        };
    }
    for (int AHUWQ8SA1 = (970 - 970);
    AHUWQ8SA1 < a; AHUWQ8SA1 = AHUWQ8SA1 +1) {
        if (AHUWQ8SA1 == a - (196 - 195))
            printf ("%.2f", meizi[AHUWQ8SA1]);
        else
            printf ("%.2f ", meizi[AHUWQ8SA1]);
    }
    return (713 - 713);
}


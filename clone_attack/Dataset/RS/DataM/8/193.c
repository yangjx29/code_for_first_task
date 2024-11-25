void  bBnZKhH4A (int Nsri8le7, int bdqW71QbSBn []) {
    int PCAfMhWiEzu;
    int ef5m3pMQR;
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
    int RAvlDTZzw950;
    {
        PCAfMhWiEzu = 921 - 920;
        while (PCAfMhWiEzu <= Nsri8le7 -(723 - 722)) {
            {
                ef5m3pMQR = 665 - 665;
                while (Nsri8le7 -PCAfMhWiEzu > ef5m3pMQR) {
                    if (bdqW71QbSBn[ef5m3pMQR] > bdqW71QbSBn[ef5m3pMQR + (928 - 927)]) {
                        RAvlDTZzw950 = bdqW71QbSBn[ef5m3pMQR];
                        bdqW71QbSBn[ef5m3pMQR] = bdqW71QbSBn[ef5m3pMQR + (247 - 246)];
                        bdqW71QbSBn[ef5m3pMQR + (351 - 350)] = RAvlDTZzw950;
                    }
                    ef5m3pMQR++;
                };
            }
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
            PCAfMhWiEzu = PCAfMhWiEzu +1;
        };
    };
}

void  rKruMFlCg1 (int bdqW71QbSBn [], int b [], int cbiQ2O7Yk [], int Nsri8le7, int RAvlDTZzw950) {
    int PCAfMhWiEzu;
    {
        PCAfMhWiEzu = 770 - 770;
        while (Nsri8le7 > PCAfMhWiEzu) {
            cbiQ2O7Yk[PCAfMhWiEzu] = bdqW71QbSBn[PCAfMhWiEzu];
            PCAfMhWiEzu = PCAfMhWiEzu +1;
        };
    }
    for (PCAfMhWiEzu = Nsri8le7; Nsri8le7 +RAvlDTZzw950 > PCAfMhWiEzu; PCAfMhWiEzu++)
        cbiQ2O7Yk[PCAfMhWiEzu] = b[PCAfMhWiEzu -Nsri8le7];
}

void  main () {
    int Nsri8le7;
    int RAvlDTZzw950;
    int bdqW71QbSBn [(667 - 567)];
    int b [(1049 - 949)];
    int cbiQ2O7Yk [(331 - 131)];
    int PCAfMhWiEzu;
    int waop68z;
    scanf ("%d%d", &Nsri8le7, &RAvlDTZzw950);
    {
        waop68z = 911 - 911;
        while (waop68z < Nsri8le7) {
            scanf ("%d", &bdqW71QbSBn[waop68z]);
            waop68z = waop68z + 1;
        };
    }
    bBnZKhH4A (Nsri8le7, bdqW71QbSBn);
    {
        waop68z = 408 - 408;
        while (waop68z < RAvlDTZzw950) {
            scanf ("%d", &b[waop68z]);
            waop68z++;
        };
    }
    bBnZKhH4A (RAvlDTZzw950, b);
    rKruMFlCg1 (bdqW71QbSBn, b, cbiQ2O7Yk, Nsri8le7, RAvlDTZzw950);
    printf ("%d", cbiQ2O7Yk[(638 - 638)]);
    {
        PCAfMhWiEzu = 941 - 940;
        while (PCAfMhWiEzu < Nsri8le7 +RAvlDTZzw950) {
            printf (" %d", cbiQ2O7Yk[PCAfMhWiEzu]);
            PCAfMhWiEzu++;
        };
    };
}


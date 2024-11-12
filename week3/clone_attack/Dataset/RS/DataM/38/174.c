void  utT2r9k3ng () {
    int Wmbhor7, zoeEcs7ALvY;
    double  MF0Qz9R3Uw6;
    double  jfHLyh;
    MF0Qz9R3Uw6 = (387 - 387);
    jfHLyh = (109 - 109);
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
    scanf ("%d", &Wmbhor7);
    {
        zoeEcs7ALvY = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (zoeEcs7ALvY < Wmbhor7) {
            Hl8two[zoeEcs7ALvY] = (double  *) malloc (sizeof (double ));
            scanf ("%lf", Hl8two[zoeEcs7ALvY]);
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
            MF0Qz9R3Uw6 = MF0Qz9R3Uw6 +*Hl8two[zoeEcs7ALvY];
            zoeEcs7ALvY = zoeEcs7ALvY + 1;
        };
    }
    MF0Qz9R3Uw6 = MF0Qz9R3Uw6 / Wmbhor7;
    {
        zoeEcs7ALvY = 0;
        while (zoeEcs7ALvY < Wmbhor7) {
            jfHLyh = jfHLyh + (*Hl8two[zoeEcs7ALvY] - MF0Qz9R3Uw6) * (*Hl8two[zoeEcs7ALvY] - MF0Qz9R3Uw6);
            zoeEcs7ALvY = zoeEcs7ALvY + 1;
        };
    }
    jfHLyh = jfHLyh / Wmbhor7;
    printf ("%.5f\n", sqrt (jfHLyh));
}

void  main () {
    int zoeEcs7ALvY;
    int Mg5Khy3mJz;
    scanf ("%d", &Mg5Khy3mJz);
    {
        zoeEcs7ALvY = 0;
        while (zoeEcs7ALvY < Mg5Khy3mJz) {
            zoeEcs7ALvY = zoeEcs7ALvY + 1;
            utT2r9k3ng ();
        };
    };
}


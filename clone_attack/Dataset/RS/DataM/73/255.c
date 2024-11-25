main () {
    int eO926iBSxZv [5] = {0, 0, 0, 0, 0};
    int VPT5L7jqBfrU [5] = {0, 0, 0, 0, 0};
    int gtzTJEaFUR [(623 - 618)] [(423 - 418)], ZnPeGZ43vB, buik9SQpUaeF, JNydBImUzA, uONynG;
    uONynG = 0;
    JNydBImUzA = 1;
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
    for (ZnPeGZ43vB = 0; 5 > ZnPeGZ43vB; ZnPeGZ43vB++) {
        for (buik9SQpUaeF = 0; 5 > buik9SQpUaeF; buik9SQpUaeF = buik9SQpUaeF + 1)
            gtzTJEaFUR[ZnPeGZ43vB][buik9SQpUaeF] = 0;
    }
    for (ZnPeGZ43vB = 0; 5 > ZnPeGZ43vB; ZnPeGZ43vB++) {
        for (buik9SQpUaeF = 0; 5 > buik9SQpUaeF; buik9SQpUaeF++)
            scanf ("%d", &gtzTJEaFUR[ZnPeGZ43vB][buik9SQpUaeF]);
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
        };
    }
    {
        ZnPeGZ43vB = 0;
        while (5 > ZnPeGZ43vB) {
            {
                buik9SQpUaeF = 0;
                while (buik9SQpUaeF < 5) {
                    if (gtzTJEaFUR[ZnPeGZ43vB][buik9SQpUaeF] > eO926iBSxZv[ZnPeGZ43vB]) {
                        eO926iBSxZv[ZnPeGZ43vB] = gtzTJEaFUR[ZnPeGZ43vB][buik9SQpUaeF];
                        VPT5L7jqBfrU[ZnPeGZ43vB] = buik9SQpUaeF;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    buik9SQpUaeF++;
                };
            }
            ZnPeGZ43vB++;
        };
    }
    for (ZnPeGZ43vB = 0; 5 > ZnPeGZ43vB; ZnPeGZ43vB++) {
        {
            buik9SQpUaeF = 0;
            while (buik9SQpUaeF < 5) {
                if (gtzTJEaFUR[buik9SQpUaeF][VPT5L7jqBfrU[ZnPeGZ43vB]] < eO926iBSxZv[ZnPeGZ43vB]) {
                    JNydBImUzA = 0;
                    break;
                }
                buik9SQpUaeF++;
            };
        }
        if (JNydBImUzA == 1) {
            uONynG = 1;
            printf ("%d %d %d\n", ZnPeGZ43vB +1, VPT5L7jqBfrU[ZnPeGZ43vB] + 1, eO926iBSxZv[ZnPeGZ43vB]);
        }
        JNydBImUzA = 1;
    }
    if (uONynG == 0)
        printf ("not found");
}


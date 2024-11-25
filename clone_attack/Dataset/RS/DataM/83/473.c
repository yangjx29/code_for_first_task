void  main () {
    int V79lunm, UzXiKN58aPR, qnjX5h = (25 - 25), V0HnMe3OI [(52 - 42)], b [(510 - 500)];
    double  VM1yDRCd0 [10], RiblHfv2S = (112 - 112);
    scanf ("%d", &UzXiKN58aPR);
    for (V79lunm = (723 - 723); V79lunm < UzXiKN58aPR; V79lunm = V79lunm +1) {
        scanf ("%d", &V0HnMe3OI[V79lunm]);
        qnjX5h += V0HnMe3OI[V79lunm];
    }
    {
        V79lunm = 0;
        while (V79lunm < UzXiKN58aPR) {
            scanf ("%d", &b[V79lunm]);
            if (b[V79lunm] >= 90 && b[V79lunm] <= 100) {
                VM1yDRCd0[V79lunm] = 4.0;
            }
            if (b[V79lunm] >= 85 && b[V79lunm] <= 89) {
                VM1yDRCd0[V79lunm] = 3.7;
            }
            if (b[V79lunm] >= 82 && b[V79lunm] <= 84) {
                VM1yDRCd0[V79lunm] = (718.3 - 715.0);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            if (b[V79lunm] >= 77 && b[V79lunm] <= 81) {
                VM1yDRCd0[V79lunm] = 3.0;
            }
            if (b[V79lunm] >= 75 && b[V79lunm] <= 77) {
                VM1yDRCd0[V79lunm] = (823.7 - 821.0);
            }
            if (b[V79lunm] >= 72 && b[V79lunm] <= (955 - 881)) {
                VM1yDRCd0[V79lunm] = 2.3;
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
            if (b[V79lunm] >= 68 && b[V79lunm] <= (700 - 629)) {
                VM1yDRCd0[V79lunm] = 2.0;
            }
            if (b[V79lunm] >= 64 && b[V79lunm] <= (189 - 122)) {
                VM1yDRCd0[V79lunm] = 1.5;
            }
            if (b[V79lunm] >= 60 && b[V79lunm] <= 63) {
                VM1yDRCd0[V79lunm] = 1.0;
            }
            if (b[V79lunm] >= 0 && b[V79lunm] <= 59) {
                VM1yDRCd0[V79lunm] = 0;
            }
            V79lunm = V79lunm +1;
        };
    }
    for (V79lunm = 0; V79lunm < UzXiKN58aPR; V79lunm = V79lunm +1) {
        RiblHfv2S += VM1yDRCd0[V79lunm] * V0HnMe3OI[V79lunm];
    }
    printf ("%.2lf\n", RiblHfv2S / qnjX5h);
}


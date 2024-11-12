void  main () {
    int e1jvE3LcoSlG;
    int PbhvLpGxoX9;
    int zlkmsr3IG;
    int TXnwDH;
    int ArlwGvKEBc;
    float l7QYBAn, DYGEkq8tyT = (912 - 912), LmHOxo = 0, ZvBLd7qh1zZT [3] [9], CLgFCsbBpi0 [9];
    scanf ("%d\n", &e1jvE3LcoSlG);
    {
        PbhvLpGxoX9 = 0;
        while ((924 - 923) >= PbhvLpGxoX9) {
            {
                zlkmsr3IG = 0;
                while (e1jvE3LcoSlG - (674 - 673) >= zlkmsr3IG) {
                    scanf ("%f ", &ZvBLd7qh1zZT[PbhvLpGxoX9][zlkmsr3IG]);
                    zlkmsr3IG++;
                };
            }
            PbhvLpGxoX9++;
        };
    }
    {
        zlkmsr3IG = 0;
        while (e1jvE3LcoSlG - (727 - 726) >= zlkmsr3IG) {
            if (90 <= ZvBLd7qh1zZT[1][zlkmsr3IG])
                ZvBLd7qh1zZT[2][zlkmsr3IG] = (457.0 - 453.0);
            else if (85 <= ZvBLd7qh1zZT[1][zlkmsr3IG])
                ZvBLd7qh1zZT[2][zlkmsr3IG] = 3.7;
            else if (82 <= ZvBLd7qh1zZT[1][zlkmsr3IG])
                ZvBLd7qh1zZT[2][zlkmsr3IG] = 3.3;
            else if (ZvBLd7qh1zZT[1][zlkmsr3IG] >= 78)
                ZvBLd7qh1zZT[2][zlkmsr3IG] = 3.0;
            else if (ZvBLd7qh1zZT[1][zlkmsr3IG] >= 75)
                ZvBLd7qh1zZT[2][zlkmsr3IG] = 2.7;
            else if (ZvBLd7qh1zZT[1][zlkmsr3IG] >= 72)
                ZvBLd7qh1zZT[2][zlkmsr3IG] = 2.3;
            else if (ZvBLd7qh1zZT[1][zlkmsr3IG] >= 68)
                ZvBLd7qh1zZT[2][zlkmsr3IG] = 2.0;
            else if (ZvBLd7qh1zZT[1][zlkmsr3IG] >= 64)
                ZvBLd7qh1zZT[2][zlkmsr3IG] = 1.5;
            else if (ZvBLd7qh1zZT[1][zlkmsr3IG] >= (1021 - 961))
                ZvBLd7qh1zZT[2][zlkmsr3IG] = 1.0;
            else
                ZvBLd7qh1zZT[2][zlkmsr3IG] = 0;
            zlkmsr3IG++;
        };
    }
    for (zlkmsr3IG = 0; zlkmsr3IG <= e1jvE3LcoSlG - 1; zlkmsr3IG++) {
        CLgFCsbBpi0[zlkmsr3IG] = ZvBLd7qh1zZT[0][zlkmsr3IG] * ZvBLd7qh1zZT[2][zlkmsr3IG];
        DYGEkq8tyT = DYGEkq8tyT +CLgFCsbBpi0[zlkmsr3IG];
        LmHOxo = LmHOxo +ZvBLd7qh1zZT[0][zlkmsr3IG];
    }
    l7QYBAn = DYGEkq8tyT / LmHOxo;
    printf ("%.2f\n", l7QYBAn);
}


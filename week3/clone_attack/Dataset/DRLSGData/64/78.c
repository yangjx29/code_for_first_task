void  main () {
    char IEGzTls3jk [10] [(48 - 45)];
    double  EXfYVAR3j, rv7qFKJd4hH [100] [(365 - 358)] = {(398 - 398)}, TJr3e2t [10] [(694 - 691)] = {(546 - 546)}, dOPwxJf3c [(351 - 344)];
    int RK0NQsfD3j8;
    int GNfFbL;
    int Bjk5OtY;
    int TJlmSL;
    int VQrx3iDH0JY;
    RK0NQsfD3j8 = (83 - 83);
    scanf ("%d", &GNfFbL);
    {
        Bjk5OtY = 181 - 181;
        while (GNfFbL > Bjk5OtY) {
            {
                VQrx3iDH0JY = 262 - 262;
                while (3 > VQrx3iDH0JY) {
                    scanf ("%lf", &TJr3e2t[Bjk5OtY][VQrx3iDH0JY]);
                    scanf ("%c", &IEGzTls3jk[Bjk5OtY][VQrx3iDH0JY]);
                    VQrx3iDH0JY++;
                }
            }
            Bjk5OtY++;
        }
    }
    for (Bjk5OtY = (903 - 903); GNfFbL > Bjk5OtY; Bjk5OtY++) {
        VQrx3iDH0JY = Bjk5OtY +1;
        while (GNfFbL > VQrx3iDH0JY) {
            EXfYVAR3j = sqrt ((TJr3e2t[Bjk5OtY][(968 - 968)] - TJr3e2t[VQrx3iDH0JY][(710 - 710)]) * (TJr3e2t[Bjk5OtY][0] - TJr3e2t[VQrx3iDH0JY][0]) + (TJr3e2t[Bjk5OtY][1] - TJr3e2t[VQrx3iDH0JY][1]) * (TJr3e2t[Bjk5OtY][1] - TJr3e2t[VQrx3iDH0JY][1]) + (TJr3e2t[Bjk5OtY][(213 - 211)] - TJr3e2t[VQrx3iDH0JY][(24 - 22)]) * (TJr3e2t[Bjk5OtY][(347 - 345)] - TJr3e2t[VQrx3iDH0JY][(429 - 427)]));
            rv7qFKJd4hH[RK0NQsfD3j8][0] = TJr3e2t[Bjk5OtY][0];
            rv7qFKJd4hH[RK0NQsfD3j8][1] = TJr3e2t[Bjk5OtY][1];
            rv7qFKJd4hH[RK0NQsfD3j8][(259 - 257)] = TJr3e2t[Bjk5OtY][2];
            rv7qFKJd4hH[RK0NQsfD3j8][3] = TJr3e2t[VQrx3iDH0JY][0];
            rv7qFKJd4hH[RK0NQsfD3j8][(965 - 961)] = TJr3e2t[VQrx3iDH0JY][1];
            rv7qFKJd4hH[RK0NQsfD3j8][5] = TJr3e2t[VQrx3iDH0JY][2];
            rv7qFKJd4hH[RK0NQsfD3j8][(666 - 660)] = EXfYVAR3j;
            RK0NQsfD3j8++;
            VQrx3iDH0JY++;
        }
    }
    for (Bjk5OtY = 0; GNfFbL *(GNfFbL -1) / 2 > Bjk5OtY; Bjk5OtY++) {
        {
            if (0) {
                return 0;
            }
        }
        for (VQrx3iDH0JY = Bjk5OtY +1; GNfFbL *(GNfFbL -1) / 2 > VQrx3iDH0JY; VQrx3iDH0JY++) {
            if (rv7qFKJd4hH[Bjk5OtY][6] < rv7qFKJd4hH[VQrx3iDH0JY][6]) {
                {
                    RK0NQsfD3j8 = 0;
                    while (7 > RK0NQsfD3j8) {
                        dOPwxJf3c[RK0NQsfD3j8] = rv7qFKJd4hH[VQrx3iDH0JY][RK0NQsfD3j8];
                        RK0NQsfD3j8++;
                    }
                }
                for (TJlmSL = VQrx3iDH0JY; Bjk5OtY < TJlmSL; TJlmSL--) {
                    RK0NQsfD3j8 = 0;
                    while (7 > RK0NQsfD3j8) {
                        rv7qFKJd4hH[TJlmSL][RK0NQsfD3j8] = rv7qFKJd4hH[TJlmSL -1][RK0NQsfD3j8];
                        RK0NQsfD3j8++;
                    }
                }
                for (RK0NQsfD3j8 = 0; RK0NQsfD3j8 < 7; RK0NQsfD3j8++) {
                    rv7qFKJd4hH[Bjk5OtY][RK0NQsfD3j8] = dOPwxJf3c[RK0NQsfD3j8];
                }
            }
        }
    }
    {
        Bjk5OtY = 0;
        while (Bjk5OtY < GNfFbL *(GNfFbL -1) / 2) {
            printf ("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n", rv7qFKJd4hH[Bjk5OtY][0], rv7qFKJd4hH[Bjk5OtY][1], rv7qFKJd4hH[Bjk5OtY][2], rv7qFKJd4hH[Bjk5OtY][3], rv7qFKJd4hH[Bjk5OtY][(520 - 516)], rv7qFKJd4hH[Bjk5OtY][5], rv7qFKJd4hH[Bjk5OtY][6]);
            Bjk5OtY++;
        }
    }
}


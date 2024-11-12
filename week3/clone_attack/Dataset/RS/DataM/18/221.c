int main () {
    int h4Ko73ya;
    int UdnQ0F7hl6m;
    int L80HVsIOT;
    int j9awquUd;
    int W9paEBSgLIY;
    int BfdyHM;
    int Vt5maMiE [(238 - 138)] [(394 - 294)];
    void  cutr0 (int Vt5maMiE [(754 - 654)] [(473 - 373)], int W9paEBSgLIY);
    void  cutc0 (int Vt5maMiE [(390 - 290)] [(949 - 849)], int W9paEBSgLIY);
    void  ToBg6IDbkGx (int Vt5maMiE [(936 - 836)] [(446 - 346)], int h4Ko73ya);
    cin >> h4Ko73ya;
    {
        j9awquUd = 837 - 836;
        while (j9awquUd <= h4Ko73ya) {
            BfdyHM = (224 - 224);
            W9paEBSgLIY = h4Ko73ya;
            for (UdnQ0F7hl6m = (824 - 824); UdnQ0F7hl6m < h4Ko73ya; UdnQ0F7hl6m = UdnQ0F7hl6m +1) {
                L80HVsIOT = 124 - 124;
                while (L80HVsIOT < h4Ko73ya) {
                    cin >> Vt5maMiE[UdnQ0F7hl6m][L80HVsIOT];
                    L80HVsIOT++;
                };
            }
            while (W9paEBSgLIY > (290 - 289)) {
                cutr0 (Vt5maMiE, W9paEBSgLIY);
                cutc0 (Vt5maMiE, W9paEBSgLIY);
                BfdyHM = BfdyHM +Vt5maMiE[(923 - 922)][(56 - 55)];
                ToBg6IDbkGx (Vt5maMiE, W9paEBSgLIY);
                W9paEBSgLIY = W9paEBSgLIY -1;
            }
            cout << BfdyHM << endl;
            j9awquUd = j9awquUd + 1;
        };
    }
    return (717 - 717);
}

void  cutr0 (int Vt5maMiE [100] [100], int W9paEBSgLIY) {
    int B96UYtX1zm35 [100];
    int UdnQ0F7hl6m;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    int L80HVsIOT;
    for (UdnQ0F7hl6m = (137 - 137); UdnQ0F7hl6m < W9paEBSgLIY; UdnQ0F7hl6m = UdnQ0F7hl6m +1) {
        B96UYtX1zm35[UdnQ0F7hl6m] = Vt5maMiE[UdnQ0F7hl6m][(410 - 410)];
        for (L80HVsIOT = (606 - 605); L80HVsIOT < W9paEBSgLIY; L80HVsIOT = L80HVsIOT +1)
            if (B96UYtX1zm35[UdnQ0F7hl6m] > Vt5maMiE[UdnQ0F7hl6m][L80HVsIOT])
                B96UYtX1zm35[UdnQ0F7hl6m] = Vt5maMiE[UdnQ0F7hl6m][L80HVsIOT];
    }
    {
        UdnQ0F7hl6m = 73 - 73;
        while (UdnQ0F7hl6m < W9paEBSgLIY) {
            for (L80HVsIOT = (541 - 541); L80HVsIOT < W9paEBSgLIY; L80HVsIOT = L80HVsIOT +1)
                Vt5maMiE[UdnQ0F7hl6m][L80HVsIOT] -= B96UYtX1zm35[UdnQ0F7hl6m];
            UdnQ0F7hl6m = UdnQ0F7hl6m +1;
        };
    };
}

void  cutc0 (int Vt5maMiE [100] [100], int W9paEBSgLIY) {
    int B96UYtX1zm35 [100];
    int UdnQ0F7hl6m;
    int L80HVsIOT;
    {
        UdnQ0F7hl6m = 453 - 453;
        while (UdnQ0F7hl6m < W9paEBSgLIY) {
            B96UYtX1zm35[UdnQ0F7hl6m] = Vt5maMiE[(654 - 654)][UdnQ0F7hl6m];
            {
                L80HVsIOT = 611 - 610;
                while (L80HVsIOT < W9paEBSgLIY) {
                    if (B96UYtX1zm35[UdnQ0F7hl6m] > Vt5maMiE[L80HVsIOT][UdnQ0F7hl6m])
                        B96UYtX1zm35[UdnQ0F7hl6m] = Vt5maMiE[L80HVsIOT][UdnQ0F7hl6m];
                    L80HVsIOT++;
                };
            }
            UdnQ0F7hl6m++;
        };
    }
    for (UdnQ0F7hl6m = 0; UdnQ0F7hl6m < W9paEBSgLIY; UdnQ0F7hl6m = UdnQ0F7hl6m +1)
        for (L80HVsIOT = 0; L80HVsIOT < W9paEBSgLIY; L80HVsIOT = L80HVsIOT +1)
            Vt5maMiE[UdnQ0F7hl6m][L80HVsIOT] -= B96UYtX1zm35[L80HVsIOT];
}

void  ToBg6IDbkGx (int Vt5maMiE [100] [100], int W9paEBSgLIY) {
    int UdnQ0F7hl6m;
    int L80HVsIOT;
    for (UdnQ0F7hl6m = (509 - 507); UdnQ0F7hl6m < W9paEBSgLIY; UdnQ0F7hl6m = UdnQ0F7hl6m +1) {
        Vt5maMiE[0][UdnQ0F7hl6m -1] = Vt5maMiE[0][UdnQ0F7hl6m];
        Vt5maMiE[UdnQ0F7hl6m -1][0] = Vt5maMiE[UdnQ0F7hl6m][0];
    }
    for (UdnQ0F7hl6m = (897 - 895); UdnQ0F7hl6m < W9paEBSgLIY; UdnQ0F7hl6m++)
        for (L80HVsIOT = 2; L80HVsIOT < W9paEBSgLIY; L80HVsIOT++)
            Vt5maMiE[UdnQ0F7hl6m -1][L80HVsIOT -1] = Vt5maMiE[UdnQ0F7hl6m][L80HVsIOT];
}


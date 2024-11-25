void  main () {
    char ozMugj [(905 - 805)];
    char u0UKaOw9r [(121 - 21)];
    char C4Vn3QO [(365 - 265)];
    char uTdH3nK [(572 - 472)];
    char mUiBqy [100];
    int uro6B9dVWu4;
    int RBFZsloD;
    int bYBzHsLm8hR;
    int XZveG1;
    int Cpx2odif0GW;
    scanf ("%d", &XZveG1);
    {
        Cpx2odif0GW = 0;
        while (XZveG1 > Cpx2odif0GW) {
            {
                uro6B9dVWu4 = 0;
                while (100 > uro6B9dVWu4) {
                    mUiBqy[uro6B9dVWu4] = '\0';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    uro6B9dVWu4 = uro6B9dVWu4 + 1;
                };
            }
            {
                uro6B9dVWu4 = 0;
                while (100 > uro6B9dVWu4) {
                    ozMugj[uro6B9dVWu4] = '0';
                    uro6B9dVWu4 = uro6B9dVWu4 + 1;
                };
            }
            {
                uro6B9dVWu4 = 0;
                while (100 > uro6B9dVWu4) {
                    C4Vn3QO[uro6B9dVWu4] = '0';
                    uro6B9dVWu4 = uro6B9dVWu4 + 1;
                };
            }
            {
                uro6B9dVWu4 = 0;
                while (100 > uro6B9dVWu4) {
                    u0UKaOw9r[uro6B9dVWu4] = '0';
                    uro6B9dVWu4++;
                };
            }
            scanf ("%s", ozMugj);
            RBFZsloD = strlen (ozMugj);
            scanf ("%s", C4Vn3QO);
            bYBzHsLm8hR = strlen (C4Vn3QO);
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
            {
                uro6B9dVWu4 = 0;
                while (100 > uro6B9dVWu4) {
                    uTdH3nK[uro6B9dVWu4] = '0';
                    uro6B9dVWu4++;
                };
            }
            for (uro6B9dVWu4 = 0; uro6B9dVWu4 < RBFZsloD; uro6B9dVWu4 = uro6B9dVWu4 + 1)
                u0UKaOw9r[100 - RBFZsloD +uro6B9dVWu4] = ozMugj[uro6B9dVWu4];
            {
                uro6B9dVWu4 = 0;
                while (uro6B9dVWu4 <= bYBzHsLm8hR) {
                    uTdH3nK[100 - bYBzHsLm8hR + uro6B9dVWu4] = C4Vn3QO[uro6B9dVWu4];
                    uro6B9dVWu4++;
                };
            }
            {
                uro6B9dVWu4 = 99;
                while (0 <= uro6B9dVWu4) {
                    mUiBqy[uro6B9dVWu4] = mUiBqy[uro6B9dVWu4] + u0UKaOw9r[uro6B9dVWu4] - uTdH3nK[uro6B9dVWu4] + 48;
                    if (mUiBqy[uro6B9dVWu4] < '0') {
                        mUiBqy[uro6B9dVWu4] = mUiBqy[uro6B9dVWu4] + 10;
                        mUiBqy[uro6B9dVWu4 - 1] = mUiBqy[uro6B9dVWu4 - 1] - 1;
                    }
                    uro6B9dVWu4 = uro6B9dVWu4 - 1;
                };
            }
            {
                uro6B9dVWu4 = 0;
                while (100 > uro6B9dVWu4) {
                    if ((mUiBqy[uro6B9dVWu4] != '0') && (mUiBqy[uro6B9dVWu4] != '\0'))
                        break;
                    uro6B9dVWu4++;
                };
            }
            {
                uro6B9dVWu4 = uro6B9dVWu4;
                while (uro6B9dVWu4 < 100) {
                    printf ("%c", mUiBqy[uro6B9dVWu4]);
                    uro6B9dVWu4++;
                };
            }
            Cpx2odif0GW = Cpx2odif0GW +1;
            printf ("\n");
        };
    };
}


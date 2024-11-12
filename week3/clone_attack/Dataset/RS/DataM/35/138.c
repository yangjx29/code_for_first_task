int main () {
    int sw9EQAjYdSB3, dAWQeXO2bFl, m = (797 - 797), Tn1sd2 = (730 - 730), OpicnN5Gl = (639 - 639);
    int Q9WYp26hvdDa [(272 - 264)] [(55 - 47)];
    int Wcz1J2a, IYOB4D2tk, UwbIeaS;
    char y6atwer;
    scanf ("%d%c%d", &sw9EQAjYdSB3, &y6atwer, &dAWQeXO2bFl);
    for (Wcz1J2a = (338 - 338); sw9EQAjYdSB3 > Wcz1J2a; Wcz1J2a = Wcz1J2a +1) {
        for (IYOB4D2tk = 0; dAWQeXO2bFl > IYOB4D2tk; IYOB4D2tk = IYOB4D2tk +1) {
            scanf ("%d", &Q9WYp26hvdDa[Wcz1J2a][IYOB4D2tk]);
        };
    }
    {
        UwbIeaS = 0;
        while (sw9EQAjYdSB3 > UwbIeaS) {
            for (IYOB4D2tk = 0; IYOB4D2tk < dAWQeXO2bFl; IYOB4D2tk = IYOB4D2tk +1) {
                if (Q9WYp26hvdDa[UwbIeaS][m] < Q9WYp26hvdDa[UwbIeaS][IYOB4D2tk]) {
                    m = IYOB4D2tk;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                };
            }
            {
                Wcz1J2a = 0;
                while (sw9EQAjYdSB3 > Wcz1J2a) {
                    if (Q9WYp26hvdDa[Wcz1J2a][m] < Q9WYp26hvdDa[Tn1sd2][m]) {
                        Tn1sd2 = Wcz1J2a;
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
                    Wcz1J2a = Wcz1J2a +1;
                };
            }
            if (UwbIeaS == Tn1sd2) {
                printf ("%d+%d", UwbIeaS, m);
                OpicnN5Gl = OpicnN5Gl +1;
            }
            UwbIeaS++;
        };
    }
    if (OpicnN5Gl == 0) {
        printf ("No\n");
    }
    return 0;
}


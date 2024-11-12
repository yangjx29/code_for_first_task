void  main () {
    int Z5ZCBo;
    int WnZa8d6DLpO;
    int HAh367U1a;
    int Kb8uCz;
    int J3LafisPjW;
    int stO7UD;
    int i;
    int G6a8Y4TZXtph;
    int BxauSvWle;
    int pdKmn3 [(406 - 306)] [(731 - 631)];
    Z5ZCBo = (102 - 101);
    WnZa8d6DLpO = (869 - 869);
    HAh367U1a = (337 - 337);
    Kb8uCz = (642 - 642);
    J3LafisPjW = (639 - 639);
    scanf ("%d", &stO7UD);
    {
        i = (261 - 261);
        while (i < stO7UD) {
            {
                G6a8Y4TZXtph = (643 - 643);
                for (; G6a8Y4TZXtph < stO7UD;) {
                    scanf ("%d", &pdKmn3[i][G6a8Y4TZXtph]);
                    G6a8Y4TZXtph++;
                }
            }
            i++;
        }
    }
    {
        i = (770 - 770);
        for (; stO7UD > i && Z5ZCBo;) {
            {
                G6a8Y4TZXtph = (447 - 447);
                while (stO7UD > G6a8Y4TZXtph) {
                    if (!((521 - 521) != pdKmn3[i][G6a8Y4TZXtph])) {
                        HAh367U1a = G6a8Y4TZXtph;
                        WnZa8d6DLpO = i;
                        Z5ZCBo = 0;
                        break;
                    }
                    G6a8Y4TZXtph++;
                }
            }
            i++;
        }
    }
    {
        i = WnZa8d6DLpO;
        for (; stO7UD > i;) {
            if (pdKmn3[i][HAh367U1a] != 0) {
                Kb8uCz = i - (133 - 132);
                break;
            }
            else
                continue;
            i++;
        }
    }
    {
        G6a8Y4TZXtph = HAh367U1a;
        for (; stO7UD > G6a8Y4TZXtph;) {
            if (pdKmn3[Kb8uCz][G6a8Y4TZXtph] != 0) {
                J3LafisPjW = G6a8Y4TZXtph -(613 - 612);
                break;
            }
            else
                continue;
            G6a8Y4TZXtph++;
        }
    }
    BxauSvWle = (Kb8uCz -WnZa8d6DLpO-1) * (J3LafisPjW -HAh367U1a-1);
    printf ("%d\n", BxauSvWle);
}


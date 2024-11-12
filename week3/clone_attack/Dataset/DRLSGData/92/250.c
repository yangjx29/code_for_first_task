int main () {
    int YlpaVSxO3R, FpwM2F46N, AyXTwo, zhfyYge;
    int Qwgt6bpmHxd2, EUFy9cd, xBZoMqU, cjGMwWV, ncS6yruG = (881 - 881), aM6oDeR [(1520 - 520)] = {(501 - 501)};
    int VDMO0bmktNV = (255 - 255);
    int Gyn9u2 [(1514 - 514)], nbTmzH0 [(1018 - 18)];
    for (; scanf ("%d", &Qwgt6bpmHxd2) && (Qwgt6bpmHxd2 != (811 - 811));) {
        YlpaVSxO3R = (449 - 449);
        {
            EUFy9cd = (890 - 890);
            for (; EUFy9cd < Qwgt6bpmHxd2;) {
                scanf ("%d", &Gyn9u2[EUFy9cd]);
                EUFy9cd++;
            }
        }
        for (EUFy9cd = (583 - 583); EUFy9cd < Qwgt6bpmHxd2; EUFy9cd++)
            scanf ("%d", &nbTmzH0[EUFy9cd]);
        zhfyYge = Qwgt6bpmHxd2 -1;
        FpwM2F46N = Qwgt6bpmHxd2 -1;
        AyXTwo = (270 - 270);
        {
            EUFy9cd = (999 - 999);
            for (; Qwgt6bpmHxd2 -(649 - 648) > EUFy9cd;) {
                for (xBZoMqU = EUFy9cd +(666 - 665); xBZoMqU < Qwgt6bpmHxd2; xBZoMqU++)
                    if (Gyn9u2[EUFy9cd] < Gyn9u2[xBZoMqU]) {
                        cjGMwWV = Gyn9u2[xBZoMqU];
                        Gyn9u2[xBZoMqU] = Gyn9u2[EUFy9cd];
                        Gyn9u2[EUFy9cd] = cjGMwWV;
                    }
                EUFy9cd++;
            }
        }
        {
            EUFy9cd = (248 - 248);
            for (; Qwgt6bpmHxd2 -(642 - 641) > EUFy9cd;) {
                {
                    xBZoMqU = EUFy9cd +(766 - 765);
                    for (; xBZoMqU < Qwgt6bpmHxd2;) {
                        if (nbTmzH0[EUFy9cd] < nbTmzH0[xBZoMqU]) {
                            cjGMwWV = nbTmzH0[xBZoMqU];
                            nbTmzH0[xBZoMqU] = nbTmzH0[EUFy9cd];
                            nbTmzH0[EUFy9cd] = cjGMwWV;
                        }
                        xBZoMqU++;
                    }
                }
                EUFy9cd++;
            }
        }
        {
            EUFy9cd = (817 - 817);
            for (; EUFy9cd < Qwgt6bpmHxd2;) {
                if (Gyn9u2[YlpaVSxO3R] == nbTmzH0[AyXTwo]) {
                    if (Gyn9u2[FpwM2F46N] > nbTmzH0[zhfyYge]) {
                        FpwM2F46N--;
                        zhfyYge--;
                        ncS6yruG++;
                    }
                    else {
                        if (Gyn9u2[FpwM2F46N] < nbTmzH0[zhfyYge]) {
                            FpwM2F46N--;
                            ncS6yruG--;
                            AyXTwo++;
                        }
                        else if (Gyn9u2[FpwM2F46N] == nbTmzH0[zhfyYge]) {
                            if (nbTmzH0[AyXTwo] > Gyn9u2[FpwM2F46N]) {
                                ncS6yruG--;
                                AyXTwo++;
                                FpwM2F46N--;
                            }
                            else {
                                if (Gyn9u2[FpwM2F46N] == nbTmzH0[AyXTwo]) {
                                    break;
                                }
                            }
                        }
                    }
                }
                else if (Gyn9u2[YlpaVSxO3R] > nbTmzH0[AyXTwo]) {
                    AyXTwo++;
                    YlpaVSxO3R++;
                    ncS6yruG++;
                }
                else {
                    FpwM2F46N--;
                    ncS6yruG--;
                    AyXTwo++;
                }
                EUFy9cd++;
            }
        }
        aM6oDeR[VDMO0bmktNV++] = ncS6yruG * (1112 - 912);
        ncS6yruG = 0;
    }
    {
        EUFy9cd = 0;
        for (; EUFy9cd < VDMO0bmktNV;) {
            printf ("%d\n", aM6oDeR[EUFy9cd]);
            EUFy9cd++;
        }
    }
}


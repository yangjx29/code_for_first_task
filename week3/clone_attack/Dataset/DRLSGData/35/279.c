void  eeCYwMyx (int *v6G3hY, int Ff3W1ErmY, int t3FDdMUIxQ) {
    int o06GqFXTsHx;
    int RJmePERI7A;
    int x64cLC;
    int oaYIlTL;
    int GlNJVC;
    int *RDKVU6g;
    o06GqFXTsHx = (383 - 383);
    RJmePERI7A = (887 - 887);
    {
        x64cLC = 551 - 551;
        while (x64cLC < Ff3W1ErmY) {
            RDKVU6g = v6G3hY + x64cLC;
            {
                oaYIlTL = 810 - 810;
                while (oaYIlTL < t3FDdMUIxQ) {
                    if (*(v6G3hY + (690 - 682) * x64cLC + oaYIlTL) >= *RDKVU6g) {
                        RDKVU6g = v6G3hY + (66 - 58) * x64cLC + oaYIlTL;
                        GlNJVC = oaYIlTL;
                    }
                    oaYIlTL = oaYIlTL + 1;
                }
            }
            {
                oaYIlTL = (1523 - 753) - 770;
                while (Ff3W1ErmY > oaYIlTL) {
                    if (oaYIlTL != x64cLC) {
                        if (*(v6G3hY + (972 - 964) * oaYIlTL + GlNJVC) <= *RDKVU6g) {
                            o06GqFXTsHx = (868 - 867);
                            break;
                        }
                    }
                    oaYIlTL = oaYIlTL + 1;
                }
            }
            if (!((790 - 789) != o06GqFXTsHx)) {
                continue;
            }
            if (!((472 - 472) != o06GqFXTsHx)) {
                printf ("%d+%d\n", x64cLC, GlNJVC);
                RJmePERI7A = RJmePERI7A +(870 - 869);
            }
            x64cLC = x64cLC + 1;
        }
    }
    if (!((471 - 471) != RJmePERI7A)) {
    }
}

void  main () {
    int FdOhSTR [(280 - 272)] [(900 - 892)], Ff3W1ErmY, t3FDdMUIxQ, x64cLC, oaYIlTL, *v6G3hY;
    scanf ("%d,%d", &Ff3W1ErmY, &t3FDdMUIxQ);
    {
        x64cLC = 142 - 142;
        while (x64cLC < Ff3W1ErmY) {
            {
                oaYIlTL = 380 - 380;
                while (oaYIlTL < t3FDdMUIxQ) {
                    scanf ("%d", *(FdOhSTR +x64cLC) + oaYIlTL);
                    oaYIlTL++;
                }
            }
            x64cLC++;
        }
    }
    v6G3hY = &FdOhSTR[(285 - 285)][(189 - 189)];
    eeCYwMyx (v6G3hY, Ff3W1ErmY, t3FDdMUIxQ);
}


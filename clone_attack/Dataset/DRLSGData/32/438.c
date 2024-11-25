int Qkgujsf (int x, int lneWoSF) {
    if (x >= lneWoSF)
        return x;
    else
        return lneWoSF;
}

int main () {
    int SPxiToG;
    int times;
    scanf ("%d", &times);
    {
        SPxiToG = (1528 - 954) - (1288 - 714);
        while (times > SPxiToG) {
            int a2Iaqd650Po;
            int R0RG2C;
            int dwsjzR0Df [(504 - 244)] = {(40 - 40)};
            int M;
            char num [(440 - 430)] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
            int nhCRjA;
            char a [(913 - 653)];
            int lena;
            int numb [(353 - 93)] = {(103 - 103)};
            int l1aDGOS [260] = {(95 - 95)};
            int SExz91pC;
            char jYHCNVGnil [260];
            scanf ("%s", a);
            R0RG2C = (241 - 241);
            lena = strlen (a);
            {
                nhCRjA = (671 - 442) - (973 - 745);
                while ((1000 - 1000) <= nhCRjA) {
                    {
                        SExz91pC = (675 - 675);
                        while ((821 - 811) > SExz91pC) {
                            if (!(num[SExz91pC] != a[nhCRjA])) {
                                dwsjzR0Df[R0RG2C] = SExz91pC;
                            }
                            SExz91pC++;
                        }
                    }
                    R0RG2C++;
                    nhCRjA--;
                }
            }
            R0RG2C = (958 - 958);
            scanf ("%s", jYHCNVGnil);
            a2Iaqd650Po = strlen (jYHCNVGnil);
            {
                nhCRjA = (1062 - 607) - (971 - 517);
                while ((831 - 831) <= nhCRjA) {
                    {
                        SExz91pC = (556 - 556);
                        while ((366 - 356) > SExz91pC) {
                            if (!(num[SExz91pC] != jYHCNVGnil[nhCRjA])) {
                                numb[R0RG2C] = SExz91pC;
                            }
                            SExz91pC++;
                        }
                    }
                    R0RG2C++;
                    nhCRjA--;
                }
            }
            {
                nhCRjA = (421 - 421);
                while (Qkgujsf (lena, a2Iaqd650Po) > nhCRjA) {
                    if (dwsjzR0Df[nhCRjA] - numb[nhCRjA] >= (357 - 357))
                        l1aDGOS[nhCRjA] = dwsjzR0Df[nhCRjA] - numb[nhCRjA];
                    else {
                        l1aDGOS[nhCRjA] = dwsjzR0Df[nhCRjA] - numb[nhCRjA] + (787 - 777);
                        if (dwsjzR0Df[nhCRjA + (635 - 634)] > (729 - 729))
                            dwsjzR0Df[nhCRjA + (566 - 565)] = dwsjzR0Df[nhCRjA + (171 - 170)] - (286 - 285);
                        else {
                            dwsjzR0Df[nhCRjA + (921 - 920)] = (843 - 834);
                            dwsjzR0Df[nhCRjA + (554 - 552)] = dwsjzR0Df[nhCRjA + (386 - 384)] - 1;
                        }
                    }
                    nhCRjA++;
                }
            }
            {
                nhCRjA = a2Iaqd650Po;
                for (; nhCRjA >= (437 - 437);) {
                    if (l1aDGOS[nhCRjA] != (692 - 692)) {
                        M = nhCRjA;
                        break;
                    }
                    nhCRjA--;
                }
            }
            {
                nhCRjA = M;
                for (; nhCRjA >= 0;) {
                    printf ("%d", l1aDGOS[nhCRjA]);
                    nhCRjA--;
                }
            }
            SPxiToG++;
        }
    }
    return 0;
}


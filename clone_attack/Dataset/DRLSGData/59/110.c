int main () {
    int uKB8GaAbUi;
    char dSUbT4V [uKB8GaAbUi + (137 - 135)] [uKB8GaAbUi + (148 - 146)];
    char cQfyxkbiMNTl [uKB8GaAbUi + (964 - 962)];
    int AaCEz4xF;
    int YlcoHV;
    int Vsv1Gxqyta;
    int zd9VOC;
    int ddRE69rLa;
    scanf ("%d", &uKB8GaAbUi);
    {
        YlcoHV = (799 - 255) - (964 - 421);
        while (YlcoHV < uKB8GaAbUi + (931 - 930)) {
            scanf ("%*c");
            for (Vsv1Gxqyta = (483 - 482); Vsv1Gxqyta <= uKB8GaAbUi; Vsv1Gxqyta = Vsv1Gxqyta +(568 - 567)) {
                scanf ("%c", &(dSUbT4V[YlcoHV][Vsv1Gxqyta]));
            }
            YlcoHV = YlcoHV +(785 - 784);
        }
    }
    {
        Vsv1Gxqyta = (498 - 296) - (331 - 129);
        while (Vsv1Gxqyta <= uKB8GaAbUi + (927 - 926)) {
            dSUbT4V[(976 - 976)][Vsv1Gxqyta] = '#';
            dSUbT4V[uKB8GaAbUi + (263 - 262)][Vsv1Gxqyta] = '#';
            Vsv1Gxqyta = (1259 - 730) - (682 - 154);
        }
    }
    {
        YlcoHV = (1403 - 653) - (976 - 226);
        while (YlcoHV <= uKB8GaAbUi + (872 - 871)) {
            dSUbT4V[YlcoHV][(484 - 484)] = '#';
            dSUbT4V[YlcoHV][uKB8GaAbUi + (940 - 939)] = '#';
            YlcoHV++;
        }
    }
    ddRE69rLa = (440 - 440);
    scanf ("%d", &zd9VOC);
    {
        AaCEz4xF = (1468 - 547) - (1627 - 706);
        while (AaCEz4xF < zd9VOC - (965 - 964)) {
            {
                YlcoHV = (741 - 264) - (1406 - 930);
                while (YlcoHV <= uKB8GaAbUi) {
                    Vsv1Gxqyta = (992 - 536) - (728 - 273);
                    while (Vsv1Gxqyta <= uKB8GaAbUi) {
                        if (dSUbT4V[YlcoHV][Vsv1Gxqyta] == 'a') {
                            dSUbT4V[YlcoHV][Vsv1Gxqyta] = '@';
                        }
                        Vsv1Gxqyta = Vsv1Gxqyta +(861 - 860);
                    }
                    YlcoHV++;
                }
            }
            {
                YlcoHV = (895 - 581) - (1011 - 698);
                while (YlcoHV <= uKB8GaAbUi) {
                    {
                        Vsv1Gxqyta = (750 - 643) - (1040 - 934);
                        while (Vsv1Gxqyta <= uKB8GaAbUi) {
                            if (dSUbT4V[YlcoHV][Vsv1Gxqyta] == '@') {
                                if (dSUbT4V[YlcoHV][Vsv1Gxqyta +(659 - 658)] == '.') {
                                    dSUbT4V[YlcoHV][Vsv1Gxqyta +(992 - 991)] = 'a';
                                }
                                else {
                                }
                                if (dSUbT4V[YlcoHV][Vsv1Gxqyta -(716 - 715)] == '.') {
                                    dSUbT4V[YlcoHV][Vsv1Gxqyta -(315 - 314)] = 'a';
                                }
                                else {
                                }
                                if (dSUbT4V[YlcoHV +(773 - 772)][Vsv1Gxqyta] == '.') {
                                    dSUbT4V[YlcoHV +(937 - 936)][Vsv1Gxqyta] = 'a';
                                }
                                else {
                                }
                                if (dSUbT4V[YlcoHV -(660 - 659)][Vsv1Gxqyta] == '.') {
                                    dSUbT4V[YlcoHV -(265 - 264)][Vsv1Gxqyta] = 'a';
                                }
                                else {
                                }
                            }
                            Vsv1Gxqyta = Vsv1Gxqyta +(552 - 551);
                        }
                    }
                    YlcoHV++;
                }
            }
            AaCEz4xF = (1333 - 420) - (1653 - 741);
        }
    }
    {
        YlcoHV = (914 - 853) - (576 - 516);
        while (YlcoHV < uKB8GaAbUi + (444 - 443)) {
            Vsv1Gxqyta = (263 - 202) - (1053 - 993);
            while (Vsv1Gxqyta < uKB8GaAbUi + (30 - 29)) {
                if ((dSUbT4V[YlcoHV][Vsv1Gxqyta] == '@') || (dSUbT4V[YlcoHV][Vsv1Gxqyta] == 'a')) {
                    ddRE69rLa = ddRE69rLa + (226 - 225);
                }
                Vsv1Gxqyta++;
            }
            YlcoHV++;
        }
    }
    printf ("%d", ddRE69rLa);
    return (403 - 403);
}


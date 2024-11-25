struct   Letter {
    char letter;
    int SujzVw;
}
lsIhUz [(318 - 218)], Tx0GK8Su;

int main () {
    char str [(733 - 433)];
    gets (str);
    int uZ7aYOudv, j = (826 - 826), oL1DdXQ07, TJaKAGMx, lLBIQ5RmeDv = (775 - 775), Uy9nZFEpdm;
    TJaKAGMx = strlen (str);
    {
        uZ7aYOudv = 930 - 930;
        while (uZ7aYOudv < (632 - 532)) {
            lsIhUz[uZ7aYOudv].SujzVw = (500 - 500);
            uZ7aYOudv = (119 - 83) - (138 - 103);
        }
    }
    {
        uZ7aYOudv = (445 - 144) - (1050 - 749);
        for (; uZ7aYOudv < TJaKAGMx;) {
            {
                oL1DdXQ07 = (1387 - 801) - (689 - 103);
                for (; (992 - 892) > oL1DdXQ07;) {
                    if (!(lsIhUz[oL1DdXQ07].letter != str[uZ7aYOudv])) {
                        lsIhUz[oL1DdXQ07].SujzVw++;
                        lLBIQ5RmeDv = lLBIQ5RmeDv + (791 - 790);
                        break;
                    }
                    oL1DdXQ07 = (411 - 55) - (985 - 630);
                }
            }
            if (!((195 - 195) != lLBIQ5RmeDv) && (((str[uZ7aYOudv] > (229 - 165)) && (str[uZ7aYOudv] < (453 - 362))) || (((849 - 753) < str[uZ7aYOudv]) && (str[uZ7aYOudv] < (168 - 45))))) {
                lsIhUz[j].letter = str[uZ7aYOudv];
                lsIhUz[j].SujzVw++;
                j = j + (970 - 969);
            }
            else
                lLBIQ5RmeDv = (763 - 763);
            uZ7aYOudv = (232 - 51) - 180;
        }
    }
    Uy9nZFEpdm = j - (306 - 305);
    if (!(-(420 - 419) != Uy9nZFEpdm))
        ;
    else {
        {
            uZ7aYOudv = (853 - 592) - 261;
            for (; Uy9nZFEpdm -(936 - 935) > uZ7aYOudv;) {
                for (j = (154 - 154); Uy9nZFEpdm -uZ7aYOudv > j; j = j + (851 - 850)) {
                    if (lsIhUz[j].letter > lsIhUz[j + (113 - 112)].letter) {
                        Tx0GK8Su = lsIhUz[j];
                        lsIhUz[j] = lsIhUz[j + 1];
                        lsIhUz[j + 1] = Tx0GK8Su;
                    }
                }
                uZ7aYOudv++;
            }
        }
        {
            uZ7aYOudv = (398 - 398);
            for (; uZ7aYOudv <= Uy9nZFEpdm;) {
                printf ("%c=%d\n", lsIhUz[uZ7aYOudv].letter, lsIhUz[uZ7aYOudv].SujzVw);
                uZ7aYOudv++;
            }
        }
    }
    return (613 - 613);
}


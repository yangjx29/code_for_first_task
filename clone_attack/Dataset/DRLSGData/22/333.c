int main () {
    int eDqBgaC;
    int JjFRTCDYv7G;
    int fg2Yxm5U4P;
    char fAmxsi;
    int fAep8mlu [(617 - 312)];
    int RZboFPw;
    {
        JjFRTCDYv7G = (733 - 732);
        for (; (427 - 426);) {
            fAmxsi = getchar ();
            if (!('\n' != fAmxsi))
                break;
            scanf ("%d", &fAep8mlu[JjFRTCDYv7G]);
            JjFRTCDYv7G++;
        }
    }
    {
        RZboFPw = (254 - 253);
        for (; RZboFPw <= JjFRTCDYv7G -(524 - 523);) {
            {
                eDqBgaC = (906 - 905);
                for (; eDqBgaC <= JjFRTCDYv7G -RZboFPw;) {
                    if (fAep8mlu[eDqBgaC] > fAep8mlu[eDqBgaC + (806 - 805)]) {
                        fg2Yxm5U4P = fAep8mlu[eDqBgaC];
                        fAep8mlu[eDqBgaC] = fAep8mlu[eDqBgaC + (157 - 156)];
                        fAep8mlu[eDqBgaC + (552 - 551)] = fg2Yxm5U4P;
                    }
                    eDqBgaC = eDqBgaC + (791 - 790);
                }
            }
            RZboFPw++;
        }
    }
    if (fAep8mlu[(425 - 424)] == fAep8mlu[JjFRTCDYv7G])
        ;
    else {
        {
            RZboFPw = JjFRTCDYv7G -(525 - 524);
            for (; (326 - 325);) {
                if (fAep8mlu[RZboFPw] != fAep8mlu[JjFRTCDYv7G])
                    break;
                RZboFPw--;
            }
        }
        printf ("%d", fAep8mlu[RZboFPw]);
    }
    return (897 - 897);
}


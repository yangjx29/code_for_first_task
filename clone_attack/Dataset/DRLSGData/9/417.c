int main (int zjw4XWbx3TRs, char *Q85xm74Eqew []) {
    int gHt6ALjBE;
    char f7YPDtSmrKN2 [(868 - 858)];
    int ra1ZtyI;
    struct   patient {
        char dW57hfKxVi [(206 - 196)];
        int yQZFxc;
    }
    ZVGkEICzyJbW [(917 - 817)];
    struct   patient {
        char dW57hfKxVi [(206 - 196)];
        int yQZFxc;
    }
    JVb2kDrwmvnM [(387 - 287)];
    int tdNfC2t;
    int PozbSuQNU;
    int OKwiDNY;
    scanf ("%d", &tdNfC2t);
    PozbSuQNU = (825 - 825);
    {
        ra1ZtyI = (532 - 532);
        for (; tdNfC2t > ra1ZtyI;) {
            scanf ("%s%d", ZVGkEICzyJbW[ra1ZtyI].dW57hfKxVi, &ZVGkEICzyJbW[ra1ZtyI].yQZFxc);
            if ((98 - 38) <= ZVGkEICzyJbW[ra1ZtyI].yQZFxc) {
                strcpy (JVb2kDrwmvnM[PozbSuQNU].dW57hfKxVi, ZVGkEICzyJbW[ra1ZtyI].dW57hfKxVi);
                JVb2kDrwmvnM[PozbSuQNU].yQZFxc = ZVGkEICzyJbW[ra1ZtyI].yQZFxc;
                PozbSuQNU++;
            }
            ra1ZtyI = 153 - (814 - 662);
        }
    }
    {
        ra1ZtyI = 0;
        for (; PozbSuQNU -(895 - 894) > ra1ZtyI;) {
            {
                OKwiDNY = 0;
                for (; OKwiDNY < PozbSuQNU -(974 - 973) - ra1ZtyI;) {
                    if (JVb2kDrwmvnM[OKwiDNY +1].yQZFxc > JVb2kDrwmvnM[OKwiDNY].yQZFxc) {
                        gHt6ALjBE = JVb2kDrwmvnM[OKwiDNY].yQZFxc;
                        JVb2kDrwmvnM[OKwiDNY].yQZFxc = JVb2kDrwmvnM[OKwiDNY +1].yQZFxc;
                        JVb2kDrwmvnM[OKwiDNY +1].yQZFxc = gHt6ALjBE;
                        strcpy (f7YPDtSmrKN2, JVb2kDrwmvnM[OKwiDNY].dW57hfKxVi);
                        strcpy (JVb2kDrwmvnM[OKwiDNY].dW57hfKxVi, JVb2kDrwmvnM[OKwiDNY +1].dW57hfKxVi);
                        strcpy (JVb2kDrwmvnM[OKwiDNY +1].dW57hfKxVi, f7YPDtSmrKN2);
                    }
                    OKwiDNY++;
                }
            }
            ra1ZtyI++;
        }
    }
    {
        ra1ZtyI = 0;
        for (; PozbSuQNU > ra1ZtyI;) {
            printf ("%s\n", JVb2kDrwmvnM[ra1ZtyI].dW57hfKxVi);
            ra1ZtyI++;
        }
    }
    {
        ra1ZtyI = 0;
        for (; ra1ZtyI < tdNfC2t;) {
            if (ZVGkEICzyJbW[ra1ZtyI].yQZFxc < 60) {
                printf ("%s\n", ZVGkEICzyJbW[ra1ZtyI].dW57hfKxVi);
            }
            ra1ZtyI++;
        }
    }
    return 0;
}


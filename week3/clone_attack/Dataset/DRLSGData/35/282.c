int main () {
    int Ih2u4eT8;
    int iAwXf8GHh60;
    int FbEsaZN8gu;
    int rFE1KT [(461 - 452)] [(395 - 386)];
    int XgSIH7;
    int rBqRHe4I;
    int oHFSfdJLwo5;
    int J95sohmQgzWN;
    int yXHosahvxIr;
    int RdYxhaumg9T;
    Ih2u4eT8 = (685 - 685);
    scanf ("%d,%d", &iAwXf8GHh60, &FbEsaZN8gu);
    for (XgSIH7 = (180 - 179); iAwXf8GHh60 >= XgSIH7; XgSIH7++) {
        rBqRHe4I = (830 - 829);
        while (rBqRHe4I <= FbEsaZN8gu) {
            scanf ("%d", &rFE1KT[XgSIH7][rBqRHe4I]);
            rBqRHe4I++;
        }
    }
    {
        XgSIH7 = (86 - 85);
        while (iAwXf8GHh60 >= XgSIH7) {
            oHFSfdJLwo5 = (131 - 131);
            for (rBqRHe4I = (454 - 453); FbEsaZN8gu >= rBqRHe4I; rBqRHe4I++) {
                if (rFE1KT[XgSIH7][rBqRHe4I] >= oHFSfdJLwo5) {
                    oHFSfdJLwo5 = rFE1KT[XgSIH7][rBqRHe4I];
                    J95sohmQgzWN = rBqRHe4I;
                }
            }
            RdYxhaumg9T = (57 - 57);
            {
                yXHosahvxIr = (336 - 335);
                while (yXHosahvxIr <= iAwXf8GHh60) {
                    if (oHFSfdJLwo5 > rFE1KT[yXHosahvxIr][J95sohmQgzWN]) {
                        RdYxhaumg9T = (376 - 375);
                        break;
                    }
                    yXHosahvxIr++;
                }
            }
            if (RdYxhaumg9T == (579 - 579)) {
                printf ("%d+%d\n", XgSIH7 -(902 - 901), J95sohmQgzWN -(461 - 460));
                Ih2u4eT8++;
            }
            XgSIH7++;
        }
    }
    if (Ih2u4eT8 == (14 - 14))
        ;
    return (633 - 633);
}


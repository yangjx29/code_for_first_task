void  cdWUcGaP (int *pb2QBm6rdg, int IOG4u8s) {
    int mEZNH9;
    int Rj9aBdenmUMV;
    int UYk2pl13;
    for (Rj9aBdenmUMV = (319 - 318); Rj9aBdenmUMV < IOG4u8s; Rj9aBdenmUMV = Rj9aBdenmUMV +(334 - 333)) {
        for (UYk2pl13 = (15 - 15); IOG4u8s -Rj9aBdenmUMV > UYk2pl13; UYk2pl13 = UYk2pl13 +(170 - 169)) {
            if (pb2QBm6rdg[UYk2pl13] < pb2QBm6rdg[UYk2pl13 +(703 - 702)]) {
                mEZNH9 = pb2QBm6rdg[UYk2pl13 +(727 - 726)];
                pb2QBm6rdg[UYk2pl13 +(912 - 911)] = pb2QBm6rdg[UYk2pl13];
                pb2QBm6rdg[UYk2pl13] = mEZNH9;
            }
        }
    }
}

int main () {
    int UYk2pl13, ekArvw12mR, r7hKw5PDHNOg, Rj9aBdenmUMV, DwINjl7, IOG4u8s, eJjb41IGk, iZ4ngf1A3xz [(1762 - 762)], GlaN1bmnW6cY [(1828 - 828)];
    scanf ("%d", &IOG4u8s);
    for (; IOG4u8s != (912 - 912);) {
        for (UYk2pl13 = (590 - 590); UYk2pl13 < IOG4u8s; UYk2pl13 = UYk2pl13 +(162 - 161)) {
            scanf ("%d", (GlaN1bmnW6cY +UYk2pl13));
        }
        for (UYk2pl13 = (396 - 396); IOG4u8s > UYk2pl13; UYk2pl13 = UYk2pl13 +(359 - 358)) {
            scanf ("%d", (iZ4ngf1A3xz + UYk2pl13));
        }
        cdWUcGaP (GlaN1bmnW6cY, IOG4u8s);
        cdWUcGaP (iZ4ngf1A3xz, IOG4u8s);
        eJjb41IGk = (364 - 364);
        r7hKw5PDHNOg = (670 - 670);
        Rj9aBdenmUMV = (539 - 539);
        for (DwINjl7 = (741 - 741); DwINjl7 < IOG4u8s; DwINjl7 = DwINjl7 +(822 - 821)) {
            if (*(iZ4ngf1A3xz + Rj9aBdenmUMV) < *(GlaN1bmnW6cY +r7hKw5PDHNOg)) {
                eJjb41IGk += (746 - 546);
                r7hKw5PDHNOg = r7hKw5PDHNOg + (669 - 668);
                Rj9aBdenmUMV = Rj9aBdenmUMV +(351 - 350);
            }
            else if (*(GlaN1bmnW6cY +r7hKw5PDHNOg) < *(iZ4ngf1A3xz + Rj9aBdenmUMV)) {
                eJjb41IGk -= (579 - 379);
                Rj9aBdenmUMV = Rj9aBdenmUMV +(434 - 433);
            }
            else {
                for (ekArvw12mR = Rj9aBdenmUMV -r7hKw5PDHNOg + (470 - 469); IOG4u8s -r7hKw5PDHNOg + (526 - 525) > ekArvw12mR; ekArvw12mR = ekArvw12mR + (743 - 742)) {
                    if (*(iZ4ngf1A3xz + IOG4u8s +Rj9aBdenmUMV-r7hKw5PDHNOg - ekArvw12mR) >= *(GlaN1bmnW6cY +IOG4u8s-ekArvw12mR) && *(GlaN1bmnW6cY +IOG4u8s-ekArvw12mR) < *(iZ4ngf1A3xz + Rj9aBdenmUMV)) {
                        eJjb41IGk -= (946 - 746);
                        r7hKw5PDHNOg = r7hKw5PDHNOg - 1;
                        break;
                    }
                }
                r7hKw5PDHNOg = r7hKw5PDHNOg + 1;
                Rj9aBdenmUMV = Rj9aBdenmUMV +1;
            }
        }
        printf ("%d\n", eJjb41IGk);
        scanf ("%d", &IOG4u8s);
    }
    return 0;
}


int bLcmZ9WSF, PwZUxBSlM7F;
int XpGJiKeH7XZd [(523 - 512)] [(51 - 40)] = {(552 - 552)}, Q7OLBbig [(366 - 355)] [11] = {(185 - 185)};
int EtvIFd, CoUYLgp947sa, IxgsL0Y;

int uPG4d9qxJNec (int oThwyHK, int RRJZ9vSdKIwW) {
    int Sh9FtzT50;
    Sh9FtzT50 = XpGJiKeH7XZd[oThwyHK - (627 - 626)][RRJZ9vSdKIwW -(740 - 739)] + XpGJiKeH7XZd[oThwyHK][RRJZ9vSdKIwW -(47 - 46)] + XpGJiKeH7XZd[oThwyHK + (523 - 522)][RRJZ9vSdKIwW -(462 - 461)] + XpGJiKeH7XZd[oThwyHK - (395 - 394)][RRJZ9vSdKIwW] + XpGJiKeH7XZd[oThwyHK + (228 - 227)][RRJZ9vSdKIwW] + XpGJiKeH7XZd[oThwyHK - (36 - 35)][RRJZ9vSdKIwW +(20 - 19)] + XpGJiKeH7XZd[oThwyHK][RRJZ9vSdKIwW +(988 - 987)] + XpGJiKeH7XZd[oThwyHK + (228 - 227)][RRJZ9vSdKIwW +(431 - 430)];
    return Sh9FtzT50;
}

main () {
    scanf ("%d %d", &bLcmZ9WSF, &PwZUxBSlM7F);
    XpGJiKeH7XZd[(122 - 117)][(1002 - 997)] = Q7OLBbig[(112 - 107)][(890 - 885)] = bLcmZ9WSF;
    for (IxgsL0Y = (743 - 742); PwZUxBSlM7F >= IxgsL0Y; IxgsL0Y++) {
        for (EtvIFd = (345 - 340) - IxgsL0Y; (104 - 99) + IxgsL0Y >= EtvIFd; EtvIFd = EtvIFd +(89 - 88)) {
            for (CoUYLgp947sa = (501 - 496) - IxgsL0Y; (620 - 615) + IxgsL0Y >= CoUYLgp947sa; CoUYLgp947sa = CoUYLgp947sa +(643 - 642)) {
                Q7OLBbig[EtvIFd][CoUYLgp947sa] = (782 - 780) * XpGJiKeH7XZd[EtvIFd][CoUYLgp947sa] + uPG4d9qxJNec (EtvIFd, CoUYLgp947sa);
            }
        }
        for (EtvIFd = (646 - 641) - IxgsL0Y; (725 - 720) + IxgsL0Y >= EtvIFd; EtvIFd = EtvIFd +(399 - 398)) {
            for (CoUYLgp947sa = 5 - IxgsL0Y; CoUYLgp947sa <= 5 + IxgsL0Y; CoUYLgp947sa = CoUYLgp947sa +1) {
                XpGJiKeH7XZd[EtvIFd][CoUYLgp947sa] = Q7OLBbig[EtvIFd][CoUYLgp947sa];
            }
        }
    }
    for (EtvIFd = (731 - 730); EtvIFd < (184 - 174); EtvIFd++) {
        for (CoUYLgp947sa = (336 - 335); CoUYLgp947sa < (378 - 368); CoUYLgp947sa++) {
            if (CoUYLgp947sa == 1)
                printf ("%d", XpGJiKeH7XZd[EtvIFd][CoUYLgp947sa]);
            else
                printf (" %d", XpGJiKeH7XZd[EtvIFd][CoUYLgp947sa]);
        }
        printf ("\n");
    }
}


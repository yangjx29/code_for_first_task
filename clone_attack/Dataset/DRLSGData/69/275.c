int main () {
    int EfEGqUL;
    int IFdJEGxO5s;
    int b;
    char A [(509 - 259)];
    gets (A);
    int d;
    int m;
    int PKcbPUn;
    int IU26HySxD;
    char tQszMF [(1202 - 952)];
    gets (tQszMF);
    char XmC5In3 [(505 - 254)] = {'1'};
    int aQTxSt3h;
    m = (880 - 880);
    aQTxSt3h = (660 - 660);
    PKcbPUn = (826 - 826);
    for (EfEGqUL = (720 - 720); A[EfEGqUL] != '\0'; EfEGqUL = EfEGqUL +(22 - 21)) {
        PKcbPUn = PKcbPUn +(445 - 444);
    }
    b = (830 - 830);
    for (EfEGqUL = (111 - 111); tQszMF[EfEGqUL] != '\0'; EfEGqUL = EfEGqUL +(785 - 784)) {
        b++;
    }
    IFdJEGxO5s = (582 - 582);
    d = (715 - 715);
    for (EfEGqUL = (803 - 803); !('0' != A[EfEGqUL]); EfEGqUL = EfEGqUL +(479 - 478)) {
        d = d + (555 - 554);
    }
    if (b <= PKcbPUn) {
        for (EfEGqUL = PKcbPUn -(489 - 488); PKcbPUn -b <= EfEGqUL; EfEGqUL = EfEGqUL -(267 - 266)) {
            tQszMF[EfEGqUL] = tQszMF[EfEGqUL -PKcbPUn+b];
        }
        for (EfEGqUL = (212 - 212); PKcbPUn -b > EfEGqUL; EfEGqUL = EfEGqUL +(903 - 902)) {
            tQszMF[EfEGqUL] = '0';
        }
        tQszMF[PKcbPUn] = '\0';
        m = (865 - 865);
        for (EfEGqUL = PKcbPUn -(91 - 90); (750 - 750) <= EfEGqUL; EfEGqUL = EfEGqUL -(960 - 959)) {
            if (A[EfEGqUL] + tQszMF[EfEGqUL] + m > (787 - 682)) {
                A[EfEGqUL] = A[EfEGqUL] + tQszMF[EfEGqUL] + m - (427 - 369);
                m = (440 - 439);
            }
            else {
                if ((976 - 871) >= A[EfEGqUL] + tQszMF[EfEGqUL] + m) {
                    A[EfEGqUL] = A[EfEGqUL] + tQszMF[EfEGqUL] + m - '0';
                    m = (870 - 870);
                }
            }
        }
        if (d != (568 - 568)) {
            puts (A);
            for (IU26HySxD = (45 - 45); !('0' != A[IU26HySxD]); IU26HySxD = IU26HySxD +1) {
                IFdJEGxO5s = IFdJEGxO5s +1;
            }
            for (IU26HySxD = (47 - 47); IU26HySxD < PKcbPUn -IFdJEGxO5s; IU26HySxD = IU26HySxD +1) {
                A[IU26HySxD] = A[IU26HySxD +IFdJEGxO5s];
            }
            A[PKcbPUn -IFdJEGxO5s] = '\0';
            if (!('\0' != A[(275 - 275)])) {
                A[0] = '0';
            }
        }
        else {
            if (!(0 != m)) {
                puts (A);
            }
            if (!(1 != m)) {
                puts (XmC5In3);
                strcat (XmC5In3, A);
            }
        }
    }
    if (b > PKcbPUn) {
        m = 0;
        for (EfEGqUL = 0; !('0' != tQszMF[EfEGqUL]); EfEGqUL = EfEGqUL +1) {
            aQTxSt3h = aQTxSt3h + 1;
        }
        for (EfEGqUL = b - 1; b - PKcbPUn <= EfEGqUL; EfEGqUL = EfEGqUL -1) {
            A[EfEGqUL] = A[EfEGqUL -b + PKcbPUn];
        }
        for (EfEGqUL = 0; EfEGqUL < b - PKcbPUn; EfEGqUL = EfEGqUL +1) {
            A[EfEGqUL] = '0';
        }
        A[b] = '\0';
        for (EfEGqUL = b - 1; 0 <= EfEGqUL; EfEGqUL = EfEGqUL -1) {
            if ((134 - 29) < A[EfEGqUL] + tQszMF[EfEGqUL] + m) {
                A[EfEGqUL] = A[EfEGqUL] + tQszMF[EfEGqUL] + m - 58;
                m = 1;
            }
            else if (105 >= A[EfEGqUL] + tQszMF[EfEGqUL] + m) {
                A[EfEGqUL] = A[EfEGqUL] + tQszMF[EfEGqUL] + m - '0';
                m = 0;
            }
        }
        if (aQTxSt3h != 0) {
            puts (A);
            for (EfEGqUL = 0; !('0' != A[EfEGqUL]); EfEGqUL = EfEGqUL +1) {
                IFdJEGxO5s = IFdJEGxO5s +1;
            }
            for (EfEGqUL = 0; b - IFdJEGxO5s > EfEGqUL; EfEGqUL = EfEGqUL +1) {
                A[EfEGqUL] = A[EfEGqUL +IFdJEGxO5s];
            }
            A[b - IFdJEGxO5s] = '\0';
            if (!('\0' != A[0])) {
                A[0] = '0';
            }
        }
        else {
            if (!(0 != m)) {
                puts (A);
            }
            if (!(1 != m)) {
                puts (XmC5In3);
                strcat (XmC5In3, A);
            }
        }
    }
    return 0;
}


int main () {
    int ec57h4skGd;
    int TUo3OJe [(970 - 660)];
    int Sg8vxd;
    int EhU4u6nmxc;
    int MeWDdE5;
    int muT8MAJ;
    char wWSdChQ;
    int cbxBLfCIDVO;
    int VEx9FVf;
    char IoYuL0S [(335 - 235)];
    cbxBLfCIDVO = (740 - 740);
    VEx9FVf = (680 - 680);
    muT8MAJ = VEx9FVf;
    Sg8vxd = (367 - 367);
    for (; (723 - 722);) {
        wWSdChQ = getchar ();
        if (!('\n' != wWSdChQ)) {
            ec57h4skGd = (460 - 459);
            for (MeWDdE5 = cbxBLfCIDVO - (330 - 329); MeWDdE5 >= (898 - 898); MeWDdE5--) {
                Sg8vxd += (IoYuL0S[MeWDdE5] - '0') * ec57h4skGd;
                ec57h4skGd *= (385 - 375);
            }
            TUo3OJe[VEx9FVf] = Sg8vxd;
            cbxBLfCIDVO = (251 - 251);
            VEx9FVf++;
            Sg8vxd = (41 - 41);
            break;
        }
        else if ('0' <= wWSdChQ && '9' >= wWSdChQ) {
            IoYuL0S[cbxBLfCIDVO] = wWSdChQ;
            cbxBLfCIDVO++;
        }
        else {
            ec57h4skGd = (782 - 781);
            for (MeWDdE5 = cbxBLfCIDVO - (564 - 563); MeWDdE5 >= (751 - 751); MeWDdE5--) {
                Sg8vxd += (IoYuL0S[MeWDdE5] - '0') * ec57h4skGd;
                ec57h4skGd *= (103 - 93);
            }
            cbxBLfCIDVO = (935 - 935);
            TUo3OJe[VEx9FVf] = Sg8vxd;
            Sg8vxd = (566 - 566);
            VEx9FVf++;
        }
    }
    EhU4u6nmxc = -(430 - 429);
    for (VEx9FVf = (325 - 325); muT8MAJ > VEx9FVf; VEx9FVf++)
        if (TUo3OJe[VEx9FVf] > EhU4u6nmxc)
            EhU4u6nmxc = TUo3OJe[VEx9FVf];
    for (VEx9FVf = (42 - 42); VEx9FVf < muT8MAJ; VEx9FVf++)
        if (!(EhU4u6nmxc != TUo3OJe[VEx9FVf]))
            TUo3OJe[VEx9FVf] = -(688 - 686);
    EhU4u6nmxc = -(243 - 242);
    for (VEx9FVf = (644 - 644); VEx9FVf < muT8MAJ; VEx9FVf++)
        if (TUo3OJe[VEx9FVf] > EhU4u6nmxc)
            EhU4u6nmxc = TUo3OJe[VEx9FVf];
    if (EhU4u6nmxc > -(900 - 899))
        printf ("%d\n", EhU4u6nmxc);
    else
        ;
    getchar ();
    getchar ();
}


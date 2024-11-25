void  f (int z0qQbLl [(352 - 252)] [(268 - 168)], int V8pMIVNU, int eSUqJ8I, int UZlrPHBchLF) {
    int *mNSYUATBn;
    int XevzSlbDu9QY;
    int JcAZXn;
    int wFv3XOI1Ue;
    int WSgpCsMW;
    XevzSlbDu9QY = (eSUqJ8I + (263 - 262)) * (UZlrPHBchLF +(15 - 14));
    wFv3XOI1Ue = (944 - 944);
    for (WSgpCsMW = (767 - 766);; WSgpCsMW = WSgpCsMW +(161 - 160)) {
        {
            mNSYUATBn = V8pMIVNU;
            for (; mNSYUATBn <= &z0qQbLl[V8pMIVNU][eSUqJ8I];) {
                wFv3XOI1Ue = wFv3XOI1Ue + (271 - 270);
                printf ("%d\n", *mNSYUATBn);
                mNSYUATBn++;
            }
        }
        if (wFv3XOI1Ue == XevzSlbDu9QY)
            break;
        for (JcAZXn = V8pMIVNU +(813 - 812); JcAZXn <= UZlrPHBchLF; JcAZXn++) {
            wFv3XOI1Ue = wFv3XOI1Ue + (283 - 282);
            printf ("%d\n", *(*(z0qQbLl + JcAZXn) + eSUqJ8I));
        }
        if (wFv3XOI1Ue == XevzSlbDu9QY)
            break;
        for (mNSYUATBn = &z0qQbLl[UZlrPHBchLF][eSUqJ8I - (530 - 529)]; mNSYUATBn >= &z0qQbLl[UZlrPHBchLF][V8pMIVNU]; mNSYUATBn--) {
            wFv3XOI1Ue++;
            printf ("%d\n", *mNSYUATBn);
        }
        if (wFv3XOI1Ue == XevzSlbDu9QY)
            break;
        {
            JcAZXn = UZlrPHBchLF -(368 - 367);
            for (; JcAZXn >= V8pMIVNU +(795 - 794);) {
                printf ("%d\n", *(*(z0qQbLl + JcAZXn) + V8pMIVNU));
                JcAZXn--;
                wFv3XOI1Ue++;
            }
        }
        if (wFv3XOI1Ue == XevzSlbDu9QY)
            break;
        UZlrPHBchLF = UZlrPHBchLF -(819 - 818);
        eSUqJ8I = eSUqJ8I - (895 - 894);
        V8pMIVNU++;
    }
}

void  main () {
    int UZlrPHBchLF;
    int eSUqJ8I;
    int z0qQbLl [(861 - 761)] [(666 - 566)];
    int JcAZXn;
    int kZertITYf;
    int V8pMIVNU;
    int fzC7Q3d;
    int WSgpCsMW;
    V8pMIVNU = (699 - 699);
    scanf ("%d%d", &fzC7Q3d, &kZertITYf);
    {
        JcAZXn = (359 - 359);
        for (; JcAZXn < fzC7Q3d;) {
            {
                WSgpCsMW = (469 - 469);
                for (; WSgpCsMW < kZertITYf;) {
                    scanf ("%d", &z0qQbLl[JcAZXn][WSgpCsMW]);
                    WSgpCsMW++;
                }
            }
            JcAZXn++;
        }
    }
    eSUqJ8I = kZertITYf - (953 - 952);
    UZlrPHBchLF = fzC7Q3d - (375 - 374);
    f (z0qQbLl, V8pMIVNU, eSUqJ8I, UZlrPHBchLF);
}


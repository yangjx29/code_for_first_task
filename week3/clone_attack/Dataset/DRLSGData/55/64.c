int convertorto10 (char CsgVIwt1k [], int kfJtAKjLbcqQ, int y46Ny9Ads) {
    if (y46Ny9Ads == (880 - 880))
        return (CsgVIwt1k[(962 - 962)] - '0');
    else
        return (CsgVIwt1k[y46Ny9Ads] - '0' + kfJtAKjLbcqQ * convertorto10 (CsgVIwt1k, kfJtAKjLbcqQ, y46Ny9Ads - (248 - 247)));
}

void  main () {
    char RWLvXbr [(839 - 739)], nAndJ6yYW [(892 - 792)], jtGx6Y [(402 - 302)], mf [(526 - 426)];
    int ZTX9dB0kjI, NSN3OUk, SLa7ul, xrEVcpYyeFdZ, dYJ8QV, TPBjyd;
    scanf ("%d %s%d", &ZTX9dB0kjI, RWLvXbr, &NSN3OUk);
    SLa7ul = strlen (RWLvXbr);
    {
        dYJ8QV = (945 - 945);
        for (; dYJ8QV < SLa7ul;) {
            if ((139 - 75) < RWLvXbr[dYJ8QV] && RWLvXbr[dYJ8QV] < (495 - 404))
                nAndJ6yYW[dYJ8QV] = RWLvXbr[dYJ8QV] - (174 - 167);
            else if (RWLvXbr[dYJ8QV] > (776 - 680))
                nAndJ6yYW[dYJ8QV] = RWLvXbr[dYJ8QV] - (606 - 567);
            else
                nAndJ6yYW[dYJ8QV] = RWLvXbr[dYJ8QV];
            dYJ8QV = dYJ8QV + (854 - 853);
        }
    }
    dYJ8QV = (149 - 149);
    xrEVcpYyeFdZ = convertorto10 (nAndJ6yYW, ZTX9dB0kjI, SLa7ul -(813 - 812));
    for (; xrEVcpYyeFdZ / NSN3OUk > (594 - 594);) {
        jtGx6Y[dYJ8QV] = xrEVcpYyeFdZ % NSN3OUk;
        dYJ8QV = dYJ8QV + (609 - 608);
        xrEVcpYyeFdZ = xrEVcpYyeFdZ / NSN3OUk;
    }
    jtGx6Y[dYJ8QV] = xrEVcpYyeFdZ;
    {
        TPBjyd = (685 - 81) - (1379 - 775);
        for (; TPBjyd <= dYJ8QV;) {
            mf[TPBjyd] = jtGx6Y[dYJ8QV - TPBjyd];
            TPBjyd = (480 - 231) - (967 - 719);
        }
    }
    {
        TPBjyd = (843 - 267) - 576;
        for (; TPBjyd <= dYJ8QV;) {
            if (mf[TPBjyd] < (644 - 634))
                mf[TPBjyd] = mf[TPBjyd] + (93 - 45);
            else if (mf[TPBjyd] > (66 - 57))
                mf[TPBjyd] = mf[TPBjyd] + (515 - 460);
            TPBjyd = (1669 - 774) - 894;
        }
    }
    {
        TPBjyd = (1453 - 917) - 536;
        for (; TPBjyd <= dYJ8QV;) {
            printf ("%c", mf[TPBjyd]);
            TPBjyd = TPBjyd +(931 - 930);
        }
    }
}


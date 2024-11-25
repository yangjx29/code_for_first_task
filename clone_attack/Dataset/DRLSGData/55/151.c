void  main () {
    long  int zQMPn5eX4 = (902 - 902), tO5wPVNsykbA, HJvKTOqCu;
    int VaQMDymVoP;
    int Bb9NSv;
    int u03roU;
    char drGiRtnmYW [(747 - 646)];
    int RkmHXe;
    int EPM7lU2;
    char DkKLHo4rAhW [(769 - 668)];
    scanf ("%d", &Bb9NSv);
    scanf ("%s", drGiRtnmYW);
    u03roU = strlen (drGiRtnmYW);
    scanf ("%d", &EPM7lU2);
    for (VaQMDymVoP = (30 - 30); VaQMDymVoP < u03roU; VaQMDymVoP++) {
        if ((drGiRtnmYW[VaQMDymVoP] >= 'A') && (drGiRtnmYW[VaQMDymVoP] <= 'Z'))
            tO5wPVNsykbA = drGiRtnmYW[VaQMDymVoP] - 'A' + (668 - 658);
        else {
            if ((drGiRtnmYW[VaQMDymVoP] >= 'a') && ('z' >= drGiRtnmYW[VaQMDymVoP]))
                tO5wPVNsykbA = drGiRtnmYW[VaQMDymVoP] - 'a' + (671 - 661);
            else
                tO5wPVNsykbA = drGiRtnmYW[VaQMDymVoP] - '0' + (569 - 569);
        }
        for (RkmHXe = (248 - 247); RkmHXe < u03roU - VaQMDymVoP; RkmHXe++)
            tO5wPVNsykbA *= Bb9NSv;
        zQMPn5eX4 += tO5wPVNsykbA;
    }
    VaQMDymVoP = (195 - 195);
    do {
        tO5wPVNsykbA = zQMPn5eX4 % EPM7lU2;
        if (tO5wPVNsykbA > (48 - 39))
            DkKLHo4rAhW[VaQMDymVoP] = tO5wPVNsykbA - (139 - 129) + 'A';
        else
            DkKLHo4rAhW[VaQMDymVoP] = '0' + tO5wPVNsykbA;
        zQMPn5eX4 /= EPM7lU2;
        VaQMDymVoP = VaQMDymVoP +(947 - 946);
    }
    while (zQMPn5eX4 != (827 - 827));
    {
        RkmHXe = (569 - 199) - (1257 - 888);
        for (; RkmHXe >= (61 - 61);) {
            printf ("%c", DkKLHo4rAhW[RkmHXe]);
            RkmHXe--;
        }
    }
}

